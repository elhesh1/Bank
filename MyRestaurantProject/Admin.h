#pragma once

namespace MyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(37, 93);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(734, 12);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(114, 9);
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
			this->label2->Location = System::Drawing::Point(29, 108);
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
			this->label3->Location = System::Drawing::Point(29, 292);
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
			this->label4->Location = System::Drawing::Point(91, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 36);
			this->label4->TabIndex = 5;
			this->label4->Text = L"User ID:";
			this->label4->Click += gcnew System::EventHandler(this, &Admin::label4_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(97, 279);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(572, 10);
			this->panel2->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(385, 162);
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
			this->label6->Location = System::Drawing::Point(91, 353);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 36);
			this->label6->TabIndex = 8;
			this->label6->Text = L"User ID:";
			// 
			// tbUserIDBalance
			// 
			this->tbUserIDBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUserIDBalance->Location = System::Drawing::Point(219, 154);
			this->tbUserIDBalance->Name = L"tbUserIDBalance";
			this->tbUserIDBalance->Size = System::Drawing::Size(100, 44);
			this->tbUserIDBalance->TabIndex = 9;
			// 
			// tbNewBalance
			// 
			this->tbNewBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewBalance->Location = System::Drawing::Point(596, 154);
			this->tbNewBalance->Name = L"tbNewBalance";
			this->tbNewBalance->Size = System::Drawing::Size(151, 44);
			this->tbNewBalance->TabIndex = 10;
			// 
			// tbDeleteUser
			// 
			this->tbDeleteUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDeleteUser->Location = System::Drawing::Point(219, 349);
			this->tbDeleteUser->Name = L"tbDeleteUser";
			this->tbDeleteUser->Size = System::Drawing::Size(100, 44);
			this->tbDeleteUser->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(317, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 45);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(391, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 45);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(802, 421);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
