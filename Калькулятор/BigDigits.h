// Харитонович Маргарита, ФСК, Прикладная информатика, 2 курс, 21-я группа
// Индивидуальное задание: «Большие числа»
#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using std::string;
using std::vector;
using std::ostream;

class big_digit {
	static const int BASE = 1e9;
	bool is_negative;
	vector<long long>digits;
public:

	// Инициализация, удаление и вывод
	big_digit();
	big_digit(string str);
	big_digit(long long x);
	big_digit(big_digit* other);
	big_digit(const big_digit& other);
	~big_digit();
	friend ostream& operator <<(ostream& os, const big_digit& bi);
	string Standart();
	string Presicion(big_digit x, long long n);
	long long Length();

	// Вспомогательные функции
	void shift_right();
	void remove_leading_zeros();
	bool IsNegative();

	// Проверка на чётность/нечётность
	bool odd() const;
	bool even() const;

	// Операторы сравнения
	friend bool operator ==(const big_digit& left, const big_digit& right);
	friend bool operator !=(const big_digit& left, const big_digit& right);
	friend bool operator <(const big_digit& left, const big_digit& right);
	friend bool operator <=(const big_digit& left, const big_digit& right);
	friend bool operator >(const big_digit& left, const big_digit& right);
	friend bool operator >=(const big_digit& left, const big_digit& right);

	// Арифметические операторы
	const big_digit operator +() const;
	const big_digit operator -() const;
	big_digit& operator=(const big_digit& other);
	friend const big_digit operator +(big_digit left, const big_digit& right);
	friend const big_digit operator -(big_digit left, const big_digit& right);
	friend const big_digit operator *(const big_digit& left, const big_digit& right);
	friend const big_digit operator *(const big_digit& a, const long long& b);
	friend const big_digit operator /(const big_digit& left, const big_digit& right);
	friend const big_digit operator /(const big_digit& left, const long long& right);
	friend const big_digit operator %(const big_digit& left, const big_digit& right);
	big_digit& operator++();
	big_digit& operator--();
	big_digit operator ++(int);
	big_digit operator --(int);

	// Составное присваивание
	big_digit& operator +=(const big_digit& value);
	big_digit& operator -=(const big_digit& value);
	big_digit& operator *=(const big_digit& value);
	big_digit& operator /=(const big_digit& value);

	// Степень и факториал
	big_digit pow(big_digit n) const;
	big_digit fact();
};