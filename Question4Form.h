#pragma once
#include "GlobalVariables.h"
#include "Question5Form.h"


namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Question4Form
	/// </summary>
	public ref class Question4Form : public System::Windows::Forms::Form
	{
	public:
		Question4Form(void)
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
		~Question4Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cmdNext;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(24, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Вопрос №4: Сопопоставьте понятия со значениями";
			// 
			// cmdNext
			// 
			this->cmdNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdNext->Location = System::Drawing::Point(742, 450);
			this->cmdNext->Margin = System::Windows::Forms::Padding(2);
			this->cmdNext->Name = L"cmdNext";
			this->cmdNext->Size = System::Drawing::Size(174, 38);
			this->cmdNext->TabIndex = 7;
			this->cmdNext->Text = L"Следующий вопрос";
			this->cmdNext->UseVisualStyleBackColor = true;
			this->cmdNext->Click += gcnew System::EventHandler(this, &Question4Form::cmdNext_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(26, 45);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(891, 104);
			this->listBox1->TabIndex = 11;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(26, 212);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(891, 24);
			this->listBox2->TabIndex = 12;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(28, 300);
			this->listBox3->Margin = System::Windows::Forms::Padding(2);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(889, 24);
			this->listBox3->TabIndex = 13;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 20;
			this->listBox4->Location = System::Drawing::Point(26, 387);
			this->listBox4->Margin = System::Windows::Forms::Padding(2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(891, 24);
			this->listBox4->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(26, 362);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question4Form::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(78, 186);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 24);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Квантовая суперпозиция";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(80, 274);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(254, 24);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Квантовая эффективность";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(80, 362);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(235, 24);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Квантовая запутанность";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(28, 274);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Question4Form::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->Location = System::Drawing::Point(26, 186);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"->";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Question4Form::button3_Click);
			// 
			// Question4Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 514);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmdNext);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"Question4Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - 4 вопрос";
			this->Load += gcnew System::EventHandler(this, &Question4Form::Question4Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Question4Form_Load(System::Object^ sender, System::EventArgs^ e) {
	array<System::Object^>^ ItemObject = gcnew
		array<System::Object^>(3);
	//Объявление массива
	ItemObject[0] = ("Явление, при котором квантовые состояния двух или более объектов взаимозависимы.");
	ItemObject[1] = ("Принцип: если для нек. квантовой системы допустимы 2 состояния, то допустима любая их линейная комбинация.");
	ItemObject[2] = ("Спектральная характеристика солнечного фотоэлемента.");
		for (int i = 0;i < 3; i++)
			listBox1->Items->Add(ItemObject[i]);
}
private: System::Void cmdNext_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((listBox2->Items->Count == 0) || (listBox3 -> Items->Count == 0) || (listBox4->Items->Count == 0))
		MessageBox::Show("Заполните все поля ответов", "Ошибка", MessageBoxButtons::OK,
			MessageBoxIcon::Asterisk);
	else
	{
		if ((listBox2->Items[0] == "Принцип: если для нек. квантовой системы допустимы 2 состояния, то допустима любая их линейная комбинация.") &&
			(listBox3->Items[0] == "Спектральная характеристика солнечного фотоэлемента.") &&
			(listBox4->Items[0] == "Явление, при котором квантовые состояния двух или более объектов взаимозависимы.")) {
			answers[4] = true;
			MessageBox::Show("Вы ответили правильно!", "Результат",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
			
		else {
			answers[4] = false;
			MessageBox::Show("Вы ответили неправильно", "Результат",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		
		//Организация перехода на следующую форму
		Question5Form^ q4 = gcnew Question5Form();
		q4->Owner = this->Owner;
		q4->Show();
		this->Hide();
	}
}

//выбор ответа
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0 && listBox2->Text == "") {
		listBox2->Items->Add(Convert::ToString(listBox1 -> SelectedItem));
		listBox1->Items->RemoveAt(0);
	}
		
	if (listBox1->SelectedIndex == 1 && listBox2->Text == "") {
		listBox2->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(1);
	}

	if (listBox1->SelectedIndex == 2 && listBox2->Text == "") {
		listBox2->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(2);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0 && listBox3->Text == "") {
		listBox3->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(0);
	}

	if (listBox1->SelectedIndex == 1 && listBox3->Text == "") {
		listBox3->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(1);
	}

	if (listBox1->SelectedIndex == 2 && listBox3->Text == "") {
		listBox3->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(2);
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0 && listBox4->Text == "") {
		listBox4->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(0);
	}

	if (listBox1->SelectedIndex == 1 && listBox4->Text == "") {
		listBox4->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(1);
	}

	if (listBox1->SelectedIndex == 2 && listBox4->Text == "") {
		listBox4->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(2);
	}
}
};
}
