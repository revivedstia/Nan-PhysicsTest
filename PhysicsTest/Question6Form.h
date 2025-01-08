#pragma once
#include "GlobalVariables.h"
#include "Question7Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Question6Form
	/// </summary>
	public ref class Question6Form : public System::Windows::Forms::Form
	{
	public:
		Question6Form(void)
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
		~Question6Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cb1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cb2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cb1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cb2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(646, 345);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ñëåäóþùèé âîïðîñ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question6Form::button1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->label2->Location = System::Drawing::Point(137, 76);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 69);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Âîïðîñ 6\r\n\r\nÇàïîëíèòå ïðîïóñêè.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// cb1
			// 
			this->cb1->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cb1->FormattingEnabled = true;
			this->cb1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1 íì", L"3 íì", L"8 íì", L"16 íì" });
			this->cb1->Location = System::Drawing::Point(495, 212);
			this->cb1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cb1->Name = L"cb1";
			this->cb1->Size = System::Drawing::Size(105, 30);
			this->cb1->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(137, 253);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(438, 24);
			this->label1->TabIndex = 37;
			this->label1->Text = L"È êàæäàÿ òàêàÿ íàíîòî÷êà ìîæåò õðàíèòü îäèí";
			// 
			// cb2
			// 
			this->cb2->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cb2->FormattingEnabled = true;
			this->cb2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"áèò", L"áàéò", L"êèëîáèò" });
			this->cb2->Location = System::Drawing::Point(579, 251);
			this->cb2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cb2->Name = L"cb2";
			this->cb2->Size = System::Drawing::Size(105, 30);
			this->cb2->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(691, 253);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 24);
			this->label3->TabIndex = 39;
			this->label3->Text = L"èíôîðìàöèè.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(137, 164);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(683, 72);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Íîâàÿ ïàìÿòü íà îñíîâå êðåìíèåâûõ íàíîòî÷åê. Íîâàÿ ïàìÿòü ñîñòîèò\r\nèç ñëîÿ äèýëåê"
				L"òðè÷åñêîãî ìàòåðèàëà ñ âêëþ÷åííûìè â íåãî äèñêðåòíûìè\r\nêðåìíèåâûì íàíîòî÷êàìè, ä"
				L"èàìåòðîì \r\n";
			// 
			// Question6Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cb2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cb1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->MinimumSize = System::Drawing::Size(972, 480);
			this->Name = L"Question6Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Òåñò ïî íàíîôèçèêå - 6 âîïðîñ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cb1->SelectedIndex == -1 || cb2->SelectedIndex == -1) {
		MessageBox::Show("Äëÿ ïðîäîëæåíèÿ âûáåðèòå âàðèàíò îòâåòà", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	if (cb1->SelectedIndex == 1 && cb2->SelectedIndex == 0) {
		answers[5] = true;
		MessageBox::Show("Âû îòâåòèëè ïðàâèëüíî!", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[5] = false;
		MessageBox::Show("Âû îòâåòèëè íåïðàâèëüíî", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	//Îðãàíèçàöèÿ ïåðåõîäà íà ñëåäóþùóþ ôîðìó
	Question7Form^ q6 = gcnew Question7Form();
	q6->Owner = this->Owner;
	q6->Show();
	this->Hide();
}
};
}
