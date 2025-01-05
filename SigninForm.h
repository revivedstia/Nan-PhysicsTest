#pragma once
#include <stdio.h>
#include <ctype.h>

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MyDLLCLR;

	/// <summary>
	/// Сводка для SigninForm
	/// </summary>
	public ref class SigninForm : public System::Windows::Forms::Form
	{
	public:
		SigninForm(void)
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
		~SigninForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPassword2;
	private: System::Windows::Forms::Button^ cmd_to_login;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ cmd_signin;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtName;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPassword2 = (gcnew System::Windows::Forms::TextBox());
			this->cmd_to_login = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmd_signin = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->Location = System::Drawing::Point(156, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 24);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Имя";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(156, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 24);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Повторите пароль";
			// 
			// txtPassword2
			// 
			this->txtPassword2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtPassword2->Location = System::Drawing::Point(160, 300);
			this->txtPassword2->Name = L"txtPassword2";
			this->txtPassword2->PasswordChar = '*';
			this->txtPassword2->Size = System::Drawing::Size(373, 29);
			this->txtPassword2->TabIndex = 32;
			this->txtPassword2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SigninForm::txtPassword_KeyPress);
			// 
			// cmd_to_login
			// 
			this->cmd_to_login->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->cmd_to_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_to_login->Location = System::Drawing::Point(392, 428);
			this->cmd_to_login->Name = L"cmd_to_login";
			this->cmd_to_login->Size = System::Drawing::Size(138, 28);
			this->cmd_to_login->TabIndex = 31;
			this->cmd_to_login->Text = L"Войти";
			this->cmd_to_login->UseVisualStyleBackColor = true;
			this->cmd_to_login->Click += gcnew System::EventHandler(this, &SigninForm::cmd_to_login_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(152, 430);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(231, 24);
			this->label4->TabIndex = 30;
			this->label4->Text = L"У меня уже есть аккаунт";
			// 
			// cmd_signin
			// 
			this->cmd_signin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_signin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->cmd_signin->Location = System::Drawing::Point(160, 344);
			this->cmd_signin->Name = L"cmd_signin";
			this->cmd_signin->Size = System::Drawing::Size(373, 35);
			this->cmd_signin->TabIndex = 29;
			this->cmd_signin->Text = L"Зарегистрироваться";
			this->cmd_signin->UseVisualStyleBackColor = true;
			this->cmd_signin->Click += gcnew System::EventHandler(this, &SigninForm::cmd_signin_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(486, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 26);
			this->button1->TabIndex = 28;
			this->button1->Text = L"*";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SigninForm::button1_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(156, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 24);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Пароль";
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtPassword->Location = System::Drawing::Point(160, 240);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(373, 29);
			this->txtPassword->TabIndex = 26;
			this->txtPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SigninForm::txtPassword_KeyPress);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(156, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 24);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Логин";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(218, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 24);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Регистрация пользователя";
			// 
			// txtLogin
			// 
			this->txtLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtLogin->Location = System::Drawing::Point(160, 174);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(373, 29);
			this->txtLogin->TabIndex = 23;
			this->txtLogin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SigninForm::txtPassword_KeyPress);
			// 
			// txtName
			// 
			this->txtName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtName->Location = System::Drawing::Point(160, 118);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(373, 29);
			this->txtName->TabIndex = 37;
			this->txtName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SigninForm::txtName_KeyPress);
			// 
			// SigninForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 458);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPassword2);
			this->Controls->Add(this->cmd_to_login);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmd_signin);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtLogin);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MinimumSize = System::Drawing::Size(701, 446);
			this->Name = L"SigninForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - Регистрация пользователя";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cmd_to_login_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}

// регистрация
private: System::Void cmd_signin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = txtName->Text;
	String^ login = txtLogin->Text;
	String^ pass = txtPassword->Text;
	String^ pass2 = txtPassword2->Text;

	if (name == "") {
		MessageBox::Show("Поле \"Имя\" не зполнено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	if (login == "") {
		MessageBox::Show("Поле \"Логин\" не зполнено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	if (pass == "") {
		MessageBox::Show("Поле \"Пароль\" не зполнено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	if (pass2 == "") {
		MessageBox::Show("Поле \"Повторите пароль\" не зполнено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	if (pass != pass2) {
		MessageBox::Show("Пароли не совпадают", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	if (Class1::UserIndex("users.txt", login) != -1) {
		MessageBox::Show("Пользователь с таким логином уже существует", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	String^ ind = Convert::ToString(Class1::LastIndex("users.txt") + 1);
	Class1::PrinInFile("users.txt", ind + ";" + login + ";" + name + ";" + pass + ";0");
	MessageBox::Show("Пользователь успешно зарегистрирован", "",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
	Owner->Show();
	this->Close();
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

	//* на поля паролей
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtPassword->PasswordChar != '*')
	{
		txtPassword->PasswordChar = '*';
		txtPassword2->PasswordChar = '*';
	}
	else if (txtPassword->PasswordChar != 0)
	{
		txtPassword->PasswordChar = 0;
		txtPassword2->PasswordChar = 0;
	}	
}
};
}
