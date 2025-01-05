#pragma once
#include "GlobalVariables.h"
#include "Question8Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Question7Form
	/// </summary>
	public ref class Question7Form : public System::Windows::Forms::Form
	{
	public:
		Question7Form(void)
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
		~Question7Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ lb_otvet;
	private: System::Windows::Forms::Label^ lb_o;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Question7Form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->lb_otvet = (gcnew System::Windows::Forms::Label());
			this->lb_o = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(731, 383);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question7Form::button1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(107, 312);
			this->trackBar1->Margin = System::Windows::Forms::Padding(2);
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(798, 45);
			this->trackBar1->TabIndex = 43;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Question7Form::trackBar1_Scroll);
			// 
			// lb_otvet
			// 
			this->lb_otvet->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_otvet->AutoSize = true;
			this->lb_otvet->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->lb_otvet->Location = System::Drawing::Point(230, 359);
			this->lb_otvet->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_otvet->Name = L"lb_otvet";
			this->lb_otvet->Size = System::Drawing::Size(22, 23);
			this->lb_otvet->TabIndex = 42;
			this->lb_otvet->Text = L"1";
			this->lb_otvet->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lb_o
			// 
			this->lb_o->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_o->AutoSize = true;
			this->lb_o->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->lb_o->Location = System::Drawing::Point(103, 359);
			this->lb_o->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_o->Name = L"lb_o";
			this->lb_o->Size = System::Drawing::Size(119, 23);
			this->lb_o->TabIndex = 41;
			this->lb_o->Text = L"Ваш ответ:";
			this->lb_o->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.2F));
			this->label2->Location = System::Drawing::Point(103, 57);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Вопрос 7";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(425, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 215);
			this->pictureBox1->TabIndex = 44;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(104, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 85);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Легенда:\r\nа – излучатель; б – фотоприемник; \r\nв – микроэлектронный блок;\r\nг – отр"
				L"ажатель; \r\nд – управляемая оптическая среда.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(103, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 72);
			this->label3->TabIndex = 46;
			this->label3->Text = L"На какой схеме изображен \r\nоптрон с открытым \r\nоптическим каналом связи\?\r\n";
			// 
			// Question7Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->lb_otvet);
			this->Controls->Add(this->lb_o);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(972, 480);
			this->Name = L"Question7Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - 7 вопрос";
			this->Load += gcnew System::EventHandler(this, &Question7Form::Question7Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Question7Form_Load(System::Object^ sender, System::EventArgs^ e) {
	trackBar1->Minimum = 1;
	trackBar1->Maximum = 5;
	trackBar1->Value = 3;
	this->pictureBox1->ImageLocation = "оптрон.jpg";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (trackBar1->Value == 4) {
		answers[6] = true;
		MessageBox::Show("Вы ответили правильно!", "Результат",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		answers[6] = false;
		MessageBox::Show("Вы ответили неправильно", "Результат",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Организация перехода на следующую форму
	Question8Form^ q7 = gcnew Question8Form();
	q7->Owner = this->Owner;
	q7->Show();
	this->Hide();
}

private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	lb_otvet->Text = Convert::ToString(trackBar1->Value);
}
};
}
