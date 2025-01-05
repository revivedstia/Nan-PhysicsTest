#pragma once
#include "SigninForm.h"
#include "OwnForm.h"
#include "GlobalVariables.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MyDLLCLR;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cmd_to_home;
	protected:
	private: System::Windows::Forms::Button^ cmd_to_signin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ cmd_login;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtLogin;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->cmd_to_home = (gcnew System::Windows::Forms::Button());
			this->cmd_to_signin = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmd_login = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cmd_to_home
			// 
			this->cmd_to_home->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->cmd_to_home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_to_home->Location = System::Drawing::Point(312, 781);
			this->cmd_to_home->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->cmd_to_home->Name = L"cmd_to_home";
			this->cmd_to_home->Size = System::Drawing::Size(752, 67);
			this->cmd_to_home->TabIndex = 33;
			this->cmd_to_home->Text = L"На главную";
			this->cmd_to_home->UseVisualStyleBackColor = true;
			this->cmd_to_home->Click += gcnew System::EventHandler(this, &LoginForm::cmd_to_home_Click);
			// 
			// cmd_to_signin
			// 
			this->cmd_to_signin->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->cmd_to_signin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_to_signin->Location = System::Drawing::Point(652, 702);
			this->cmd_to_signin->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->cmd_to_signin->Name = L"cmd_to_signin";
			this->cmd_to_signin->Size = System::Drawing::Size(406, 67);
			this->cmd_to_signin->TabIndex = 32;
			this->cmd_to_signin->Text = L"Зарегистирироваться";
			this->cmd_to_signin->UseVisualStyleBackColor = true;
			this->cmd_to_signin->Click += gcnew System::EventHandler(this, &LoginForm::cmd_to_signin_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(306, 715);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(318, 37);
			this->label4->TabIndex = 31;
			this->label4->Text = L"У меня нет аккаунта ";
			// 
			// cmd_login
			// 
			this->cmd_login->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->cmd_login->Location = System::Drawing::Point(320, 525);
			this->cmd_login->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->cmd_login->Name = L"cmd_login";
			this->cmd_login->Size = System::Drawing::Size(746, 67);
			this->cmd_login->TabIndex = 30;
			this->cmd_login->Text = L"Войти";
			this->cmd_login->UseVisualStyleBackColor = true;
			this->cmd_login->Click += gcnew System::EventHandler(this, &LoginForm::cmd_login_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(312, 387);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 44);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Пароль";
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtPassword->Location = System::Drawing::Point(320, 438);
			this->txtPassword->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(742, 50);
			this->txtPassword->TabIndex = 27;
			this->txtPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::txtPassword_KeyPress);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(312, 260);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 44);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Логин";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(470, 106);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(430, 44);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Вход в личный кабинет";
			// 
			// txtLogin
			// 
			this->txtLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtLogin->Location = System::Drawing::Point(320, 312);
			this->txtLogin->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(742, 50);
			this->txtLogin->TabIndex = 24;
			this->txtLogin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::txtName_KeyPress);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(972, 387);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 50);
			this->button1->TabIndex = 34;
			this->button1->Text = L"*";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(158, 317);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 44);
			this->label5->TabIndex = 35;
			this->label5->Text = L"anna";
			// 
			// label6
			// 
			this->label6->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(158, 448);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 44);
			this->label6->TabIndex = 36;
			this->label6->Text = L"123456";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 881);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cmd_to_home);
			this->Controls->Add(this->cmd_to_signin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmd_login);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtLogin);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MinimumSize = System::Drawing::Size(1386, 821);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - Авторизация";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//переход между формами
private: System::Void cmd_to_home_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
private: System::Void cmd_to_signin_Click(System::Object^ sender, System::EventArgs^ e) {
	SigninForm^ f = gcnew SigninForm();
	f->Owner = this;
	f->Show();
	this->Hide();

	//f->Owner = this->Owner;
	//f->Show();
	//this->Close();
}

//* на поле пароля
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtPassword->PasswordChar != '*')
		txtPassword->PasswordChar = '*';
	else
		if (txtPassword->PasswordChar != 0)
			txtPassword->PasswordChar = 0;
}

	   //Защита от дурака
private: System::Void txtName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true; // Запрет ввода

	if (Char::IsLetter(e->KeyChar))
		e->Handled = false;

	if (e->KeyChar == (char)Keys::Back)
		e->Handled = false;

	if (e->KeyChar == (char)Keys::Space)
		e->Handled = true; // Запрет ввода
}
private: System::Void txtPassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = false;

	if (e->KeyChar == (char)Keys::Space)
		e->Handled = true; // Запрет ввода

}

// авторизация
private: System::Void cmd_login_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = txtLogin->Text;
	String^ pass = txtPassword->Text;
	user_index = Class1::UserIndex("users.txt", login);
	String^ user_login = Class1::UserLogin("users.txt", user_index);

	if (login == "") {
		MessageBox::Show("Поле \"Логин\" не зполнено", "Сообщение",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	if (pass == "") {
		MessageBox::Show("Поле \"Пароль\" не зполнено", "Сообщение",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	if (user_login == "") {
		MessageBox::Show("Пользователя с таким логином не существует", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (Class1::UserPassword("users.txt", user_login) != pass) {
		MessageBox::Show("Пароль не верный", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	OwnForm^ f = gcnew OwnForm();
	f->Owner = this;
	f->Show();
	this->Hide();

}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
