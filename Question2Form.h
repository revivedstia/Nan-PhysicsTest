#pragma once
#include "GlobalVariables.h"
#include "Question3Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Question2Form
	/// </summary>
	public ref class Question2Form : public System::Windows::Forms::Form
	{
	public:
		Question2Form(void)
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
		~Question2Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cmdNext;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;











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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmdNext = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(139, 76);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 72);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Вопрос №2\r\n\r\nНазовите примеры фотонного фрактала\r\n";
			// 
			// cmdNext
			// 
			this->cmdNext->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmdNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdNext->Location = System::Drawing::Point(644, 345);
			this->cmdNext->Margin = System::Windows::Forms::Padding(2);
			this->cmdNext->Name = L"cmdNext";
			this->cmdNext->Size = System::Drawing::Size(174, 38);
			this->cmdNext->TabIndex = 3;
			this->cmdNext->Text = L"Следующий вопрос";
			this->cmdNext->UseVisualStyleBackColor = true;
			this->cmdNext->Click += gcnew System::EventHandler(this, &Question2Form::cmdNext_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->checkBox1->Location = System::Drawing::Point(83, 42);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(205, 28);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Раковина Шиллинга";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->groupBox1->Location = System::Drawing::Point(143, 175);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(675, 145);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вы можете выбрать несколько ответов";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->checkBox3->Location = System::Drawing::Point(83, 74);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(208, 28);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Ковер Серпинского";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->checkBox2->Location = System::Drawing::Point(312, 42);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(217, 28);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Снежинка Фейнмана";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->checkBox4->Location = System::Drawing::Point(312, 74);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(163, 28);
			this->checkBox4->TabIndex = 8;
			this->checkBox4->Text = L"Губка Менгера";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// Question2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmdNext);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"Question2Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - 2 вопрос";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cmdNext_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((!checkBox1->Checked) && (!checkBox2->Checked) && (!checkBox3->Checked) &&
			(!checkBox4->Checked))
			MessageBox::Show("Выберите хотя бы один вариант ответа", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		else {
			if ((checkBox1->Checked) && (!checkBox2->Checked) && // правильные ответы 134 
				(checkBox3->Checked) && (checkBox4->Checked)) {
				answers[2] = true;
				MessageBox::Show("Вы ответили правильно!", "Результат",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
				
			else {
				answers[2] = false;
				MessageBox::Show("Вы ответили неправильно", "Результат",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			//Организация перехода на следующую форму
			Question3Form^ q2 = gcnew Question3Form();
			q2->Owner = this->Owner;
			q2->Show();
			this->Hide();
		}
		
	}

};
}
