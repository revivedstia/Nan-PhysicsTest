#pragma once
#include "GlobalVariables.h"
#include "Question6Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Question5Form
	/// </summary>
	public ref class Question5Form : public System::Windows::Forms::Form
	{
	public:
		Question5Form(void)
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
		~Question5Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_otvet;
	private: System::Windows::Forms::Label^ lb_o;
	private: System::Windows::Forms::HScrollBar^ sb;











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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_otvet = (gcnew System::Windows::Forms::Label());
			this->lb_o = (gcnew System::Windows::Forms::Label());
			this->sb = (gcnew System::Windows::Forms::HScrollBar());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(689, 329);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ñëåäóþùèé âîïðîñ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question5Form::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(93, 73);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(790, 72);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Âîïðîñ ¹5\r\n\r\nÊàêîå âðåìÿ ïåðåêëþ÷åíèÿ ìîæåò èìåòü ñîâðåìåííîå ÏÇÓ åìêîñòüþ 1 Ìáèò"
				L" èìåþò\?";
			// 
			// lb_otvet
			// 
			this->lb_otvet->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_otvet->AutoSize = true;
			this->lb_otvet->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->lb_otvet->Location = System::Drawing::Point(213, 276);
			this->lb_otvet->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_otvet->Name = L"lb_otvet";
			this->lb_otvet->Size = System::Drawing::Size(22, 23);
			this->lb_otvet->TabIndex = 43;
			this->lb_otvet->Text = L"0";
			this->lb_otvet->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lb_o
			// 
			this->lb_o->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_o->AutoSize = true;
			this->lb_o->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->lb_o->Location = System::Drawing::Point(93, 276);
			this->lb_o->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_o->Name = L"lb_o";
			this->lb_o->Size = System::Drawing::Size(119, 23);
			this->lb_o->TabIndex = 42;
			this->lb_o->Text = L"Âàø îòâåò:";
			this->lb_o->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// sb
			// 
			this->sb->Location = System::Drawing::Point(97, 187);
			this->sb->Minimum = 10;
			this->sb->Name = L"sb";
			this->sb->Size = System::Drawing::Size(766, 73);
			this->sb->TabIndex = 41;
			this->sb->Value = 10;
			this->sb->ValueChanged += gcnew System::EventHandler(this, &Question5Form::sb_ValueChanged);
			// 
			// Question5Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 441);
			this->Controls->Add(this->lb_otvet);
			this->Controls->Add(this->lb_o);
			this->Controls->Add(this->sb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(972, 480);
			this->Name = L"Question5Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Òåñò ïî íàíîôèçèêå - 5 âîïðîñ";
			this->Load += gcnew System::EventHandler(this, &Question5Form::Question5Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Question5Form_Load(System::Object^ sender, System::EventArgs^ e) {
	sb->Minimum = 10;
	sb->Maximum = 1000;
	sb->Value = 500;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (80 <= sb->Value && sb->Value <= 150) {
		answers[4] = true;
		MessageBox::Show("Âû îòâåòèëè ïðàâèëüíî!", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[4] = false;
		MessageBox::Show("Âû îòâåòèëè íåïðàâèëüíî", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Îðãàíèçàöèÿ ïåðåõîäà íà ñëåäóþùóþ ôîðìó
	Question6Form^ q5 = gcnew Question6Form();
	q5->Owner = this->Owner;
	q5->Show();
	this->Hide();
}
private: System::Void sb_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	lb_otvet->Text = Convert::ToString(sb->Value) + "íñ";
}

};
}
