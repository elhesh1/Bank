#pragma once
#include "User.h"

namespace RestMyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;

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
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(563, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(204, 96);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(371, 44);
			this->tbEmail->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(204, 150);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(371, 44);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(204, 245);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(160, 51);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK\r\n";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(370, 245);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(205, 51);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(415, 299);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(134, 37);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(587, 350);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;

		
		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password",
					"Email or Password Empty", MessageBoxButtons::OK);
					return;
		}

		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email = @email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);

				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);

			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
	public: bool switchToRegister = false;
	private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
