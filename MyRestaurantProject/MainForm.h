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
	/// Summary for MainForm
	/// </summary> 
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();

			lbUserInfo->Text = "ID:  " + user->id;

			lbUserInfo2->Text = "Name:  " + user->name;
			lbUserInfo3->Text = "Email:  " + user->email;
			lbUserInfo4->Text = "Address:  " + user->address;
			lbUserInfo5->Text = "Balance:  " + user->balance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Label^ lbUserInfo2;
	private: System::Windows::Forms::Label^ lbUserInfo3;
	private: System::Windows::Forms::Label^ lbUserInfo4;
	private: System::Windows::Forms::Label^ lbUserInfo5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo2 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo3 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo4 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(47, 107);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(92, 32);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			// 
			// lbUserInfo2
			// 
			this->lbUserInfo2->AutoSize = true;
			this->lbUserInfo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo2->Location = System::Drawing::Point(47, 163);
			this->lbUserInfo2->Name = L"lbUserInfo2";
			this->lbUserInfo2->Size = System::Drawing::Size(140, 32);
			this->lbUserInfo2->TabIndex = 2;
			this->lbUserInfo2->Text = L"label2222";
			// 
			// lbUserInfo3
			// 
			this->lbUserInfo3->AutoSize = true;
			this->lbUserInfo3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo3->Location = System::Drawing::Point(47, 218);
			this->lbUserInfo3->Name = L"lbUserInfo3";
			this->lbUserInfo3->Size = System::Drawing::Size(140, 32);
			this->lbUserInfo3->TabIndex = 3;
			this->lbUserInfo3->Text = L"label2222";
			// 
			// lbUserInfo4
			// 
			this->lbUserInfo4->AutoSize = true;
			this->lbUserInfo4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo4->Location = System::Drawing::Point(47, 269);
			this->lbUserInfo4->Name = L"lbUserInfo4";
			this->lbUserInfo4->Size = System::Drawing::Size(140, 32);
			this->lbUserInfo4->TabIndex = 4;
			this->lbUserInfo4->Text = L"label2222";
			// 
			// lbUserInfo5
			// 
			this->lbUserInfo5->AutoSize = true;
			this->lbUserInfo5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo5->Location = System::Drawing::Point(47, 326);
			this->lbUserInfo5->Name = L"lbUserInfo5";
			this->lbUserInfo5->Size = System::Drawing::Size(140, 32);
			this->lbUserInfo5->TabIndex = 5;
			this->lbUserInfo5->Text = L"label2222";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->lbUserInfo5);
			this->panel1->Controls->Add(this->lbUserInfo);
			this->panel1->Controls->Add(this->lbUserInfo4);
			this->panel1->Controls->Add(this->lbUserInfo2);
			this->panel1->Controls->Add(this->lbUserInfo3);
			this->panel1->Location = System::Drawing::Point(70, -17);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 445);
			this->panel1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(278, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 68);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(293, 254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(528, 427);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users " +
			"(name, email, phone, address, password, balance) VALUES " +
			"(@name, @email, @phone, @address, @password, @balance );";



		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", "John Cena");
		command.Parameters->AddWithValue("@email", "John Cena.com");
		command.Parameters->AddWithValue("@phone", "phone");
		command.Parameters->AddWithValue("@address", "address");
		command.Parameters->AddWithValue("@password", "password");
		command.Parameters->AddWithValue("@balance", "balance");


		command.ExecuteNonQuery();
		user = gcnew User;
		
	}
};
}
