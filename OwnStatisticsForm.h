#pragma once
#include "GlobalVariables.h"
#include <tchar.h>


namespace PhysicsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MyDLLCLR;

	/// <summary>
	/// Сводка для OwnStatisticsForm
	/// </summary>
	public ref class OwnStatisticsForm : public System::Windows::Forms::Form
	{
	public:
		OwnStatisticsForm(void)
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
		~OwnStatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labName;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->labName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// labName
			// 
			this->labName->AutoSize = true;
			this->labName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->labName->Location = System::Drawing::Point(428, 15);
			this->labName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labName->Name = L"labName";
			this->labName->Size = System::Drawing::Size(70, 26);
			this->labName->TabIndex = 33;
			this->labName->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(50, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(374, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Выполнен вход в учетную запись полязователя";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(755, 327);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 38);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OwnStatisticsForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(50, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(305, 24);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Результаты прохождения теста ";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(592, 98);
			this->chart1->Name = L"chart1";
			series2->BackImageTransparentColor = System::Drawing::Color::Red;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"0";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(334, 202);
			this->chart1->TabIndex = 37;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Location = System::Drawing::Point(54, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(486, 267);
			this->dataGridView1->TabIndex = 38;
			// 
			// OwnStatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 392);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labName);
			this->Controls->Add(this->label1);
			this->Name = L"OwnStatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Личная статистика";
			this->Load += gcnew System::EventHandler(this, &OwnStatisticsForm::OwnStatisticsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void OwnStatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ UserLogin = Class1::UserLogin("users.txt", user_index);
	labName->Text = Class1::UserName("users.txt", UserLogin);
	String^ UserData = Class1::UserData("users.txt", UserLogin);
	int count = Convert::ToInt16(Class1::split(UserData, 4));

	if (count == 0) {
		dataGridView1->Hide();
		chart1->Hide();
		label2->Text = "Вы ещё не проходили тестирование.";
	}
	else {
		dataGridView1->ColumnCount = 3;
		dataGridView1->RowCount = count + 1;
		dataGridView1->Height = (count + 1) * 24 + 2;
		//dataGridView1->Sele =0;
		dataGridView1->Rows[0]->Cells[0]->Value = "Дата прохождения";
		dataGridView1->Rows[0]->Cells[1]->Value = "Количество правильных ответов";
		dataGridView1->Rows[0]->Cells[2]->Value = "Оценка ";
		int c5 = 0, c4 = 0, c3 = 0, c2 = 0;

		for (int i = 5; i < 5 + count; i++) {
			array <TCHAR>^ dlm = { '.' };
			array <String^>^ res = Class1::split(UserData, i)->Split(dlm);
			int grade = Class1::Grade(Convert::ToInt32(res[1]));

			dataGridView1->Rows[i - 4]->Cells[0]->Value = res[0];
			dataGridView1->Rows[i - 4]->Cells[1]->Value = res[1];
			dataGridView1->Rows[i - 4]->Cells[2]->Value = grade;
			if (grade == 5) c5 += 1;
			if (grade == 4) c4 += 1;
			if (grade == 3) c3 += 1;
			if (grade == 2) c2 += 1;

		}
		chart1->Series["0"]->Points->AddXY("оценка 5", c5);
		chart1->Series["0"]->Points->AddXY("оценка 4", c4);
		chart1->Series["0"]->Points->AddXY("оценка 3", c3);
		chart1->Series["0"]->Points->AddXY("оценка 2", c2);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
};
}
