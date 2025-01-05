#pragma once
#include "HomeForm.h"
#include "LoginForm.h"
#include "SigninForm.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ HomeForm
	/// </summary>
	public ref class HomeForm : public System::Windows::Forms::Form
	{
	public:
		HomeForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~HomeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ cmd_theory;
	private: System::Windows::Forms::Button^ cmd_test;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cmd_theory = (gcnew System::Windows::Forms::Button());
			this->cmd_test = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cmd_theory
			// 
			this->cmd_theory->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_theory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_theory->Location = System::Drawing::Point(136, 297);
			this->cmd_theory->Margin = System::Windows::Forms::Padding(2);
			this->cmd_theory->Name = L"cmd_theory";
			this->cmd_theory->Size = System::Drawing::Size(199, 37);
			this->cmd_theory->TabIndex = 19;
			this->cmd_theory->Text = L"Òåîðèÿ";
			this->cmd_theory->UseVisualStyleBackColor = true;
			this->cmd_theory->Click += gcnew System::EventHandler(this, &HomeForm::cmd_theory_Click);
			// 
			// cmd_test
			// 
			this->cmd_test->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmd_test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmd_test->Location = System::Drawing::Point(136, 256);
			this->cmd_test->Margin = System::Windows::Forms::Padding(2);
			this->cmd_test->Name = L"cmd_test";
			this->cmd_test->Size = System::Drawing::Size(199, 37);
			this->cmd_test->TabIndex = 18;
			this->cmd_test->Text = L"Âîéòè";
			this->cmd_test->UseVisualStyleBackColor = true;
			this->cmd_test->Click += gcnew System::EventHandler(this, &HomeForm::cmd_test_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(132, 147);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(644, 72);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Òåñò ïî òåìå\r\n«Ôèçè÷åñêèå îñíîâû íàíîòåõíîëîãèé ôîòîíèêè è îïòîèíôîðìàòèêè»\r\n\r\n";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(404, 421);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Ìîñêâà, 2024 ã.";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(478, 312);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(300, 40);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Ïðîâåðèë: äîö. êàô. «Èíôîðìàòèêà» \r\nÃóðèêîâ Ñ.Ð.";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(478, 262);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 40);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Âûïîëíèëà: ñòóäåíòêà ãð. ÁÝÈ2301\r\nÂàñèëåö À.Ì.\r\n";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(312, 59);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Äèñöèïëèíà «Ïðîåêòíûé ïðàêòèêóì»\r\n";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(350, 40);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Êàôåäðà «Èíôîðìàòèêà»";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(240, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(451, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Ìîñêîâñêèé òåõíè÷åñêèé óíèâåðñèòåò ñâÿçè è èíôîðìàòè";
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(902, 458);
			this->Controls->Add(this->cmd_theory);
			this->Controls->Add(this->cmd_test);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(706, 461);
			this->Name = L"HomeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Òåñò ïî íàíîôèçèêå";
			this->Load += gcnew System::EventHandler(this, &HomeForm::HomeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cmd_theory_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("theory.pdf");
}
private: System::Void cmd_test_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ f = gcnew LoginForm();
	f->Owner = this;
	f->Show();
	this->Hide();
}

private: System::Void HomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
