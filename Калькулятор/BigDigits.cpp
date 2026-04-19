// Харитонович Маргарита, ФСК, Прикладная информатика, 2 курс, 21-я группа
// Индивидуальное задание: «Большие числа»
#include "BigDigits.h"

// Инициализация, удаление и вывод
big_digit::big_digit() {
	digits.push_back(0);
	is_negative = false;
}
big_digit::big_digit(string str) {
	if (str.length() == 0) {
		this->is_negative = false;
	}
	else {
		if (str[0] == '-') {
			str = str.substr(1);
			this->is_negative = true;
		}
		else {
			this->is_negative = false;
		}
		for (long long i = str.size(); i > 0; i -= 9) {
			if (i < 9)
				this->digits.push_back(atoi(str.substr(0, i).c_str()));
			else
				this->digits.push_back(atoi(str.substr(i - 9, 9).c_str()));
		}
		this->remove_leading_zeros();
	}
}
big_digit::big_digit(long long x) {
	while (x) {
		digits.push_back(x % BASE);
		x /= BASE;
	}
	this->remove_leading_zeros();
	if (x < 0)
		this->is_negative = true;
	else
		this->is_negative = false;
}
big_digit::big_digit(big_digit* other) {
	is_negative = other->is_negative;
	digits = other->digits;
}
big_digit::big_digit(const big_digit& other) {
	is_negative = other.is_negative;
	digits = other.digits;
}
big_digit::~big_digit() {
	digits.clear();
}
ostream& operator <<(ostream& os, const big_digit& bi) {
	if (bi.digits.empty())
	{
		if (bi.is_negative == 1)
			os << "-";
		os << 0;
	}
	else {
		if (bi.is_negative == 1)
			os << "-";
		os << bi.digits[bi.digits.size() - 1];
		for (int i = bi.digits.size() - 2; i >= 0; i--)
			os << std::setfill('0') << std::setw(9) << bi.digits[i];
	}
	return os;
}
string big_digit::Standart() {
	string s;
	long long k = 0, l = 1;
	long long a = digits[digits.size() - 1];
	if (a == 0) {
		s += "0";
		return s;
	}
	while (a) {
		a /= 10;
		k++;
		l *= 10;
	}
	l /= 10;
	k--;
	long long n = (digits.size() - 1) * 9 + k;
	if (is_negative == true)
		s += "-";
	s += std::to_string(digits[digits.size() - 1] / l) + "." + std::to_string(digits[digits.size() - 1] % l) + " * 10^" + std::to_string(n);
	return s;
}
string big_digit::Presicion(big_digit y, long long n)
{
	if (n == 0)
		return "";
	string str, res = ".";
	big_digit x(*this);
	big_digit z(y);
	z.is_negative = false;
	big_digit result;
	big_digit o("0");
	long long k, num = n;
	if (x == o) {
		return "";
	}
	if (x > z)
		x = x / z;
	while (num > 0) {
		std::stringstream ss;
		x = x * 10;
		while (x < z) {
			x *= 10;
			res += "0";
		}
		result = x / z;
		k = result.Length();
		x = x % z;
		ss << result;
		ss >> str;
		res += str;
		if (x == o)
			break;
		num = num - k;
	}
	while (res[res.length() - 1] == '0') {
		res.pop_back();
	}
	while (res.length() > n + 1) {
		res.pop_back();
	}
	return res;
}
long long big_digit::Length()
{
	long long k = 0;
	long long a = digits[digits.size() - 1];
	while (a) {
		a /= 10;
		k++;
	}
	long long n = (digits.size() - 1) * 9 + k;
	return n;
}

// Вспомогательные функции
void  big_digit::shift_right() {
	if (this->digits.size() == 0) {
		this->digits.push_back(0);
		return;
	}
	this->digits.push_back(this->digits[this->digits.size() - 1]);
	for (long long i = this->digits.size() - 2; i > 0; --i) this->digits[i] = this->digits[i - 1];
	this->digits[0] = 0;
}
void big_digit::remove_leading_zeros() {
	while (this->digits.size() > 1 && this->digits.back() == 0) {
		this->digits.pop_back();
	}
	if (this->digits.size() == 1 && this->digits[0] == 0) this->is_negative = false;
}
bool big_digit::IsNegative() {
	return is_negative == 1;
}
bool IsNegative(long long a) {
	return a < 0;
}

