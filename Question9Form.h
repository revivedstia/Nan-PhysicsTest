#pragma once
#include "GlobalVariables.h"
#include "Question10Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Question9Form
	/// </summary>
	public ref class Question9Form : public System::Windows::Forms::Form
	{
	public:
		Question9Form(void)
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
		~Question9Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ cb;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Question9Form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cb = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(717, 345);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question9Form::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(445, 75);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(446, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// cb
			// 
			this->cb->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cb->FormattingEnabled = true;
			this->cb->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Электрооптический", L"Фазовый электрооптический", L"Амплитудный ",
					L"Интегрально-оптический ", L"Магнитооптический"
			});
			this->cb->Location = System::Drawing::Point(70, 211);
			this->cb->Margin = System::Windows::Forms::Padding(2);
			this->cb->Name = L"cb";
			this->cb->Size = System::Drawing::Size(328, 30);
			this->cb->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->label2->Location = System::Drawing::Point(66, 82);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 92);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Вопрос 9\r\n\r\nКакой тип модулятора \r\nпредставленн на рисунке\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Question9Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"Question9Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - 9 вопрос";
			this->Load += gcnew System::EventHandler(this, &Question9Form::Question9Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cb->SelectedIndex == -1) {
		MessageBox::Show("Для продолжения выберите вариант ответа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (cb->SelectedIndex == 4) {
		answers[8] = true;
		MessageBox::Show("Вы ответили правильно!", "Результат",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[8] = false;
		MessageBox::Show("Вы ответили неправильно", "Результат",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Организация перехода на следующую форму
	Question10Form^ q9 = gcnew Question10Form();
	q9->Owner = this->Owner;
	q9->Show();
	this->Hide();
}
private: System::Void Question9Form_Load(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->ImageLocation = "модулятор.jpg";

}
};
}
