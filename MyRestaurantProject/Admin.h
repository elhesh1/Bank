#pragma once
#include <set>
#include <string.h>
#include <iostream>
#include <iostream>

namespace MyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbUserIDBalance;
	private: System::Windows::Forms::TextBox^ tbNewBalance;
	private: System::Windows::Forms::TextBox^ tbDeleteUser;
	private: System::Windows::Forms::Button^ Button_Edit;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbUserIDBalance = (gcnew System::Windows::Forms::TextBox());
			this->tbNewBalance = (gcnew System::Windows::Forms::TextBox());
			this->tbDeleteUser = (gcnew System::Windows::Forms::TextBox());
			this->Button_Edit = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(172, 93);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(707, 12);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(266, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(559, 81);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome, Admin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(211, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Change Balance:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(245, 292);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 46);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Delete User";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(231, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 36);
			this->label4->TabIndex = 5;
			this->label4->Text = L"User ID:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(228, 279);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(572, 10);
			this->panel2->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(495, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 36);
			this->label5->TabIndex = 7;
			this->label5->Text = L"New Balance:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(274, 353);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 36);
			this->label6->TabIndex = 8;
			this->label6->Text = L"User ID:";
			// 
			// tbUserIDBalance
			// 
			this->tbUserIDBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUserIDBalance->Location = System::Drawing::Point(361, 154);
			this->tbUserIDBalance->Name = L"tbUserIDBalance";
			this->tbUserIDBalance->Size = System::Drawing::Size(100, 44);
			this->tbUserIDBalance->TabIndex = 9;
			// 
			// tbNewBalance
			// 
			this->tbNewBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewBalance->Location = System::Drawing::Point(694, 154);
			this->tbNewBalance->Name = L"tbNewBalance";
			this->tbNewBalance->Size = System::Drawing::Size(158, 44);
			this->tbNewBalance->TabIndex = 10;
			// 
			// tbDeleteUser
			// 
			this->tbDeleteUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDeleteUser->Location = System::Drawing::Point(454, 345);
			this->tbDeleteUser->Name = L"tbDeleteUser";
			this->tbDeleteUser->Size = System::Drawing::Size(100, 44);
			this->tbDeleteUser->TabIndex = 11;
			// 
			// Button_Edit
			// 
			this->Button_Edit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Edit->Location = System::Drawing::Point(431, 214);
			this->Button_Edit->Name = L"Button_Edit";
			this->Button_Edit->Size = System::Drawing::Size(144, 45);
			this->Button_Edit->TabIndex = 12;
			this->Button_Edit->Text = L"Confirm";
			this->Button_Edit->UseVisualStyleBackColor = true;
			this->Button_Edit->Click += gcnew System::EventHandler(this, &Admin::Button_Edit_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(612, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 45);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(149, -9);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(765, 443);
			this->panel3->TabIndex = 14;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1042, 421);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Button_Edit);
			this->Controls->Add(this->tbDeleteUser);
			this->Controls->Add(this->tbNewBalance);
			this->Controls->Add(this->tbUserIDBalance);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Button_Edit_Click(System::Object^ sender, System::EventArgs^ e) {
		
			String^ currentUserID = tbUserIDBalance->Text;
			String^ newBalance = tbNewBalance->Text;

			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "UPDATE users SET balance=@newBalance WHERE id=@ID";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@ID", currentUserID);
			command.Parameters->AddWithValue("@newBalance", newBalance);

			command.ExecuteNonQuery();
			SqlDataReader^ reader = command.ExecuteReader();


			tbUserIDBalance->Text = "";
			tbNewBalance->Text = "";
	
		 
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ currentID = tbDeleteUser->Text;

		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "DELETE FROM users WHERE id=@ID";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@ID", currentID);

		command.ExecuteNonQuery();
		SqlDataReader^ reader = command.ExecuteReader();

		tbDeleteUser->Text = "";
	}
};
}