// Проверка на чётность/нечётность
bool big_digit::odd() const {
	if (this->digits.size() == 0) return false;
	return this->digits[0] & 1;
}
bool big_digit::even() const {
	return !this->odd();
}

// Операторы сравнения
bool operator ==(const big_digit& left, const big_digit& right) {
	if (left.is_negative != right.is_negative) return false;
	if (left.digits.empty()) {
		if (right.digits.empty() || (right.digits.size() == 1 && right.digits[0] == 0)) return true;
		else return false;
	}
	if (right.digits.empty()) {
		if (left.digits.size() == 1 && left.digits[0] == 0) return true;
		else return false;
	}
	if (left.digits.size() != right.digits.size()) return false;
	for (long long i = 0; i < left.digits.size(); ++i) if (left.digits[i] != right.digits[i]) return false;
	return true;
}
bool operator !=(const big_digit& left, const big_digit& right) {
	return !(left == right);
}
bool operator <(const big_digit& left, const big_digit& right) {
	if (left == right) return false;
	if (left.is_negative) {
		if (right.is_negative) return ((-right) < (-left));
		else return true;
	}
	else if (right.is_negative) return false;
	else {
		if (left.digits.size() != right.digits.size()) {
			return left.digits.size() < right.digits.size();
		}
		else {
			for (long long i = static_cast<long long>(left.digits.size()) - 1; i >= 0; --i) {
				if (left.digits[i] != right.digits[i]) return left.digits[i] < right.digits[i];
			}

			return false;
		}
	}
}
bool operator <=(const big_digit& left, const big_digit& right) {
	return (left < right || left == right);
}
bool operator >(const big_digit& left, const big_digit& right) {
	return !(left <= right);
}
bool operator >=(const big_digit& left, const big_digit& right) {
	return !(left < right);
}

