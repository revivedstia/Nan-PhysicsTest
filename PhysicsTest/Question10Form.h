#pragma once
#include "GlobalVariables.h"
#include "ResultsForm.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Question10Form
	/// </summary>
	public ref class Question10Form : public System::Windows::Forms::Form
	{
	public:
		Question10Form(void)
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
		~Question10Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lb_otvet;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_4;

	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_2;


	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lb_otvet = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(582, 373);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Çàâåðùèòü òåñòèðîâàíèå";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question10Form::button1_Click);
			// 
			// lb_otvet
			// 
			this->lb_otvet->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_otvet->AutoSize = true;
			this->lb_otvet->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->lb_otvet->Location = System::Drawing::Point(342, 160);
			this->lb_otvet->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_otvet->Name = L"lb_otvet";
			this->lb_otvet->Size = System::Drawing::Size(114, 23);
			this->lb_otvet->TabIndex = 31;
			this->lb_otvet->Text = L"Íåò îòâåòà";
			this->lb_otvet->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->label3->Location = System::Drawing::Point(126, 160);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 23);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Âàø âàðèàíò îòâåòà:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->btn_4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_4->Location = System::Drawing::Point(488, 277);
			this->btn_4->Margin = System::Windows::Forms::Padding(2);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(338, 38);
			this->btn_4->TabIndex = 29;
			this->btn_4->Text = L"Ëèíçà Ëóíåíáåðãà";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &Question10Form::btn_4_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->btn_3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_3->Location = System::Drawing::Point(130, 277);
			this->btn_3->Margin = System::Windows::Forms::Padding(2);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(338, 38);
			this->btn_3->TabIndex = 27;
			this->btn_3->Text = L"Ñôåðè÷åñêèé ãðàäàí";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &Question10Form::btn_3_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_1->Location = System::Drawing::Point(130, 223);
			this->btn_1->Margin = System::Windows::Forms::Padding(2);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(338, 38);
			this->btn_1->TabIndex = 26;
			this->btn_1->Text = L"Ïëàíàðíûé âîëíîâîä";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &Question10Form::btn_1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->label2->Location = System::Drawing::Point(126, 64);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(657, 69);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Âîïðîñ 10\r\n\r\n×òî èç íèæåïåðå÷èñëåííîãî íå ÿâëÿåòñÿ àáñîëþòíûì ïðèáîðîì\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->btn_2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_2->Location = System::Drawing::Point(488, 220);
			this->btn_2->Margin = System::Windows::Forms::Padding(2);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(338, 38);
			this->btn_2->TabIndex = 32;
			this->btn_2->Text = L"«Ðûáèé ãëàç» Ìàêñâåëëà ";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &Question10Form::btn_2_Click_1);
			// 
			// Question10Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->lb_otvet);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Location = System::Drawing::Point(653, 366);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"Question10Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Òåñò ïî íàíîôèçèêå - 10 âîïðîñ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
int answer = 0;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (answer == 0) {
		MessageBox::Show("Äëÿ ïðîäîëæåíèÿ âûáåðèòå âàðèàíò îòâåòà", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (answer == 1) {
		answers[9] = true;
		MessageBox::Show("Âû îòâåòèëè ïðàâèëüíî!", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[9] = false;
		MessageBox::Show("Âû îòâåòèëè íåïðàâèëüíî", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Îðãàíèçàöèÿ ïåðåõîäà íà ñëåäóþùóþ ôîðìó
	ResultsForm^ q10 = gcnew ResultsForm();
	q10->Owner = this->Owner;
	q10->Show();
	this->Hide();
}
private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
	answer = 1;
	lb_otvet->Text = Convert::ToString(btn_1->Text);
}
private: System::Void btn_2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	answer = 2;
	lb_otvet->Text = Convert::ToString(btn_2->Text);
}
private: System::Void btn_3_Click(System::Object^ sender, System::EventArgs^ e) {
	answer = 3;
	lb_otvet->Text = Convert::ToString(btn_3->Text);
}
private: System::Void btn_4_Click(System::Object^ sender, System::EventArgs^ e) {
	answer = 4;
	lb_otvet->Text = Convert::ToString(btn_4->Text);
}

};
}
