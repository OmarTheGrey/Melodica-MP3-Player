#pragma once
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include<random>
#include "notqueue.h"
#include "notstack.h"
#include "MyForm1.h"

namespace anghami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Driving
	/// </summary>
	public ref class Driving : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;


		Driving(Form^ obj1) : obj(obj1)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		Driving()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::TextBox^ search_box;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ explore;
	private: System::Windows::Forms::Button^ yourlibrary;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ bahaa1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ abu;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ amr;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ bahaa2;

	private: System::Windows::Forms::Label^ trackname;
	private: System::Windows::Forms::Label^ ahmed;



	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ play;
	private: System::Windows::Forms::Button^ playprev;
	private: System::Windows::Forms::Button^ playnext;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ end;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ rand;
	private: System::Windows::Forms::Button^ rand2;
	private: System::Windows::Forms::Button^ reset;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Driving::typeid));
			this->search = (gcnew System::Windows::Forms::Button());
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->explore = (gcnew System::Windows::Forms::Button());
			this->yourlibrary = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->bahaa1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->abu = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->amr = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->bahaa2 = (gcnew System::Windows::Forms::Label());
			this->ahmed = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->play = (gcnew System::Windows::Forms::Button());
			this->playprev = (gcnew System::Windows::Forms::Button());
			this->playnext = (gcnew System::Windows::Forms::Button());
			this->start = (gcnew System::Windows::Forms::Label());
			this->end = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->trackname = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rand = (gcnew System::Windows::Forms::Button());
			this->rand2 = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search.BackgroundImage")));
			this->search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->search->Enabled = false;
			this->search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->search->Location = System::Drawing::Point(133, 3);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(436, 41);
			this->search->TabIndex = 26;
			this->search->UseVisualStyleBackColor = false;
			// 
			// search_box
			// 
			this->search_box->AcceptsReturn = true;
			this->search_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->search_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_box->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->search_box->Location = System::Drawing::Point(153, 12);
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(374, 24);
			this->search_box->TabIndex = 27;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(118, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 64);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(195, 83);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(145, 56);
			this->pictureBox2->TabIndex = 32;
			this->pictureBox2->TabStop = false;
			// 
			// explore
			// 
			this->explore->BackColor = System::Drawing::Color::Transparent;
			this->explore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"explore.BackgroundImage")));
			this->explore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->explore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->explore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->explore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->explore->Location = System::Drawing::Point(3, 104);
			this->explore->Name = L"explore";
			this->explore->Size = System::Drawing::Size(85, 80);
			this->explore->TabIndex = 35;
			this->explore->UseVisualStyleBackColor = false;
			this->explore->Click += gcnew System::EventHandler(this, &Driving::explore_Click);
			// 
			// yourlibrary
			// 
			this->yourlibrary->BackColor = System::Drawing::Color::Transparent;
			this->yourlibrary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yourlibrary.BackgroundImage")));
			this->yourlibrary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->yourlibrary->Cursor = System::Windows::Forms::Cursors::Hand;
			this->yourlibrary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yourlibrary->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->yourlibrary->Location = System::Drawing::Point(3, 213);
			this->yourlibrary->Margin = System::Windows::Forms::Padding(2);
			this->yourlibrary->Name = L"yourlibrary";
			this->yourlibrary->Size = System::Drawing::Size(85, 81);
			this->yourlibrary->TabIndex = 34;
			this->yourlibrary->UseVisualStyleBackColor = false;
			this->yourlibrary->Click += gcnew System::EventHandler(this, &Driving::yourlibrary_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(118, 189);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(71, 64);
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// bahaa1
			// 
			this->bahaa1->AutoSize = true;
			this->bahaa1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->bahaa1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bahaa1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->bahaa1->Location = System::Drawing::Point(223, 213);
			this->bahaa1->Name = L"bahaa1";
			this->bahaa1->Size = System::Drawing::Size(492, 24);
			this->bahaa1->TabIndex = 38;
			this->bahaa1->Text = L"Beraha Ya Sheikha               Bahaa Sultan         3:01";
			this->bahaa1->Click += gcnew System::EventHandler(this, &Driving::bahaa1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(118, 272);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 64);
			this->pictureBox3->TabIndex = 39;
			this->pictureBox3->TabStop = false;
			// 
			// abu
			// 
			this->abu->AutoSize = true;
			this->abu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->abu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->abu->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->abu->Location = System::Drawing::Point(223, 297);
			this->abu->Name = L"abu";
			this->abu->Size = System::Drawing::Size(493, 24);
			this->abu->TabIndex = 40;
			this->abu->Text = L"Mehtar                                  Abu                       2:55";
			this->abu->Click += gcnew System::EventHandler(this, &Driving::abu_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(118, 347);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(71, 64);
			this->pictureBox7->TabIndex = 41;
			this->pictureBox7->TabStop = false;
			// 
			// amr
			// 
			this->amr->AutoSize = true;
			this->amr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->amr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amr->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->amr->Location = System::Drawing::Point(223, 370);
			this->amr->Name = L"amr";
			this->amr->Size = System::Drawing::Size(487, 24);
			this->amr->TabIndex = 42;
			this->amr->Text = L"Inta El Haz                            Amr Diab              2:53";
			this->amr->Click += gcnew System::EventHandler(this, &Driving::amr_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(118, 431);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(71, 64);
			this->pictureBox6->TabIndex = 43;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(118, 520);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(71, 64);
			this->pictureBox5->TabIndex = 44;
			this->pictureBox5->TabStop = false;
			// 
			// bahaa2
			// 
			this->bahaa2->AutoSize = true;
			this->bahaa2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->bahaa2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bahaa2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->bahaa2->Location = System::Drawing::Point(223, 532);
			this->bahaa2->Name = L"bahaa2";
			this->bahaa2->Size = System::Drawing::Size(510, 24);
			this->bahaa2->TabIndex = 45;
			this->bahaa2->Text = L"Ta3ala Adala3ak                           Bahaa Sultan    3:31";
			this->bahaa2->Click += gcnew System::EventHandler(this, &Driving::bahaa2_Click);
			// 
			// ahmed
			// 
			this->ahmed->AutoSize = true;
			this->ahmed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->ahmed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ahmed->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->ahmed->Location = System::Drawing::Point(223, 445);
			this->ahmed->Name = L"ahmed";
			this->ahmed->Size = System::Drawing::Size(489, 24);
			this->ahmed->TabIndex = 46;
			this->ahmed->Text = L"El Yom El Helw Da                Ahmed Saad        2:53";
			this->ahmed->Click += gcnew System::EventHandler(this, &Driving::ahmed_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Black;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(147, 630);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(53, 52);
			this->pictureBox8->TabIndex = 51;
			this->pictureBox8->TabStop = false;
			// 
			// play
			// 
			this->play->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play.BackgroundImage")));
			this->play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->play->ForeColor = System::Drawing::SystemColors::ControlText;
			this->play->Location = System::Drawing::Point(559, 627);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(54, 46);
			this->play->TabIndex = 52;
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &Driving::play_Click);
			// 
			// playprev
			// 
			this->playprev->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->playprev->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playprev.BackgroundImage")));
			this->playprev->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playprev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playprev->Location = System::Drawing::Point(532, 636);
			this->playprev->Name = L"playprev";
			this->playprev->Size = System::Drawing::Size(28, 26);
			this->playprev->TabIndex = 53;
			this->playprev->UseVisualStyleBackColor = false;
			this->playprev->Click += gcnew System::EventHandler(this, &Driving::playprev_Click);
			// 
			// playnext
			// 
			this->playnext->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->playnext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playnext.BackgroundImage")));
			this->playnext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playnext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playnext->Location = System::Drawing::Point(611, 636);
			this->playnext->Name = L"playnext";
			this->playnext->Size = System::Drawing::Size(28, 26);
			this->playnext->TabIndex = 54;
			this->playnext->UseVisualStyleBackColor = false;
			this->playnext->Click += gcnew System::EventHandler(this, &Driving::playnext_Click);
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::SystemColors::Desktop;
			this->start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start->Location = System::Drawing::Point(419, 643);
			this->start->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(34, 13);
			this->start->TabIndex = 55;
			this->start->Text = L"00:00";
			// 
			// end
			// 
			this->end->AutoSize = true;
			this->end->BackColor = System::Drawing::SystemColors::Desktop;
			this->end->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->end->Location = System::Drawing::Point(717, 642);
			this->end->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(34, 13);
			this->end->TabIndex = 56;
			this->end->Text = L"00:00";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->ForeColor = System::Drawing::Color::Purple;
			this->progressBar1->Location = System::Drawing::Point(421, 678);
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(330, 3);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 57;
			this->progressBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Driving::progressBar1_MouseClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button1->Location = System::Drawing::Point(923, 532);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 78);
			this->button1->TabIndex = 58;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Driving::button1_Click);
			// 
			// volume
			// 
			this->volume->BackColor = System::Drawing::SystemColors::Desktop;
			this->volume->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volume.BackgroundImage")));
			this->volume->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->volume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volume->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->volume->Location = System::Drawing::Point(827, 643);
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(34, 23);
			this->volume->TabIndex = 59;
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &Driving::volume_Click);
			// 
			// trackname
			// 
			this->trackname->AutoSize = true;
			this->trackname->BackColor = System::Drawing::SystemColors::Desktop;
			this->trackname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackname->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->trackname->Location = System::Drawing::Point(230, 968);
			this->trackname->Name = L"trackname";
			this->trackname->Size = System::Drawing::Size(0, 29);
			this->trackname->TabIndex = 51;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Driving::timer1_Tick);
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->trackBar1->Location = System::Drawing::Point(862, 643);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(209, 30);
			this->trackBar1->TabIndex = 23;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 50;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Driving::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(169, 633);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 61;
			// 
			// rand
			// 
			this->rand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand.BackgroundImage")));
			this->rand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand->Location = System::Drawing::Point(654, 637);
			this->rand->Name = L"rand";
			this->rand->Size = System::Drawing::Size(28, 23);
			this->rand->TabIndex = 65;
			this->rand->UseVisualStyleBackColor = true;
			this->rand->Click += gcnew System::EventHandler(this, &Driving::rand_Click);
			// 
			// rand2
			// 
			this->rand2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->rand2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand2.BackgroundImage")));
			this->rand2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand2->Enabled = false;
			this->rand2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand2->Location = System::Drawing::Point(654, 637);
			this->rand2->Name = L"rand2";
			this->rand2->Size = System::Drawing::Size(28, 23);
			this->rand2->TabIndex = 66;
			this->rand2->UseVisualStyleBackColor = false;
			this->rand2->Visible = false;
			this->rand2->Click += gcnew System::EventHandler(this, &Driving::rand2_Click);
			// 
			// reset
			// 
			this->reset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset.BackgroundImage")));
			this->reset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset->Location = System::Drawing::Point(487, 636);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(28, 23);
			this->reset->TabIndex = 67;
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Driving::reset_Click);
			// 
			// Driving
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1141, 690);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->rand2);
			this->Controls->Add(this->rand);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->playnext);
			this->Controls->Add(this->playprev);
			this->Controls->Add(this->play);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->ahmed);
			this->Controls->Add(this->bahaa2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->amr);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->abu);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->bahaa1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->yourlibrary);
			this->Controls->Add(this->explore);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->search);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Driving";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"anghami";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Driving::Driving_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Driving::Driving_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		notqueue q;
		notstack s;
		int random = 0;
		bool flag_play_pause = 0;
		bool ismuted = 0;
		int progress = 0;
		int durationInSeconds = 0;
		int index = 1;
		void mp3(int who) {
			mciSendStringA("close mp3", nullptr, 0, nullptr);
			if (who == 0) mciSendStringA("open \"Central Cee - Doja (Directed by Cole Bennett).mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 1) mciSendStringA("open \"Beraha Ya Sheikha.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 2) mciSendStringA("open \"Mehtar.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 3) mciSendStringA("open \"Amr Diab Inta Elhaz.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 4) mciSendStringA("open \"El Youm El Helw Dah.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 5) mciSendStringA("open \"Ta3ala Adalla3ak.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			progressBar1->Value = progress;
			timer1->Start();
			Bitmap^ img = gcnew Bitmap("pausebutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 1;
			mciSendStringA("play mp3", nullptr, 0, nullptr);
		}
	private: System::Void bahaa1_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ b = gcnew Bitmap("berahayasheikha.jpeg");
		if (pictureBox8->BackgroundImage != b) {
			pictureBox8->BackgroundImage = b;
			label1->Text = "Beraha Ya Sheikha  -  Bahaa Sultan";
		}
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:01";
		index = 2;
		mp3(1);

	}
	private: System::Void abu_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ b = gcnew Bitmap("mehtar.jpg");
		if (pictureBox8->BackgroundImage != b) {
			pictureBox8->BackgroundImage = b;
			label1->Text = "Mehtar  -  Abu";
		}
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:55";
		index = 3;
		mp3(2);
	}
	private: System::Void amr_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ b = gcnew Bitmap("intaelhaz.jpeg");
		if (pictureBox8->BackgroundImage != b) {
			pictureBox8->BackgroundImage = b;
			label1->Text = "Inta El Haz  -  Amr Diab";
		}
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:53";
		index = 4;
		mp3(3);
	}
	private: System::Void ahmed_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ b = gcnew Bitmap("elyomelhelwda.png");
		if (pictureBox8->BackgroundImage != b) {
			pictureBox8->BackgroundImage = b;
			label1->Text = "El Youm El Helw Da  - Ahmed Saad";
		}
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:53";
		index = 5;
		mp3(4);
	}
	private: System::Void bahaa2_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ b = gcnew Bitmap("ta3ala.jpg");
		if (pictureBox8->BackgroundImage != b) {
			pictureBox8->BackgroundImage = b;
			label1->Text = "Ta3ala Adala3ak  -  Bahaa Sultan";
		}
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:31";
		index = 1;
		mp3(5);
	}
	private: System::Void play_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flag_play_pause == 0) {
			progressBar1->Value = progress;
			timer1->Start();
			Bitmap^ img = gcnew Bitmap("pausebutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 1;
			mciSendStringA("play mp3", nullptr, 0, nullptr);
		}
		else if (flag_play_pause == 1) {
			timer1->Stop();
			Bitmap^ img = gcnew Bitmap("playbutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 0;
			mciSendStringA("pause mp3", nullptr, 0, nullptr);
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		char duration[128];
		mciSendStringA("status mp3 length", duration, sizeof(duration), nullptr);
		durationInSeconds = atoi(duration) / 1000;
		progressBar1->Maximum = durationInSeconds;
		progressBar1->Increment(1);
		progress++;
		int minutes_start = (progress % 3600) / 60;
		int seconds_start = progress % 60;
		String^ formattedstart = String::Format("{0:D2}:{1:D2}", minutes_start, seconds_start);
		start->Text = formattedstart;
		if (progress >= durationInSeconds) {
			if (random == 0) {
				timer1->Stop();
				progress = 0;
				progressBar1->Value = 0;
				start->Text = "00:00";
				end->Text = "00:00";
				flag_play_pause = 1;
				Bitmap^ img = gcnew Bitmap("playbutton.png");
				play->BackgroundImage = img;
				System::Object^ simulatedSender = nullptr;
				System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
				if (index == 1) {
					bahaa1_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 2) {
					abu_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 3) {
					amr_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 4) {
					ahmed_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 5) {
					bahaa2_Click(simulatedSender, simulatedEventArgs);
					index = 1;
				}
				q.Dequeue();
			}
			else if (random == 1) {
				timer1->Stop();
				progress = 0;
				progressBar1->Value = 0;
				start->Text = "00:00";
				end->Text = "00:00";
				flag_play_pause = 1;
				Bitmap^ img = gcnew Bitmap("playbutton.png");
				play->BackgroundImage = img;
				System::Object^ simulatedSender = nullptr;
				System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
				rand_Click(simulatedSender, simulatedEventArgs);
			}
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int volumeLevel = trackBar1->Value;
		float normalizedVolume = static_cast<float>(volumeLevel) / 100.0f;
		DWORD volume2 = static_cast<DWORD>(normalizedVolume * 0xFFFF);
		waveOutSetVolume(0, MAKELONG(volume2, volume2));
		if (trackBar1->Value == 0) {
			Bitmap^ img = gcnew Bitmap("mute.png");
			volume->BackgroundImage = img;
			ismuted = 1;
		}
		else {
			Bitmap^ img = gcnew Bitmap("volume.png");
			volume->BackgroundImage = img;
			ismuted = 0;
		}
	}

	private: System::Void volume_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!ismuted) {
			Bitmap^ img = gcnew Bitmap("mute.png");
			volume->BackgroundImage = img;
			trackBar1->Value = 0;
			waveOutSetVolume(0, 0);
			ismuted = 1;
		}
		else {
			Bitmap^ img = gcnew Bitmap("volume.png");
			volume->BackgroundImage = img;
			trackBar1->Value = 50;
			waveOutSetVolume(0, MAKELONG(0x7FFF, 0x7FFF));
			ismuted = 0;
		}
	}
	private: System::Void explore_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Value = 0;
		progress = 0;
		ismuted = 0;
		flag_play_pause = 0;
		timer1->Stop();
		end->Text = "00:00";
		start->Text = "00:00";
		mciSendStringA("close mp3", nullptr, 0, nullptr);
		this->Hide();
		obj->Show();
	}
	private: System::Void Driving_Load(System::Object^ sender, System::EventArgs^ e) {
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		s.push(5);
	}
	private: System::Void progressBar1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int progressBarWidth = progressBar1->Width;
		int clickX = e->X;
		int newPosition = static_cast<int>((static_cast<double>(clickX) / progressBarWidth) * durationInSeconds);
		progress = newPosition;
		progressBar1->Value = progress;
		int minutes_start = (progress % 3600) / 60;
		int seconds_start = progress % 60;
		int playfrom = newPosition;
		playfrom *= 1000;
		String^ formattedstart = String::Format("{0:D2}:{1:D2}", minutes_start, seconds_start);
		start->Text = formattedstart;
		char progressStr[20];
		sprintf(progressStr, "%d", playfrom);
		char command[256];
		sprintf(command, "play mp3 from %s", progressStr);
		mciSendStringA(command, nullptr, 0, nullptr);
		flag_play_pause = 0;
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		play_Click(simulatedSender, simulatedEventArgs);
	}
