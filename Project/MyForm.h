#pragma once

namespace loginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pnlTerms->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ labelForUsername;
	private: System::Windows::Forms::Label^ labelForPassword;
	private: System::Windows::Forms::TextBox^ txtBoxUsername;
	private: System::Windows::Forms::TextBox^ txtBoxPassword;
	private: System::Windows::Forms::CheckBox^ checkBoxTerms;
	private: System::Windows::Forms::Label^ labelForTerms;
	private: System::Windows::Forms::Button^ signInBtn;
	private: System::Windows::Forms::Button^ exitBtn;

	protected:

	protected:










	private: System::Windows::Forms::Panel^ pnlTerms;
	private: System::Windows::Forms::Button^ backBtn;

	private: System::Windows::Forms::TextBox^ textBoxTerms;

	private: System::Windows::Forms::Label^ titleTerms;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->title = (gcnew System::Windows::Forms::Label());
			this->labelForUsername = (gcnew System::Windows::Forms::Label());
			this->labelForPassword = (gcnew System::Windows::Forms::Label());
			this->txtBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxTerms = (gcnew System::Windows::Forms::CheckBox());
			this->labelForTerms = (gcnew System::Windows::Forms::Label());
			this->signInBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->pnlTerms = (gcnew System::Windows::Forms::Panel());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->textBoxTerms = (gcnew System::Windows::Forms::TextBox());
			this->titleTerms = (gcnew System::Windows::Forms::Label());
			this->pnlTerms->SuspendLayout();
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.25F));
			this->title->ForeColor = System::Drawing::Color::White;
			this->title->Location = System::Drawing::Point(44, 33);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(222, 51);
			this->title->TabIndex = 0;
			this->title->Text = L"Registration";
			// 
			// labelForUsername
			// 
			this->labelForUsername->AutoSize = true;
			this->labelForUsername->BackColor = System::Drawing::Color::Transparent;
			this->labelForUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->labelForUsername->ForeColor = System::Drawing::Color::White;
			this->labelForUsername->Location = System::Drawing::Point(50, 138);
			this->labelForUsername->Name = L"labelForUsername";
			this->labelForUsername->Size = System::Drawing::Size(76, 19);
			this->labelForUsername->TabIndex = 1;
			this->labelForUsername->Text = L"Username";
			// 
			// labelForPassword
			// 
			this->labelForPassword->AutoSize = true;
			this->labelForPassword->BackColor = System::Drawing::Color::Transparent;
			this->labelForPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->labelForPassword->ForeColor = System::Drawing::Color::White;
			this->labelForPassword->Location = System::Drawing::Point(50, 227);
			this->labelForPassword->Name = L"labelForPassword";
			this->labelForPassword->Size = System::Drawing::Size(73, 19);
			this->labelForPassword->TabIndex = 2;
			this->labelForPassword->Text = L"Password";
			// 
			// txtBoxUsername
			// 
			this->txtBoxUsername->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->txtBoxUsername->ForeColor = System::Drawing::Color::Black;
			this->txtBoxUsername->Location = System::Drawing::Point(53, 164);
			this->txtBoxUsername->Name = L"txtBoxUsername";
			this->txtBoxUsername->Size = System::Drawing::Size(252, 26);
			this->txtBoxUsername->TabIndex = 3;
			this->txtBoxUsername->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->txtBoxUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// txtBoxPassword
			// 
			this->txtBoxPassword->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->txtBoxPassword->ForeColor = System::Drawing::Color::Black;
			this->txtBoxPassword->Location = System::Drawing::Point(53, 253);
			this->txtBoxPassword->Name = L"txtBoxPassword";
			this->txtBoxPassword->PasswordChar = '*';
			this->txtBoxPassword->Size = System::Drawing::Size(252, 26);
			this->txtBoxPassword->TabIndex = 5;
			this->txtBoxPassword->UseSystemPasswordChar = true;
			this->txtBoxPassword->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->txtBoxPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// checkBoxTerms
			// 
			this->checkBoxTerms->AutoSize = true;
			this->checkBoxTerms->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxTerms->Checked = true;
			this->checkBoxTerms->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->checkBoxTerms->ForeColor = System::Drawing::Color::White;
			this->checkBoxTerms->Location = System::Drawing::Point(56, 325);
			this->checkBoxTerms->Name = L"checkBoxTerms";
			this->checkBoxTerms->Size = System::Drawing::Size(115, 23);
			this->checkBoxTerms->TabIndex = 7;
			this->checkBoxTerms->Text = L"I agree to the ";
			this->checkBoxTerms->UseVisualStyleBackColor = false;
			this->checkBoxTerms->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// labelForTerms
			// 
			this->labelForTerms->AutoSize = true;
			this->labelForTerms->BackColor = System::Drawing::Color::Transparent;
			this->labelForTerms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelForTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->labelForTerms->ForeColor = System::Drawing::Color::Black;
			this->labelForTerms->Location = System::Drawing::Point(163, 327);
			this->labelForTerms->Name = L"labelForTerms";
			this->labelForTerms->Size = System::Drawing::Size(142, 19);
			this->labelForTerms->TabIndex = 8;
			this->labelForTerms->Text = L"Terms and Conditions";
			this->labelForTerms->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// signInBtn
			// 
			this->signInBtn->BackColor = System::Drawing::Color::White;
			this->signInBtn->FlatAppearance->BorderSize = 0;
			this->signInBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signInBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->signInBtn->Location = System::Drawing::Point(56, 372);
			this->signInBtn->Name = L"signInBtn";
			this->signInBtn->Size = System::Drawing::Size(113, 38);
			this->signInBtn->TabIndex = 9;
			this->signInBtn->Text = L"Sign in";
			this->signInBtn->UseVisualStyleBackColor = false;
			this->signInBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::Transparent;
			this->exitBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->exitBtn->ForeColor = System::Drawing::Color::White;
			this->exitBtn->Location = System::Drawing::Point(192, 372);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(113, 38);
			this->exitBtn->TabIndex = 10;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pnlTerms
			// 
			this->pnlTerms->BackColor = System::Drawing::Color::White;
			this->pnlTerms->Controls->Add(this->backBtn);
			this->pnlTerms->Controls->Add(this->textBoxTerms);
			this->pnlTerms->Controls->Add(this->titleTerms);
			this->pnlTerms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlTerms->Location = System::Drawing::Point(0, 0);
			this->pnlTerms->Name = L"pnlTerms";
			this->pnlTerms->Size = System::Drawing::Size(727, 474);
			this->pnlTerms->TabIndex = 11;
			this->pnlTerms->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->pnlTerms->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->pnlTerms->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// backBtn
			// 
			this->backBtn->BackColor = System::Drawing::Color::Black;
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Location = System::Drawing::Point(450, 382);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(113, 38);
			this->backBtn->TabIndex = 10;
			this->backBtn->Text = L"OK";
			this->backBtn->UseVisualStyleBackColor = false;
			this->backBtn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBoxTerms
			// 
			this->textBoxTerms->BackColor = System::Drawing::Color::White;
			this->textBoxTerms->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F));
			this->textBoxTerms->ForeColor = System::Drawing::Color::Black;
			this->textBoxTerms->Location = System::Drawing::Point(53, 77);
			this->textBoxTerms->Multiline = true;
			this->textBoxTerms->Name = L"textBoxTerms";
			this->textBoxTerms->ReadOnly = true;
			this->textBoxTerms->Size = System::Drawing::Size(510, 289);
			this->textBoxTerms->TabIndex = 1;
			this->textBoxTerms->Text = resources->GetString(L"textBoxTerms.Text");
			// 
			// titleTerms
			// 
			this->titleTerms->AutoSize = true;
			this->titleTerms->BackColor = System::Drawing::Color::Transparent;
			this->titleTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.25F));
			this->titleTerms->ForeColor = System::Drawing::Color::Black;
			this->titleTerms->Location = System::Drawing::Point(51, 33);
			this->titleTerms->Name = L"titleTerms";
			this->titleTerms->Size = System::Drawing::Size(222, 30);
			this->titleTerms->TabIndex = 0;
			this->titleTerms->Text = L"Terms and Conditions";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(727, 474);
			this->Controls->Add(this->pnlTerms);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->signInBtn);
			this->Controls->Add(this->labelForTerms);
			this->Controls->Add(this->checkBoxTerms);
			this->Controls->Add(this->txtBoxPassword);
			this->Controls->Add(this->txtBoxUsername);
			this->Controls->Add(this->labelForPassword);
			this->Controls->Add(this->labelForUsername);
			this->Controls->Add(this->title);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->InputLanguageChanging += gcnew System::Windows::Forms::InputLanguageChangingEventHandler(this, &MyForm::MyForm_InputLanguageChanging);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->pnlTerms->ResumeLayout(false);
			this->pnlTerms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Show terms and conditions
	pnlTerms->Show();
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//Use the sign in button only if the checkbox is checked
	if (checkBoxTerms->Checked) {
		signInBtn->Enabled = true;
	}
	else {
		signInBtn->Enabled = false;
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Close the program when the button is clicked
	Application::Exit();
}	

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = txtBoxUsername->Text;
	StreamWriter^ output_file = File::AppendText("data.txt");

	//Exit the program if we use the admin account		
	if (txtBoxUsername->Text == "admin")
	{
		if (txtBoxPassword->Text == "adminpass")
		{
			MessageBox::Show("Access Granted", "Sign in successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
			output_file->WriteLine(username);
			output_file->Close();
		}
		//Show errors
		else {
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else if ((txtBoxUsername->Text != "") && (txtBoxPassword->Text != "")) {
		MessageBox::Show("Sign in successful", "Sign in", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//Save usernames in text file
		output_file->WriteLine(username);
		output_file->Close();
	}
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hide terms and conditions
	pnlTerms->Hide();
}

private: System::Void MyForm_InputLanguageChanging(System::Object^ sender, System::Windows::Forms::InputLanguageChangingEventArgs^ e) {
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   bool dragging;
	   Point offset;
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Enable dragging and get mouse position
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}

private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Check whether we are able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y- offset.Y);
	}
}

private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Disable dragging
	dragging = false;

}

private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		txtBoxPassword->Focus();
	}
}

private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		signInBtn->PerformClick();
	}
}
};
}
