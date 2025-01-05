#pragma once
#include "GlobalVariables.h"
#include "Question2Form.h"
//#include "Question10Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Question1Form
	/// </summary>
	public ref class Question1Form : public System::Windows::Forms::Form
	{
	public:
		Question1Form(void)
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
		~Question1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAns;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAns = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(653, 366);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question1Form::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(130, 98);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(697, 120);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Вопрос №1\r\n\r\nКак называется структура с периодически изменяющейся диэлектрической"
				L"\r\nпроницаемостью либо неоднородностью, период которой сравним \r\nс длиной волны с"
				L"вета\?";
			// 
			// txtAns
			// 
			this->txtAns->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtAns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtAns->Location = System::Drawing::Point(134, 239);
			this->txtAns->Margin = System::Windows::Forms::Padding(2);
			this->txtAns->Name = L"txtAns";
			this->txtAns->Size = System::Drawing::Size(693, 29);
			this->txtAns->TabIndex = 3;
			// 
			// Question1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->txtAns);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"Question1Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - 1 вопрос";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtAns->Text == "")
			MessageBox::Show("Введите ответ в текстовое поле", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else
		{
			if (txtAns->Text == "Фотонный кристалл" || txtAns->Text == "фотонный кристалл") {
				answers[0] = true;
				MessageBox::Show("Вы ответили правильно!", "Результат",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
				
			else {
				answers[0] = false;
				MessageBox::Show("Вы ответили неправильно", "Результат", 
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			//Организация перехода на следующую форму
			Question2Form^ q1 = gcnew Question2Form();
			//Question10Form^ q1 = gcnew Question10Form();
			q1->Owner = this->Owner;
			q1->Show();
			this->Hide();
		}
	}
	};
}