private: System::Void rand_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 1;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(1, 5);
	int random_number = distribution(gen);
	index = random_number;
	rand->Enabled = FALSE;
	rand2->Visible = TRUE;
	rand2->Enabled = TRUE;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	if (index == 1) {
		bahaa1_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 2) {
		abu_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 3) {
		amr_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 4) {
		ahmed_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 5) {
		bahaa2_Click(simulatedSender, simulatedEventArgs);
		index = 1;
	}
}
private: System::Void rand2_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 0;
	rand2->Enabled = FALSE;
	rand2->Visible = FALSE;
	rand->Enabled = TRUE;
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("play mp3 from 0", nullptr, 0, nullptr);
	progressBar1->Value = 0;
	progress = 0;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	timer1_Tick(simulatedSender, simulatedEventArgs);
}
private: System::Void playprev_Click(System::Object^ sender, System::EventArgs^ e) {
	s.pop();
	index--;
	if (index >= 1) {
		switch (index) {
		case 1: bahaa2_Click(sender, e); break;
		case 2: bahaa1_Click(sender, e); break;
		case 3: abu_Click(sender, e); break;
		case 4: amr_Click(sender, e); break;
		case 5: ahmed_Click(sender, e); break;
		}
	}
	else {
		index = 5;
		ahmed_Click(sender, e);
	}
}
private: System::Void playnext_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	if (!s.isEmpty()) {
		int currentSongIndex = index;
		switch (currentSongIndex) {
		case 1:
			bahaa1_Click(simulatedSender, simulatedEventArgs);
			break;
		case 2:
			abu_Click(simulatedSender, simulatedEventArgs);
			break;
		case 3:
			amr_Click(simulatedSender, simulatedEventArgs);
			break;
		case 4:
			ahmed_Click(simulatedSender, simulatedEventArgs);
			break;
		case 5:
			bahaa2_Click(simulatedSender, simulatedEventArgs);
			break;
		}
		s.push(currentSongIndex);
	}
	else {
		bahaa2_Click(simulatedSender, simulatedEventArgs);
		s.push(5);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	q.Enqueue(bahaa1->Text);
	q.Enqueue(abu->Text);
	q.Enqueue(amr->Text);
	q.Enqueue(ahmed->Text);
	q.Enqueue(bahaa2->Text);
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	bahaa1_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void Driving_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	explore_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void yourlibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("pause mp3", nullptr, 0, nullptr);
	this->Hide();
	MyForm1^ obj1 = gcnew MyForm1(this);
	obj1->ShowDialog();
}
};
}
