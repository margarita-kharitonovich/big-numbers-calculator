#include "Calculator.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^>^ args) {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Калькулятор::Calculator form;
	Application::Run(% form);
	return 0;
}

System::Void Калькулятор::Calculator::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	comboBox1->Text = L"";
	return System::Void();
}

bool Калькулятор::Calculator::Protect(const std::string& str)
{
	int flag = 0;
	for (char c : str) {
		if (isdigit(c)) {
			flag++;
		}
	}
	if (flag == str.size())
		return true;
	else if (flag == str.size() - 1 && str[0] == '-')
		return true;
	else
		return false;
}

// Сложение
void Калькулятор::Calculator::Addition(string str1, string str2)
{
	if (textBox1->Text == L"") {
		return;
	}
	if (textBox2->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit b(str2);
		big_digit result;
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		result = a + b;
		ss << result;
		ss >> res;
		s += str1 + " + " + str2 + " = " + res;
		string = gcnew String(s.c_str());
		textBox3->Text = string;
		panel1->Show();
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

// Вычитание
void Калькулятор::Calculator::Subtraction(string str1, string str2)
{
	if (textBox1->Text == L"") {
		return;
	}
	if (textBox2->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit b(str2);
		big_digit result;
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		result = a - b;
		ss << result;
		ss >> res;
		s += str1 + " - " + str2 + " = " + res;
		string = gcnew String(s.c_str());
		textBox3->Text = string;
		panel1->Show();
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

// Умножение
void Калькулятор::Calculator::Multiplication(string str1, string str2)
{
	if (textBox1->Text == L"") {
		return;
	}
	if (textBox2->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit b(str2);
		big_digit result;
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		result = a * b;
		ss << result;
		ss >> res;
		s += str1 + " * " + str2 + " = " + res;
		string = gcnew String(s.c_str());
		textBox3->Text = string;
		panel1->Show();
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

// Деление
void Калькулятор::Calculator::Division(string str1, string str2)
{
	if (textBox1->Text == L"") {
		return;
	}
	if (textBox2->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit b(str2);
		big_digit result, reminder, zero("0");
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		result = a / b;
		reminder = a - (a / b) * b;
		ss << result;
		ss >> res;
		s += str1 + " / " + str2 + " = " + res;
		if (reminder.IsNegative() == 1)
			reminder = -(reminder);
		if (reminder != zero) {
			panel3->Show();
		}
		else {
			string = gcnew String(s.c_str());
			textBox3->Text = string;
			panel1->Show();
		}
		
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

// Нахождение остатка от деления
void Калькулятор::Calculator::Remainder(string str1, string str2)
{
	if (textBox1->Text == L"") {
		return;
	}
	if (textBox2->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit b(str2);
		big_digit result;
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		result = a % b;
		ss << result;
		ss >> res;
		s += str1 + " % " + str2 + " = " + res;
		string = gcnew String(s.c_str());
		textBox3->Text = string;
		panel1->Show();
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

// Возведение в степень
void Калькулятор::Calculator::Exponentiation(string str1, string str2)
{
	if (textBox1->Text == L"") {
		return;
	}
	if (textBox2->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit b(str2);
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		big_digit result = a.pow(b);
		ss << result;
		ss >> res;
		s += str1 + " ^ " + str2 + " = " + res;
		string = gcnew String(s.c_str());
		textBox3->Text = string;
		panel1->Show();
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

// Нахождение факториала
void Калькулятор::Calculator::Factorial(string str1)
{
	if (textBox1->Text == L"") {
		return;
	}
	try {
		big_digit a(str1);
		big_digit result;
		std::stringstream ss;
		std::string s, res;
		System::String^ string;
		result = a.fact();
		ss << result;
		ss >> res;
		s += str1 + "! = " + res;
		string = gcnew String(s.c_str());
		textBox3->Text = string;
		panel1->Show();
	}
	catch (const char* error_message) {
		string error;
		System::String^ string;
		error = error_message;
		string = gcnew String(error.c_str());
		MessageBox::Show(this, string, "Ошибка");
	}
}

System::Void Калькулятор::Calculator::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);

	if (Protect(tb1) && Protect(tb2)) {
		switch (comboBox1->SelectedIndex) {
		// Сложение
		case 0: {
			Addition(tb1, tb2);
			break;
		}

		// Вычитание
		case 1: {
			Subtraction(tb1, tb2);
			break;
		}

		// Умножение
		case 2: {
			Multiplication(tb1, tb2);
			break;
		}

		// Деление
		case 3: {
			Division(tb1, tb2);
			break;
		}

		// Нахождение остатка от деления
		case 4: {
			Remainder(tb1, tb2);
			break;
		}

		// Возведение в степень
		case 5: {
			Exponentiation(tb1, tb2);
			break;
		}

		// Нахождение факториала
		case 6: {
			Factorial(tb1);
			break;
		}
		}
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (comboBox1->SelectedIndex == 6)
	{
		textBox2->Text = L"";
		textBox2->Enabled = false;
	}
	else {
		textBox2->Enabled = true;
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::button3_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Hide();
	return System::Void();
}

System::Void Калькулятор::Calculator::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Калькулятор::Calculator::сложениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 0;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Addition(tb1, tb2);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::вычитаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 1;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Subtraction(tb1, tb2);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::умножениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 2;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Multiplication(tb1, tb2);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::делениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 3;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Division(tb1, tb2);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::нахождениеОстаткаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 4;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Remainder(tb1, tb2);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::возведениеВСтепеньToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 5;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Exponentiation(tb1, tb2);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->SelectedIndex = 6;
	string tb1, tb2;
	tb1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	tb2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	if (Protect(tb1) && Protect(tb2)) {
		Factorial(tb1);
	}
	else {
		MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::загрузитьСФайлаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ filename = openFileDialog1->FileName;
		try {
			FileStream^ fileStream = gcnew FileStream(filename, FileMode::Open, FileAccess::Read);

			StreamReader^ reader = gcnew StreamReader(fileStream);
			String^ fileContent = reader->ReadToEnd();

			reader->Close();
			fileStream->Close();

			string str, tb1, tb2;
			System::String^ string;
			str = msclr::interop::marshal_as< std::string >(fileContent);
			std::istringstream iss(str);

			iss >> tb1;
			iss >> tb2;

			if (Protect(tb1) && Protect(tb2)) {
				string = gcnew String(tb1.c_str());
				textBox1->Text = string;
				string = gcnew String(tb2.c_str());
				textBox2->Text = string;
			}
			else {
				MessageBox::Show(this, "Ошибка ввода!", "Ошибка");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(this, "Ошибка при открытии файла: " + ex->Message, "Ошибка");
		}
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::button4_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Hide();
	panel2->Hide();
	return System::Void();
}

System::Void Калькулятор::Calculator::textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	setlocale(LC_ALL, "Russian");
	char number = e->KeyChar;
	if (!(Char::IsDigit(number) || number == '-' || number == '\b')) {
		e->Handled = true;
	}
	if (textBox1->Text->StartsWith("-") || textBox1->Text->Length > 0) {
		if (textBox1->Text == "-") {
			if (number == '0')
				textBox1->Text = "0";
		}
		if (!(Char::IsDigit(number) || number == '\b')) {
			e->Handled = true;
		}
	}
	if (textBox1->Text == "0") {
		if (Char::IsDigit(number) || number == '\b') {
			if (e->KeyChar == '0') e->Handled = true;
			else textBox1->Text = "";
		}
		else {
			e->Handled = true;
		}
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	setlocale(LC_ALL, "Russian");
	char number = e->KeyChar;
	if (!(Char::IsDigit(number) || number == '-' || number == '\b')) {
		e->Handled = true;
	}
	if (textBox2->Text->StartsWith("-") || textBox2->Text->Length > 0) {
		if (textBox2->Text == "-") {
			if (number == '0')
				textBox2->Text = "0";
		}
		if (!(Char::IsDigit(number) || number == '\b')) {
			e->Handled = true;
		}
	}
	if (textBox2->Text == "0") {
		if (Char::IsDigit(number) || number == '\b') {
			if (e->KeyChar == '0') e->Handled = true;
			else textBox2->Text = "";
		}
		else {
			e->Handled = true;
		}
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	setlocale(LC_ALL, "Russian");
	char number = e->KeyChar;
	if (Char::IsDigit(number) || number == '\b'){

	}
	else {
		e->Handled = true;
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::button5_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	string str;
	str = msclr::interop::marshal_as< std::string >(textBox5->Text);
	if (str.length() == 0)
		str = "0";
	precision = stoll(str);
	string str1 = msclr::interop::marshal_as< std::string >(textBox1->Text);
	string str2 = msclr::interop::marshal_as< std::string >(textBox2->Text);
	big_digit a(str1);
	big_digit b(str2);
	big_digit result, reminder;
	std::stringstream ss;
	std::string s, res;
	System::String^ string;
	result = a / b;
	reminder = a - (a / b) * b;
	if (reminder.IsNegative() == 1)
		reminder = -(reminder);
	ss << result;
	ss >> res;
	s += str1 + " / " + str2 + " = " + res;
	s += reminder.Presicion(b, precision);
	string = gcnew String(s.c_str());
	textBox3->Text = string;
	panel1->Show();
	panel3->Hide();
	panel1->Show();
	return System::Void();
}

System::Void Калькулятор::Calculator::сохранитьВФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox3->Text != L"") {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				StreamWriter^ streamWriter = gcnew StreamWriter(saveFileDialog1->FileName);
				streamWriter->Write(textBox3->Text);
				streamWriter->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(this, "Ошибка при сохранении в файл: " + ex->Message, "Ошибка");
			}
		}
	}
	else {
		MessageBox::Show(this, "Для сохранения результата необходимо выполнить арифметическую операцию!", "Ошибка");
	}
	return System::Void();
}

System::Void Калькулятор::Calculator::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Show();
	panel2->Show();
	return System::Void();
}

System::Void Калькулятор::Calculator::руководствоПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	system("cls");
	system("Руководство.pdf");
}
