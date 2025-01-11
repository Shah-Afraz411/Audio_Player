#pragma once
#include"Header.h"
#include<msclr\marshal_cppstd.h>
using namespace msclr::interop;
namespace PROJECTGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			A = new storage_media();
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

	protected:







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox10;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox13;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;


		   storage_media* A;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(2, 220);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(593, 146);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox3->TabIndex = 17;
			   this->pictureBox3->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(345, 28);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(122, 80);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox2->TabIndex = 16;
			   this->pictureBox2->TabStop = false;
			   this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(77, 28);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(119, 80);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 15;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			   // 
			   // pictureBox7
			   // 
			   this->pictureBox7->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			   this->pictureBox7->Location = System::Drawing::Point(434, 387);
			   this->pictureBox7->Name = L"pictureBox7";
			   this->pictureBox7->Size = System::Drawing::Size(100, 84);
			   this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox7->TabIndex = 23;
			   this->pictureBox7->TabStop = false;
			   this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(294, 387);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(100, 84);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox5->TabIndex = 21;
			   this->pictureBox5->TabStop = false;
			   this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			   // 
			   // pictureBox10
			   // 
			   this->pictureBox10->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			   this->pictureBox10->Location = System::Drawing::Point(826, 163);
			   this->pictureBox10->Name = L"pictureBox10";
			   this->pictureBox10->Size = System::Drawing::Size(26, 22);
			   this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox10->TabIndex = 26;
			   this->pictureBox10->TabStop = false;
			   this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(601, 164);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(219, 22);
			   this->textBox1->TabIndex = 19;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			   // 
			   // pictureBox9
			   // 
			   this->pictureBox9->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox9->Cursor = System::Windows::Forms::Cursors::PanNW;
			   this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			   this->pictureBox9->Location = System::Drawing::Point(880, 164);
			   this->pictureBox9->Name = L"pictureBox9";
			   this->pictureBox9->Size = System::Drawing::Size(26, 21);
			   this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox9->TabIndex = 25;
			   this->pictureBox9->TabStop = false;
			   this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(13, 372);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(101, 76);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox6->TabIndex = 22;
			   this->pictureBox6->TabStop = false;
			   this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			   // 
			   // pictureBox8
			   // 
			   this->pictureBox8->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			   this->pictureBox8->Location = System::Drawing::Point(159, 387);
			   this->pictureBox8->Name = L"pictureBox8";
			   this->pictureBox8->Size = System::Drawing::Size(99, 84);
			   this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox8->TabIndex = 24;
			   this->pictureBox8->TabStop = false;
			   this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			   this->pictureBox4->Location = System::Drawing::Point(294, 387);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(101, 84);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox4->TabIndex = 20;
			   this->pictureBox4->TabStop = false;
			   this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			   // 
			   // pictureBox12
			   // 
			   this->pictureBox12->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			   this->pictureBox12->Location = System::Drawing::Point(655, 71);
			   this->pictureBox12->Name = L"pictureBox12";
			   this->pictureBox12->Size = System::Drawing::Size(104, 63);
			   this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox12->TabIndex = 28;
			   this->pictureBox12->TabStop = false;
			   // 
			   // pictureBox11
			   // 
			   this->pictureBox11->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			   this->pictureBox11->Location = System::Drawing::Point(561, 71);
			   this->pictureBox11->Name = L"pictureBox11";
			   this->pictureBox11->Size = System::Drawing::Size(88, 63);
			   this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox11->TabIndex = 27;
			   this->pictureBox11->TabStop = false;
			   // 
			   // panel1
			   // 
			   this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			   this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panel1->Controls->Add(this->button2);
			   this->panel1->Controls->Add(this->button1);
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(921, 519);
			   this->panel1->TabIndex = 29;
			   this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Transparent;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->button2->ForeColor = System::Drawing::Color::Coral;
			   this->button2->Location = System::Drawing::Point(436, 398);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(139, 52);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Unmount";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::Color::Coral;
			   this->button1->Location = System::Drawing::Point(264, 398);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(116, 52);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Mount";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // pictureBox13
			   // 
			   this->pictureBox13->BackColor = System::Drawing::Color::BlueViolet;
			   this->pictureBox13->Cursor = System::Windows::Forms::Cursors::PanNorth;
			   this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			   this->pictureBox13->Location = System::Drawing::Point(837, 2);
			   this->pictureBox13->Name = L"pictureBox13";
			   this->pictureBox13->Size = System::Drawing::Size(60, 54);
			   this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox13->TabIndex = 30;
			   this->pictureBox13->TabStop = false;
			   this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox2->Location = System::Drawing::Point(26, 164);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ReadOnly = true;
			   this->textBox2->Size = System::Drawing::Size(522, 33);
			   this->textBox2->TabIndex = 31;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			   // 
			   // listBox1
			   // 
			   this->listBox1->FormattingEnabled = true;
			   this->listBox1->ItemHeight = 16;
			   this->listBox1->Location = System::Drawing::Point(601, 192);
			   this->listBox1->Name = L"listBox1";
			   this->listBox1->Size = System::Drawing::Size(296, 324);
			   this->listBox1->TabIndex = 32;
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(811, 119);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(75, 23);
			   this->button3->TabIndex = 33;
			   this->button3->Text = L"Add";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(921, 519);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->pictureBox7);
			   this->Controls->Add(this->pictureBox5);
			   this->Controls->Add(this->pictureBox10);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->pictureBox9);
			   this->Controls->Add(this->pictureBox6);
			   this->Controls->Add(this->pictureBox8);
			   this->Controls->Add(this->pictureBox4);
			   this->Controls->Add(this->pictureBox12);
			   this->Controls->Add(this->pictureBox11);
			   this->Controls->Add(this->pictureBox13);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->listBox1);
			   this->Controls->Add(this->button3);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			   this->panel1->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox5->Hide();
		pictureBox4->Show();
		A->pause(A->getter());
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox4->Hide();
		pictureBox5->Show();
		A->resume(A->getter());
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		A->close(A->getter());

		A->CD();

		for (int i; i < 4; i++) {
			string x = A->playlist(i);
			String^ st = gcnew String(x.c_str());
			listBox1->Items->Add(st);
		}

		textBox2->Text = gcnew String(A->title(A->getter()).c_str());
		A->play();

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		A->close(A->getter());
		A->USB();
		for (int i; i < 4; i++) {
			string x = A->playlist(i);
			String^ st = gcnew String(x.c_str());
			listBox1->Items->Add(st);
		}

		textBox2->Text = gcnew String(A->title(A->getter()).c_str());
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		A->next(A->getter());
		textBox2->Text = gcnew String(A->title(A->getter()).c_str());
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		A->pervious(A->getter());
		textBox2->Text = gcnew String(A->title(A->getter()).c_str());
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		A->shifl(A->getter());
		for (int i; i < 5; i++) {
			string x = A->playlist(i);
			String^ st = gcnew String(x.c_str());
			listBox1->Items->Add(st);
		}

		textBox2->Text = gcnew String(A->title(A->getter()).c_str());
	}
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {

		bool check = false;
		for (int i = 0; i < listBox1->Items->Count; i++) {
				if (textBox1->Text == listBox1->Items[i]->ToString()) {

					MessageBox::Show("Found It");
					textBox1->Text = listBox1->Items[i]->ToString();
					A->remove(A->getter(), i);

					check = true;
					break;

				}
				else { continue; }

			if (check != true) { MessageBox::Show("Can't Find The File!"); }

		}
	
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {

	bool check = false;
	for (int i = 0; i < listBox1->Items->Count; i++) {
		if (textBox1->Text == listBox1->Items[i]->ToString()) {

			MessageBox::Show("Found It");
			textBox1->Text = listBox1->Items[i]->ToString();
			A->search(A->getter(), i);
			textBox2->Text = gcnew String(A->title2(i).c_str());
			check = true;
			break;
		
		}
		else { continue; }

	}
	if (check != true) { MessageBox::Show("Can't Find The File!"); }
	//String^ x = textBox1->Text;
	////std::string compare = marshal_as<std::string>(x);
	//String ^c1 = A->search(x);
	//textBox1->Text = c1;
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
