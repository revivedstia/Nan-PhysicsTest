#pragma once
#include "GlobalVariables.h"
#include "Question1Form.h"
#include "OwnStatisticsForm.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MyDLLCLR;

	/// <summary>
	/// Сводка для OwnForm
	/// </summary>
	public ref class OwnForm : public System::Windows::Forms::Form
	{
	public:
		OwnForm(void)
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
		~OwnForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cmd_statistics;
	protected:
	private: System::Windows::Forms::Button^ cmd_theory;
	private: System::Windows::Forms::Button^ cmd_test;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labName;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

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
			this->cmd_statistics = (gcnew System::Windows::Forms::Button());
			this->cmd_theory = (gcnew System::Windows::Forms::Button());
			this->cmd_test = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labName = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cmd_statistics
			// 
			this->cmd_statistics->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_statistics->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_statistics->Location = System::Drawing::Point(351, 237);
			this->cmd_statistics->Margin = System::Windows::Forms::Padding(2);
			this->cmd_statistics->Name = L"cmd_statistics";
			this->cmd_statistics->Size = System::Drawing::Size(250, 37);
			this->cmd_statistics->TabIndex = 30;
			this->cmd_statistics->Text = L"Личная статистика";
			this->cmd_statistics->UseVisualStyleBackColor = true;
			this->cmd_statistics->Click += gcnew System::EventHandler(this, &OwnForm::cmd_statistics_Click);
			// 
			// cmd_theory
			// 
			this->cmd_theory->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_theory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_theory->Location = System::Drawing::Point(353, 367);
			this->cmd_theory->Margin = System::Windows::Forms::Padding(2);
			this->cmd_theory->Name = L"cmd_theory";
			this->cmd_theory->Size = System::Drawing::Size(250, 37);
			this->cmd_theory->TabIndex = 29;
			this->cmd_theory->Text = L"Теория";
			this->cmd_theory->UseVisualStyleBackColor = true;
			this->cmd_theory->Click += gcnew System::EventHandler(this, &OwnForm::cmd_theory_Click);
			// 
			// cmd_test
			// 
			this->cmd_test->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_test->Location = System::Drawing::Point(351, 191);
			this->cmd_test->Margin = System::Windows::Forms::Padding(2);
			this->cmd_test->Name = L"cmd_test";
			this->cmd_test->Size = System::Drawing::Size(250, 37);
			this->cmd_test->TabIndex = 28;
			this->cmd_test->Text = L"Начать тестирование";
			this->cmd_test->UseVisualStyleBackColor = true;
			this->cmd_test->Click += gcnew System::EventHandler(this, &OwnForm::cmd_test_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(260, 124);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(447, 72);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Тест по теме «Физические основы \r\nнанотехнологий фотоники и оптоинформатики»\r\n\r\n";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(137, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(374, 20);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Выполнен вход в учетную запись полязователя";
			// 
			// labName
			// 
			this->labName->AutoSize = true;
			this->labName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->labName->Location = System::Drawing::Point(515, 12);
			this->labName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labName->Name = L"labName";
			this->labName->Size = System::Drawing::Size(70, 26);
			this->labName->TabIndex = 31;
			this->labName->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(632, 8);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 37);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Выйти из аккаутнта";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OwnForm::button1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->label2->Location = System::Drawing::Point(162, 335);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(632, 18);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Перед прохождением тестирования рекомендуем ознакомиться с теорией";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// OwnForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labName);
			this->Controls->Add(this->cmd_statistics);
			this->Controls->Add(this->cmd_theory);
			this->Controls->Add(this->cmd_test);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"OwnForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - Личная страница";
			this->Load += gcnew System::EventHandler(this, &OwnForm::OwnForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void OwnForm_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ login = Class1::UserLogin("users.txt", user_index);
	labName->Text = Class1::UserName("users.txt", login);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
private: System::Void cmd_theory_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("theory.pdf");
}
private: System::Void cmd_test_Click(System::Object^ sender, System::EventArgs^ e) {
	//Организация перехода на следующую форму
	Question1Form^ q = gcnew Question1Form();
	q->Owner = this;
	q->Show();
	this->Hide();
}
private: System::Void cmd_statistics_Click(System::Object^ sender, System::EventArgs^ e) {
	//Организация перехода на следующую форму
	OwnStatisticsForm^ q1 = gcnew OwnStatisticsForm();
	q1->Owner = this;
	q1->Show();
	this->Hide();
}
};
}
