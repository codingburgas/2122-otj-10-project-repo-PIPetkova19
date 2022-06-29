#pragma once

namespace loginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnDashboard;
	private: System::Windows::Forms::Panel^ pnlNav;
	private: System::Windows::Forms::Button^ btnSettings;
	private: System::Windows::Forms::Button^ btnContactUs;
	private: System::Windows::Forms::Button^ btnCalender;
	private: System::Windows::Forms::Button^ btnAnalytics;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlNav = (gcnew System::Windows::Forms::Panel());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnContactUs = (gcnew System::Windows::Forms::Button());
			this->btnCalender = (gcnew System::Windows::Forms::Button());
			this->btnAnalytics = (gcnew System::Windows::Forms::Button());
			this->btnDashboard = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->pnlNav);
			this->panel1->Controls->Add(this->btnSettings);
			this->panel1->Controls->Add(this->btnContactUs);
			this->panel1->Controls->Add(this->btnCalender);
			this->panel1->Controls->Add(this->btnAnalytics);
			this->panel1->Controls->Add(this->btnDashboard);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(188, 566);
			this->panel1->TabIndex = 0;
			// 
			// pnlNav
			// 
			this->pnlNav->BackColor = System::Drawing::Color::SkyBlue;
			this->pnlNav->Location = System::Drawing::Point(3, 216);
			this->pnlNav->Name = L"pnlNav";
			this->pnlNav->Size = System::Drawing::Size(3, 100);
			this->pnlNav->TabIndex = 7;
			this->pnlNav->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::pnlNav_Paint);
			// 
			// btnSettings
			// 
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnSettings->FlatAppearance->BorderSize = 0;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSettings->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettings.Image")));
			this->btnSettings->Location = System::Drawing::Point(0, 516);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(188, 50);
			this->btnSettings->TabIndex = 4;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &Dashboard::btnSettings_Click);
			// 
			// btnContactUs
			// 
			this->btnContactUs->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnContactUs->FlatAppearance->BorderSize = 0;
			this->btnContactUs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContactUs->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContactUs->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnContactUs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnContactUs.Image")));
			this->btnContactUs->Location = System::Drawing::Point(0, 310);
			this->btnContactUs->Name = L"btnContactUs";
			this->btnContactUs->Size = System::Drawing::Size(188, 50);
			this->btnContactUs->TabIndex = 6;
			this->btnContactUs->Text = L"Contact us";
			this->btnContactUs->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnContactUs->UseVisualStyleBackColor = true;
			this->btnContactUs->Click += gcnew System::EventHandler(this, &Dashboard::btnContactUs_Click);
			// 
			// btnCalender
			// 
			this->btnCalender->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCalender->FlatAppearance->BorderSize = 0;
			this->btnCalender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCalender->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalender->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCalender->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCalender.Image")));
			this->btnCalender->Location = System::Drawing::Point(0, 260);
			this->btnCalender->Name = L"btnCalender";
			this->btnCalender->Size = System::Drawing::Size(188, 50);
			this->btnCalender->TabIndex = 5;
			this->btnCalender->Text = L"Calender";
			this->btnCalender->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnCalender->UseVisualStyleBackColor = true;
			this->btnCalender->Click += gcnew System::EventHandler(this, &Dashboard::btnCalender_Click);
			// 
			// btnAnalytics
			// 
			this->btnAnalytics->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAnalytics->FlatAppearance->BorderSize = 0;
			this->btnAnalytics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnalytics->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnalytics->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAnalytics->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAnalytics.Image")));
			this->btnAnalytics->Location = System::Drawing::Point(0, 210);
			this->btnAnalytics->Name = L"btnAnalytics";
			this->btnAnalytics->Size = System::Drawing::Size(188, 50);
			this->btnAnalytics->TabIndex = 4;
			this->btnAnalytics->Text = L"Analytics";
			this->btnAnalytics->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnAnalytics->UseVisualStyleBackColor = true;
			this->btnAnalytics->Click += gcnew System::EventHandler(this, &Dashboard::btnAnalytics_Click);
			// 
			// btnDashboard
			// 
			this->btnDashboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDashboard->FlatAppearance->BorderSize = 0;
			this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDashboard->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDashboard.Image")));
			this->btnDashboard->Location = System::Drawing::Point(0, 160);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->Size = System::Drawing::Size(188, 50);
			this->btnDashboard->TabIndex = 3;
			this->btnDashboard->Text = L"Dashboard";
			this->btnDashboard->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnDashboard->UseVisualStyleBackColor = true;
			this->btnDashboard->Click += gcnew System::EventHandler(this, &Dashboard::btnDashboard_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(188, 160);
			this->panel2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MidnightBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label2->Location = System::Drawing::Point(28, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Some User text here";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(42, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(951, 566);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = btnDashboard->Height;
		pnlNav->Top = btnDashboard->Top;
		pnlNav->Left = btnDashboard->Left; 
	}

private: System::Void pnlNav_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void btnAnalytics_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlNav->Height = btnAnalytics->Height;
	pnlNav->Top = btnAnalytics->Top;
	pnlNav->Left = btnAnalytics->Left;
}
private: System::Void btnCalender_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlNav->Height = btnCalender->Height;
	pnlNav->Top = btnCalender->Top;
	pnlNav->Left = btnCalender->Left;
}
private: System::Void btnContactUs_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlNav->Height = btnContactUs->Height;
	pnlNav->Top = btnContactUs->Top;
	pnlNav->Left = btnContactUs->Left;
}
private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlNav->Height = btnSettings->Height;
	pnlNav->Top = btnSettings->Top;
	pnlNav->Left = btnSettings->Left;
}

};
}
