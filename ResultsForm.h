#pragma once
#include "GlobalVariables.h"
//#include "Question10Form.h"

namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MyDLLCLR;

	/// <summary>
	/// Сводка для ResultsForm
	/// </summary>
	public ref class ResultsForm : public System::Windows::Forms::Form
	{
	public:
		ResultsForm(void)
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
		~ResultsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ grade;
	private: System::Windows::Forms::Label^ right;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->grade = (gcnew System::Windows::Forms::Label());
			this->right = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(613, 110);
			this->chart1->Name = L"chart1";
			series1->BackImageTransparentColor = System::Drawing::Color::Red;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"0";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(306, 245);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(395, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(178, 245);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(66, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Результаты тестирования";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(66, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Вы ответили верно на";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(66, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"вопросов из 10";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(66, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ваша оценка -";
			// 
			// grade
			// 
			this->grade->AutoSize = true;
			this->grade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->grade->Location = System::Drawing::Point(207, 196);
			this->grade->Name = L"grade";
			this->grade->Size = System::Drawing::Size(20, 24);
			this->grade->TabIndex = 7;
			this->grade->Text = L"_";
			// 
			// right
			// 
			this->right->AutoSize = true;
			this->right->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->right->Location = System::Drawing::Point(283, 110);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(20, 24);
			this->right->TabIndex = 8;
			this->right->Text = L"_";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(745, 372);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ResultsForm::button1_Click);
			// 
			// ResultsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 458);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->right);
			this->Controls->Add(this->grade);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->MinimumSize = System::Drawing::Size(972, 497);
			this->Name = L"ResultsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тест по нанофизике - Результаты тестирования";
			this->Load += gcnew System::EventHandler(this, &ResultsForm::ResultsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ResultsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->ColumnCount = 2;
	dataGridView1->RowCount = 11;
	dataGridView1->Rows[0]->Cells[0]->Value = "№ вопроса";
	dataGridView1->Rows[0]->Cells[1]->Value = "Вы ответили";

	int count = 0;
	for (int i = 0; i < 10; i++) {
		dataGridView1->Rows[i+1]->Cells[0]->Value = "№" + Convert::ToString(i + 1);
		if (answers[i] == true) {
			dataGridView1->Rows[i+1]->Cells[1]->Value = "Верно";
			count++;
		}
		else
			dataGridView1->Rows[i+1]->Cells[1]->Value = "Неверно";

	}
	right->Text = Convert::ToString(count);
	grade->Text = Convert::ToString(Class1::Grade(count));

	chart1->Series["0"]->Points->AddXY("Верно", count);
	chart1->Series["0"]->Points->AddXY("Неверно", 10 -count);

	String^ UserLogin = Class1::UserLogin("users.txt", user_index);
	Class1::writeResuts("users.txt", UserLogin, count);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Организация перехода на следующую форму
	//ResultsForm^ q = gcnew ResultsForm();
	Owner->Show();
	this->Close();
}
};
}
