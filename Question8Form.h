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
	/// Сводка для Question8Form
	/// </summary>
	public ref class Question8Form : public System::Windows::Forms::Form
	{
	public:
		Question8Form(void)
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
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question8Form::button1_Click);
			// 
			// clb
			// 
			this->clb->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clb->FormattingEnabled = true;
			this->clb->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"оптические потери", L"спектральная чувствительность",
					L"напряжение холостого хода", L"дисперсия групповой скорости", L"оптическая нелинейность", L"механическая прочность", L"квантовая эффективность"
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
			this->label2->Text = L"Вопрос 8\r\n\r\nВыберите характеристики волоконных световодов.";
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
			this->Text = L"Тест по нанофизике - 8 вопрос";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clb->CheckedItems->Count == 0) {
		MessageBox::Show("Для продолжения выберите варианты ответа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (clb->CheckedIndices->Count == 4 && clb->CheckedIndices->Contains(0) &&
		clb->CheckedIndices->Contains(3) && clb->CheckedIndices->Contains(4) && 
		clb->CheckedIndices->Contains(5)) {
		answers[7] = true;
		MessageBox::Show("Вы ответили правильно!", "Результат",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[7] = false;
		MessageBox::Show("Вы ответили неправильно", "Результат",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Организация перехода на следующую форму
	Question9Form^ q8 = gcnew Question9Form();
	q8->Owner = this->Owner;
	q8->Show();
	this->Hide();
}
};
}
