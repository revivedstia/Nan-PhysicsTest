#pragma once
#include "GlobalVariables.h"
#include "Question9Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Question8Form
	/// </summary>
	public ref class Question8Form : public System::Windows::Forms::Form
	{
	public:
		Question8Form(void)
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
		~Question8Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckedListBox^ clb;
	private: System::Windows::Forms::Label^ label2;
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
			this->clb = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(680, 361);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ñëåäóþùèé âîïðîñ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question8Form::button1_Click);
			// 
			// clb
			// 
			this->clb->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clb->FormattingEnabled = true;
			this->clb->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"îïòè÷åñêèå ïîòåðè", L"ñïåêòðàëüíàÿ ÷óâñòâèòåëüíîñòü",
					L"íàïðÿæåíèå õîëîñòîãî õîäà", L"äèñïåðñèÿ ãðóïïîâîé ñêîðîñòè", L"îïòè÷åñêàÿ íåëèíåéíîñòü", L"ìåõàíè÷åñêàÿ ïðî÷íîñòü", L"êâàíòîâàÿ ýôôåêòèâíîñòü"
			});
			this->clb->Location = System::Drawing::Point(106, 146);
			this->clb->Margin = System::Windows::Forms::Padding(2);
			this->clb->Name = L"clb";
			this->clb->Size = System::Drawing::Size(748, 179);
			this->clb->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->label2->Location = System::Drawing::Point(102, 56);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(518, 69);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Âîïðîñ 8\r\n\r\nÂûáåðèòå õàðàêòåðèñòèêè âîëîêîííûõ ñâåòîâîäîâ.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Question8Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->clb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"Question8Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Òåñò ïî íàíîôèçèêå - 8 âîïðîñ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clb->CheckedItems->Count == 0) {
		MessageBox::Show("Äëÿ ïðîäîëæåíèÿ âûáåðèòå âàðèàíòû îòâåòà", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (clb->CheckedIndices->Count == 4 && clb->CheckedIndices->Contains(0) &&
		clb->CheckedIndices->Contains(3) && clb->CheckedIndices->Contains(4) && 
		clb->CheckedIndices->Contains(5)) {
		answers[7] = true;
		MessageBox::Show("Âû îòâåòèëè ïðàâèëüíî!", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[7] = false;
		MessageBox::Show("Âû îòâåòèëè íåïðàâèëüíî", "Ðåçóëüòàò",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Îðãàíèçàöèÿ ïåðåõîäà íà ñëåäóþùóþ ôîðìó
	Question9Form^ q8 = gcnew Question9Form();
	q8->Owner = this->Owner;
	q8->Show();
	this->Hide();
}
};
}
