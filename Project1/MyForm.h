#include <stdio.h>
#include <iostream>
#include <vector>

double a, b, j, result;
wchar_t symb;
int i = 1;
std::vector<double> digit;
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_plusminus;
	protected:

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_div;
	private: System::Windows::Forms::Button^ button_mult;













	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_backspace;


	private: System::Windows::Forms::Button^ button_ce;

	private: System::Windows::Forms::Button^ button_res;
	private: System::Windows::Forms::TextBox^ resultBox;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_plusminus = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_backspace = (gcnew System::Windows::Forms::Button());
			this->button_ce = (gcnew System::Windows::Forms::Button());
			this->button_res = (gcnew System::Windows::Forms::Button());
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(12, 276);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(60, 60);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button_dot
			// 
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->Location = System::Drawing::Point(78, 276);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(60, 60);
			this->button_dot->TabIndex = 1;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button_plusminus
			// 
			this->button_plusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plusminus->Location = System::Drawing::Point(144, 276);
			this->button_plusminus->Name = L"button_plusminus";
			this->button_plusminus->Size = System::Drawing::Size(60, 60);
			this->button_plusminus->TabIndex = 2;
			this->button_plusminus->Text = L"±";
			this->button_plusminus->UseVisualStyleBackColor = true;
			this->button_plusminus->Click += gcnew System::EventHandler(this, &MyForm::button_plusminus_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(78, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(144, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(78, 144);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(144, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 78);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(78, 78);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(144, 78);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 11;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button_div
			// 
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->Location = System::Drawing::Point(209, 78);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(60, 60);
			this->button_div->TabIndex = 12;
			this->button_div->Text = L"÷";
			this->button_div->UseVisualStyleBackColor = true;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button_mult
			// 
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mult->Location = System::Drawing::Point(209, 144);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(60, 60);
			this->button_mult->TabIndex = 13;
			this->button_mult->Text = L"×";
			this->button_mult->UseVisualStyleBackColor = true;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::button_mult_Click);
			// 
			// button_minus
			// 
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->Location = System::Drawing::Point(209, 210);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(60, 60);
			this->button_minus->TabIndex = 14;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_plus
			// 
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(209, 276);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(60, 60);
			this->button_plus->TabIndex = 15;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_backspace
			// 
			this->button_backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_backspace->Location = System::Drawing::Point(275, 78);
			this->button_backspace->Name = L"button_backspace";
			this->button_backspace->Size = System::Drawing::Size(60, 60);
			this->button_backspace->TabIndex = 16;
			this->button_backspace->Text = L"←";
			this->button_backspace->UseVisualStyleBackColor = true;
			this->button_backspace->Click += gcnew System::EventHandler(this, &MyForm::button_backspace_Click);
			// 
			// button_ce
			// 
			this->button_ce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ce->Location = System::Drawing::Point(275, 144);
			this->button_ce->Name = L"button_ce";
			this->button_ce->Size = System::Drawing::Size(60, 60);
			this->button_ce->TabIndex = 17;
			this->button_ce->Text = L"CE";
			this->button_ce->UseVisualStyleBackColor = true;
			this->button_ce->Click += gcnew System::EventHandler(this, &MyForm::button_ce_Click);
			// 
			// button_res
			// 
			this->button_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_res->Location = System::Drawing::Point(275, 210);
			this->button_res->Name = L"button_res";
			this->button_res->Size = System::Drawing::Size(60, 126);
			this->button_res->TabIndex = 18;
			this->button_res->Text = L"=";
			this->button_res->UseVisualStyleBackColor = true;
			this->button_res->Click += gcnew System::EventHandler(this, &MyForm::button_res_Click);
			// 
			// resultBox
			// 
			this->resultBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultBox->Location = System::Drawing::Point(12, 12);
			this->resultBox->Name = L"resultBox";
			this->resultBox->ReadOnly = true;
			this->resultBox->Size = System::Drawing::Size(323, 58);
			this->resultBox->TabIndex = 21;
			this->resultBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 349);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->button_res);
			this->Controls->Add(this->button_ce);
			this->Controls->Add(this->button_backspace);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_plusminus);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button0);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {			//0
	resultBox->Text = resultBox->Text + "0";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {			//1
	resultBox->Text = resultBox->Text + "1";
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {		//2
	resultBox->Text = resultBox->Text + "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {			//3
	resultBox->Text = resultBox->Text + "3";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {			//4
	resultBox->Text = resultBox->Text + "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {			//5
	resultBox->Text = resultBox->Text + "5";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {			//6
	resultBox->Text = resultBox->Text + "6";
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {		//7
	resultBox->Text = resultBox->Text + "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {			//8
	resultBox->Text = resultBox->Text + "8";
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {		//9
	resultBox->Text = resultBox->Text + "9";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {		//÷
	symb = '/';
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		a = System::Convert::ToDouble(resultBox->Text);
		if (i % 2 == 1)
		{
			resultBox->Text = "";
			digit.push_back(a);
			i++;
		}
		else
			if (i % 2 == 0)
			{
				digit.push_back(a);
				result = digit[0] / digit[1];
				digit.erase(digit.begin(), digit.end());
				resultBox->Text = result.ToString();
				i++;
			}
	}
}
private: System::Void button_mult_Click(System::Object^ sender, System::EventArgs^ e) {		//*
	symb = '*';
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		a = System::Convert::ToDouble(resultBox->Text);
		if (i % 2 == 1)
		{
			resultBox->Text = "";
			digit.push_back(a);
			i++;
		}
		else
			if (i % 2 == 0)
			{
				digit.push_back(a);
				result = digit[0] * digit[1];
				digit.erase(digit.begin(), digit.end());
				resultBox->Text = result.ToString();
				i++;
			}
	}
}
private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {	//-
	symb = '-';
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		a = System::Convert::ToDouble(resultBox->Text);
		if (i % 2 == 1)
		{
			resultBox->Text = "";
			digit.push_back(a);
			i++;
		}
		else
			if (i % 2 == 0)
			{
				digit.push_back(a);
				result = digit[0] - digit[1];
				digit.erase(digit.begin(), digit.end());
				resultBox->Text = result.ToString();
				i++;
			}
	}
}
private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {		//+
	symb = '+';
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		a = System::Convert::ToDouble(resultBox->Text);
		if (i % 2 == 1)
		{
			resultBox->Text = "";
			digit.push_back(a);
			i++;
		}
		else
			if (i % 2 == 0)
			{
				digit.push_back(a);
				result = digit[0] + digit[1];
				digit.erase(digit.begin(), digit.end());
				resultBox->Text = result.ToString();
				i++;
			}
	}
}
private: System::Void button_plusminus_Click(System::Object^ sender, System::EventArgs^ e) {//±
	if (i % 2 == 1) symb = 'p';
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		j = System::Convert::ToDouble(resultBox->Text);
		j = 0 - j;
		resultBox->Text = j.ToString();
		j = 0;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {			//.
	resultBox->Text = resultBox->Text + ",";
}
private: System::Void button_ce_Click(System::Object^ sender, System::EventArgs^ e) {		//CE
	resultBox->Clear();
	a = 0;
	b = 0;
	digit.erase(digit.begin(), digit.end());
	i = 1;
	result = 0;
}
private: System::Void button_backspace_Click(System::Object^ sender, System::EventArgs^ e) {//←
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		int i = str->Length - 1;
		String^ str2;
		str2 = str->Remove(i, 1);
		resultBox->Text = str2;
	}
}
private: System::Void button_res_Click(System::Object^ sender, System::EventArgs^ e) {		//=
	String^ str;
	str = System::Convert::ToString(resultBox->Text);
	int n = str->Length;
	if (n != 0)
	{
		if (digit.size() != 0)
		{
			b = System::Convert::ToDouble(resultBox->Text);
			if (symb == '/') result = digit[0] / b;
			if (symb == '*') result = digit[0] * b;
			if (symb == '+') result = digit[0] + b;
			if (symb == '-') result = digit[0] - b;
			if (symb == 'p') result = b;
		}
		else
		{
			b = System::Convert::ToDouble(resultBox->Text);
			result = b;
		}
		resultBox->Text = result.ToString();
		digit.erase(digit.begin(), digit.end());
		symb = ' ';
		b = 0;
		i = 1;
	}
}
private: System::Void resultBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {	//Окно результата
}
};
}
