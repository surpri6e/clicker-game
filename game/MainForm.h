#pragma once

#include <string>
#include "logic.h"

namespace game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ mainBtn;
	protected:

	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ globalScores;
	private: System::Windows::Forms::Button^ buyFab;
	private: System::Windows::Forms::Button^ buyKot;
	private: System::Windows::Forms::Label^ lblInfo1;
	private: System::Windows::Forms::Label^ lblInfo2;
	private: System::Windows::Forms::Label^ lblInfo3;
	private: System::Windows::Forms::Label^ counterOfFab;



	private: System::Windows::Forms::Label^ lblInfo4;
	private: System::Windows::Forms::Label^ counterOfKot;
	private: System::Windows::Forms::Label^ lblInfo5;
	private: System::Windows::Forms::Label^ costFab;
	private: System::Windows::Forms::Label^ costKot;
	private: System::Windows::Forms::Label^ lblInfo6;




	protected:



	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->mainBtn = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->globalScores = (gcnew System::Windows::Forms::Label());
			this->buyFab = (gcnew System::Windows::Forms::Button());
			this->buyKot = (gcnew System::Windows::Forms::Button());
			this->lblInfo1 = (gcnew System::Windows::Forms::Label());
			this->lblInfo2 = (gcnew System::Windows::Forms::Label());
			this->lblInfo3 = (gcnew System::Windows::Forms::Label());
			this->counterOfFab = (gcnew System::Windows::Forms::Label());
			this->lblInfo4 = (gcnew System::Windows::Forms::Label());
			this->counterOfKot = (gcnew System::Windows::Forms::Label());
			this->lblInfo5 = (gcnew System::Windows::Forms::Label());
			this->costFab = (gcnew System::Windows::Forms::Label());
			this->costKot = (gcnew System::Windows::Forms::Label());
			this->lblInfo6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mainBtn
			// 
			this->mainBtn->Location = System::Drawing::Point(15, 35);
			this->mainBtn->Name = L"mainBtn";
			this->mainBtn->Size = System::Drawing::Size(85, 52);
			this->mainBtn->TabIndex = 0;
			this->mainBtn->Text = L"Кликай!";
			this->mainBtn->UseVisualStyleBackColor = true;
			this->mainBtn->Click += gcnew System::EventHandler(this, &MainForm::_plusGlobalScores);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(12, 9);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(132, 13);
			this->lbl1->TabIndex = 1;
			this->lbl1->Text = L"Количество твоих очков:";
			// 
			// globalScores
			// 
			this->globalScores->AutoSize = true;
			this->globalScores->Location = System::Drawing::Point(150, 9);
			this->globalScores->Name = L"globalScores";
			this->globalScores->Size = System::Drawing::Size(13, 13);
			this->globalScores->TabIndex = 2;
			this->globalScores->Text = L"0";
			// 
			// buyFab
			// 
			this->buyFab->Location = System::Drawing::Point(198, 35);
			this->buyFab->Name = L"buyFab";
			this->buyFab->Size = System::Drawing::Size(124, 23);
			this->buyFab->TabIndex = 3;
			this->buyFab->Text = L"Купить фабрику";
			this->buyFab->UseVisualStyleBackColor = true;
			this->buyFab->Click += gcnew System::EventHandler(this, &MainForm::_buyFab);
			// 
			// buyKot
			// 
			this->buyKot->Location = System::Drawing::Point(198, 64);
			this->buyKot->Name = L"buyKot";
			this->buyKot->Size = System::Drawing::Size(124, 23);
			this->buyKot->TabIndex = 4;
			this->buyKot->Text = L"Купить котельню";
			this->buyKot->UseVisualStyleBackColor = true;
			this->buyKot->Click += gcnew System::EventHandler(this, &MainForm::_buyKot);
			// 
			// lblInfo1
			// 
			this->lblInfo1->AutoSize = true;
			this->lblInfo1->Location = System::Drawing::Point(12, 108);
			this->lblInfo1->Name = L"lblInfo1";
			this->lblInfo1->Size = System::Drawing::Size(334, 13);
			this->lblInfo1->TabIndex = 5;
			this->lblInfo1->Text = L"Фабрика - Увеличивает количество очков при нажатии в 2 раза";
			// 
			// lblInfo2
			// 
			this->lblInfo2->AutoSize = true;
			this->lblInfo2->Location = System::Drawing::Point(12, 131);
			this->lblInfo2->Name = L"lblInfo2";
			this->lblInfo2->Size = System::Drawing::Size(314, 13);
			this->lblInfo2->TabIndex = 6;
			this->lblInfo2->Text = L"Котельня - Увеличивает количество очков при нажатии на 1\r\n";
			// 
			// lblInfo3
			// 
			this->lblInfo3->AutoSize = true;
			this->lblInfo3->Location = System::Drawing::Point(12, 179);
			this->lblInfo3->Name = L"lblInfo3";
			this->lblInfo3->Size = System::Drawing::Size(110, 13);
			this->lblInfo3->TabIndex = 7;
			this->lblInfo3->Text = L"Количество фабрик:";
			// 
			// counterOfFab
			// 
			this->counterOfFab->AutoSize = true;
			this->counterOfFab->Location = System::Drawing::Point(150, 179);
			this->counterOfFab->Name = L"counterOfFab";
			this->counterOfFab->Size = System::Drawing::Size(13, 13);
			this->counterOfFab->TabIndex = 8;
			this->counterOfFab->Text = L"0";
			// 
			// lblInfo4
			// 
			this->lblInfo4->AutoSize = true;
			this->lblInfo4->Location = System::Drawing::Point(12, 208);
			this->lblInfo4->Name = L"lblInfo4";
			this->lblInfo4->Size = System::Drawing::Size(126, 13);
			this->lblInfo4->TabIndex = 9;
			this->lblInfo4->Text = L"Количество котельных:";
			// 
			// counterOfKot
			// 
			this->counterOfKot->AutoSize = true;
			this->counterOfKot->Location = System::Drawing::Point(150, 208);
			this->counterOfKot->Name = L"counterOfKot";
			this->counterOfKot->Size = System::Drawing::Size(13, 13);
			this->counterOfKot->TabIndex = 10;
			this->counterOfKot->Text = L"0";
			// 
			// lblInfo5
			// 
			this->lblInfo5->AutoSize = true;
			this->lblInfo5->Location = System::Drawing::Point(12, 248);
			this->lblInfo5->Name = L"lblInfo5";
			this->lblInfo5->Size = System::Drawing::Size(112, 13);
			this->lblInfo5->TabIndex = 11;
			this->lblInfo5->Text = L"Стоимость фабрики:\r\n";
			// 
			// costFab
			// 
			this->costFab->AutoSize = true;
			this->costFab->Location = System::Drawing::Point(150, 248);
			this->costFab->Name = L"costFab";
			this->costFab->Size = System::Drawing::Size(13, 13);
			this->costFab->TabIndex = 12;
			this->costFab->Text = L"0";
			// 
			// costKot
			// 
			this->costKot->AutoSize = true;
			this->costKot->Location = System::Drawing::Point(150, 274);
			this->costKot->Name = L"costKot";
			this->costKot->Size = System::Drawing::Size(13, 13);
			this->costKot->TabIndex = 13;
			this->costKot->Text = L"0";
			// 
			// lblInfo6
			// 
			this->lblInfo6->AutoSize = true;
			this->lblInfo6->Location = System::Drawing::Point(12, 274);
			this->lblInfo6->Name = L"lblInfo6";
			this->lblInfo6->Size = System::Drawing::Size(115, 13);
			this->lblInfo6->TabIndex = 14;
			this->lblInfo6->Text = L"Стоимость котельни:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 311);
			this->Controls->Add(this->lblInfo6);
			this->Controls->Add(this->costKot);
			this->Controls->Add(this->costFab);
			this->Controls->Add(this->lblInfo5);
			this->Controls->Add(this->counterOfKot);
			this->Controls->Add(this->lblInfo4);
			this->Controls->Add(this->counterOfFab);
			this->Controls->Add(this->lblInfo3);
			this->Controls->Add(this->lblInfo2);
			this->Controls->Add(this->lblInfo1);
			this->Controls->Add(this->buyKot);
			this->Controls->Add(this->buyFab);
			this->Controls->Add(this->globalScores);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->mainBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::setupAll);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void _plusGlobalScores(System::Object^ sender, System::EventArgs^ e) {
	Logic::plusGlobalScores();
	globalScores->Text = gcnew String(std::to_string(Logic::GLOBAL_SCORES).c_str());
}
private: System::Void setupAll(System::Object^ sender, System::EventArgs^ e) {
	counterOfFab->Text = gcnew String(std::to_string(Logic::counterOfFab).c_str());
	counterOfKot->Text = gcnew String(std::to_string(Logic::counterOfKot).c_str());
	costFab->Text = gcnew String(std::to_string(Logic::FabCost).c_str());
	costKot->Text = gcnew String(std::to_string(Logic::KotCost).c_str());
}
private: System::Void _buyFab(System::Object^ sender, System::EventArgs^ e) {
	Logic::buyFab();
	globalScores->Text = gcnew String(std::to_string(Logic::GLOBAL_SCORES).c_str());
	costFab->Text = gcnew String(std::to_string(Logic::FabCost).c_str());
	counterOfFab->Text = gcnew String(std::to_string(Logic::counterOfFab).c_str());
}
private: System::Void _buyKot(System::Object^ sender, System::EventArgs^ e) {
	Logic::buyKot();
	globalScores->Text = gcnew String(std::to_string(Logic::GLOBAL_SCORES).c_str());
	costKot->Text = gcnew String(std::to_string(Logic::KotCost).c_str());
	counterOfKot->Text = gcnew String(std::to_string(Logic::counterOfKot).c_str());
}
};
}
