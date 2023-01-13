#pragma once
#include "User.h"
namespace Restuarant {

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
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(798, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(274, 102);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(536, 39);
			this->tbName->TabIndex = 2;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(274, 147);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(536, 39);
			this->tbEmail->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPhone->Location = System::Drawing::Point(274, 192);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(536, 39);
			this->tbPhone->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Phone";
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAddress->Location = System::Drawing::Point(274, 237);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(536, 39);
			this->tbAddress->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Address";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(274, 282);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(536, 39);
			this->tbPassword->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 32);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPassword->Location = System::Drawing::Point(274, 327);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(536, 39);
			this->tbConfirmPassword->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(24, 330);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 32);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Confirm Passowrd";
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(274, 379);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(265, 59);
			this->btnOK->TabIndex = 13;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(545, 379);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(265, 59);
			this->btnCancel->TabIndex = 14;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(737, 441);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(73, 29);
			this->llLogin->TabIndex = 15;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(822, 476);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
				"(name, email, phone, address, password) VALUES " +
				"(@name, @email, @phone, @address, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