// Арифметические операторы
const big_digit big_digit::operator +() const {
	return big_digit(*this);
}
const big_digit big_digit::operator -() const {
	big_digit copy(*this);
	copy.is_negative = !copy.is_negative;
	return copy;
}
big_digit& big_digit:: operator=(const big_digit& other) {
	is_negative = other.is_negative;
	digits = other.digits;
	return *this;
}
const big_digit operator +(big_digit left, const big_digit& right) {
	if (left.is_negative) {
		if (right.is_negative) return -(-left + (-right));
		else return right - (-left);
	}
	else if (right.is_negative) return left - (-right);
	int carry = 0;
	for (long long i = 0; i < std::max(left.digits.size(), right.digits.size()) || carry != 0; ++i) {
		if (i == left.digits.size()) left.digits.push_back(0);
		left.digits[i] += carry + (i < right.digits.size() ? right.digits[i] : 0);
		carry = left.digits[i] >= big_digit::BASE;
		if (carry != 0) left.digits[i] -= big_digit::BASE;
	}
	left.remove_leading_zeros();
	return left;
}
const big_digit operator -(big_digit left, const big_digit& right) {
	if (right.is_negative) return left + (-right);
	else if (left.is_negative) return -(-left + right);
	else if (left < right) return -(right - left);
	int carry = 0;
	for (long long i = 0; i < right.digits.size() || carry != 0; ++i) {
		left.digits[i] -= carry + (i < right.digits.size() ? right.digits[i] : 0);
		carry = left.digits[i] < 0;
		if (carry != 0) left.digits[i] += big_digit::BASE;
	}
	left.remove_leading_zeros();
	return left;
}
const big_digit operator *(const big_digit& a, const long long& b) {
	big_digit res = a;
	int carry = 0;
	for (long long i = 0; i < res.digits.size() || carry; ++i) {
		if (i == res.digits.size())
			res.shift_right();
		long long cur = carry + res.digits[i] * 1ll * b;
		res.digits[i] = int(cur % big_digit::BASE);
		carry = int(cur / res.BASE);
	}
	res.is_negative = a.is_negative != IsNegative(b);
	res.remove_leading_zeros();
	return res;
}
const big_digit operator *(const big_digit& left, const big_digit& right) {
	big_digit result;
	result.digits.resize(left.digits.size() + right.digits.size());
	for (long long i = 0; i < left.digits.size(); ++i) {
		int carry = 0;
		for (long long j = 0; j < right.digits.size() || carry != 0; ++j) {
			long long cur = result.digits[i + j] +
				left.digits[i] * 1LL * (j < right.digits.size() ? right.digits[j] : 0) + carry;
			result.digits[i + j] = static_cast<int>(cur % big_digit::BASE);
			carry = static_cast<int>(cur / big_digit::BASE);
		}
	}
	result.is_negative = left.is_negative != right.is_negative;
	result.remove_leading_zeros();
	return result;
}
const big_digit operator /(const big_digit& left, const long long& right) {
	big_digit o("0");
	if (right == 0) throw "Деление на ноль!";
	if (left == o) return o;
	long long i, r = 0, temp;
	big_digit result;
	big_digit copy(left);
	result.digits.resize(copy.digits.size());
	for (i = copy.digits.size() - 1; i >= 0; --i) {
		temp = r * big_digit::BASE + copy.digits[i];
		result.digits[i] = temp / right;
		r = temp - result.digits[i] * right;
	}
	result.remove_leading_zeros();
	result.is_negative = left.is_negative != IsNegative(right);
	return result;
}
const big_digit operator /(const big_digit& left, const big_digit& right) {
	big_digit zero("0");
	big_digit one("1");
	if (right == zero) throw "Деление на ноль!";
	if (left == zero) return zero;
	if (right == one) return left;
	if (left == right) return one;
	big_digit a = left;
	a.is_negative = false;
	big_digit b = right;
	b.is_negative = false;
	big_digit L("0"), R(left), m;
	R.is_negative = false;
	while (L <= R) {
		m = (L + R) / 2;
		if (m * b >= a)
			R = m - 1;
		else
			L = m + 1;
	}
	if (L * b > a)
		L -= 1;
	L.remove_leading_zeros();
	L.is_negative = left.is_negative != right.is_negative;
	return L;
}
const big_digit operator %(const big_digit& left, const big_digit& right) {
	big_digit result = left - (left / right) * right;
	if (result.is_negative) result += right;
	return result;
}
big_digit& big_digit::operator++() {
	*this += 1;
	return *this;
}
big_digit& big_digit::operator--() {
	*this -= 1;
	return *this;
}
big_digit big_digit::operator ++(int) {
	big_digit a = *this;
	*this += 1;
	return a;
}
big_digit big_digit::operator --(int) {
	big_digit a = *this;
	*this -= 1;
	return a;
}

// Составное присваивание
big_digit& big_digit::operator +=(const big_digit& value) {
	return *this = (*this + value);
}
big_digit& big_digit::operator -=(const big_digit& value) {
	return *this = (*this - value);
}
big_digit& big_digit::operator *=(const big_digit& value) {
	return *this = (*this * value);
}
big_digit& big_digit::operator /=(const big_digit& value) {
	return *this = (*this / value);
}

// Степень и факториал
big_digit big_digit::pow(big_digit n) const {
	if (n.is_negative == 1) {
		throw "Возведение в степень только для неотрицательных целых значений показателя.";
	}
	big_digit a(*this), result(1);
	big_digit zero("0");
	while (n != zero) {
		if (n.odd()) result *= a;
		a *= a;
		n /= 2;
	}
	result.remove_leading_zeros();
	return result;
}
big_digit big_digit::fact() {
	if (this->is_negative == 1) {
		throw "Нахождение факториала для отрицательного числа невозможно.";
	}
	big_digit f(1);
	for (big_digit i(2); i <= *this; i++) {
		f *= i;
	}
	f.remove_leading_zeros();
	return f;
}