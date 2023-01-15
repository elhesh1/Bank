#pragma once
#include "User.h"

namespace MyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Panel^ panel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(112, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(537, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(138, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbName->Location = System::Drawing::Point(282, 89);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(385, 30);
			this->tbName->TabIndex = 2;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbEmail->Location = System::Drawing::Point(188, 123);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(385, 30);
			this->tbEmail->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(139, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbConfirmPassword->Location = System::Drawing::Point(188, 226);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(385, 30);
			this->tbConfirmPassword->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(138, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Confirm Password";
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbPhone->Location = System::Drawing::Point(188, 149);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(385, 30);
			this->tbPhone->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(138, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Phone";
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbAddress->Location = System::Drawing::Point(188, 175);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(385, 30);
			this->tbAddress->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(138, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 25);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Address";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbPassword->Location = System::Drawing::Point(188, 200);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(385, 30);
			this->tbPassword->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(140, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Password";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(188, 261);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(178, 44);
			this->btnOK->TabIndex = 13;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(395, 261);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(178, 44);
			this->btnCancel->TabIndex = 14;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(171, 253);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(96, 37);
			this->llLogin->TabIndex = 15;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tbEmail);
			this->panel1->Controls->Add(this->btnOK);
			this->panel1->Controls->Add(this->btnCancel);
			this->panel1->Controls->Add(this->tbPhone);
			this->panel1->Controls->Add(this->tbAddress);
			this->panel1->Controls->Add(this->tbPassword);
			this->panel1->Controls->Add(this->tbConfirmPassword);
			this->panel1->Location = System::Drawing::Point(94, -8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(593, 328);
			this->panel1->TabIndex = 16;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(776, 315);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	public: User^ user = nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;
		String^ balance = "0";

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || address->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, password, balance) VALUES " +
				"(@name, @email, @phone, @address, @password, @balance );";


			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@balance", balance);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;
			user->balance = balance;

			this->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}

	}
};
}
