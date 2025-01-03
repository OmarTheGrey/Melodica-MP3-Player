#pragma once
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <random>
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
	/// Summary for newhiphop
	/// </summary>
	public ref class newhiphop : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		newhiphop(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		newhiphop(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
		}/*/
		newhiphop(int^ val,int^ prog,bool^ mute,bool^playpause) {
			progressBar1->Value = val;
			progress = prog;
			ismuted = mute;
			flag_play_pause = playpause;
			InitializeComponent();
		}/*/

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~newhiphop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ cover;
	private: System::Windows::Forms::PictureBox^ indaclub;
	private: System::Windows::Forms::PictureBox^ smackthat;
	private: System::Windows::Forms::PictureBox^ golddigger;
	private: System::Windows::Forms::PictureBox^ mockbird;
	private: System::Windows::Forms::PictureBox^ fdapolice;
	private: System::Windows::Forms::Label^ indaclublabel;
	private: System::Windows::Forms::Label^ smackthatlabel;
	private: System::Windows::Forms::Label^ diggerlabel;
	private: System::Windows::Forms::Label^ mocklabel;
	private: System::Windows::Forms::Label^ goodday;

	private: System::Windows::Forms::Button^ startqueue;
	private: System::Windows::Forms::Button^ play;


	private: System::Windows::Forms::TrackBar^ volumecontrol;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ playprev;
	private: System::Windows::Forms::Button^ playnext;
	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::PictureBox^ albumcover;
	private: System::Windows::Forms::Label^ trackname;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ end;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ explore;
	private: System::Windows::Forms::Button^ yourlibrary;
	private: System::Windows::Forms::Label^ artist;
	private: System::Windows::Forms::PictureBox^ info;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ rand2;
	private: System::Windows::Forms::Button^ rand;
	private: System::Windows::Forms::TextBox^ search_box;
	private: System::Windows::Forms::Button^ search;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(newhiphop::typeid));
			this->cover = (gcnew System::Windows::Forms::PictureBox());
			this->indaclub = (gcnew System::Windows::Forms::PictureBox());
			this->smackthat = (gcnew System::Windows::Forms::PictureBox());
			this->golddigger = (gcnew System::Windows::Forms::PictureBox());
			this->mockbird = (gcnew System::Windows::Forms::PictureBox());
			this->fdapolice = (gcnew System::Windows::Forms::PictureBox());
			this->indaclublabel = (gcnew System::Windows::Forms::Label());
			this->smackthatlabel = (gcnew System::Windows::Forms::Label());
			this->diggerlabel = (gcnew System::Windows::Forms::Label());
			this->mocklabel = (gcnew System::Windows::Forms::Label());
			this->goodday = (gcnew System::Windows::Forms::Label());
			this->startqueue = (gcnew System::Windows::Forms::Button());
			this->play = (gcnew System::Windows::Forms::Button());
			this->volumecontrol = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->playprev = (gcnew System::Windows::Forms::Button());
			this->playnext = (gcnew System::Windows::Forms::Button());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->albumcover = (gcnew System::Windows::Forms::PictureBox());
			this->trackname = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->end = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->explore = (gcnew System::Windows::Forms::Button());
			this->yourlibrary = (gcnew System::Windows::Forms::Button());
			this->artist = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::PictureBox());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->rand2 = (gcnew System::Windows::Forms::Button());
			this->rand = (gcnew System::Windows::Forms::Button());
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->indaclub))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smackthat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->golddigger))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mockbird))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fdapolice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->albumcover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->info))->BeginInit();
			this->SuspendLayout();
			// 
			// cover
			// 
			this->cover->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cover.BackgroundImage")));
			this->cover->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cover->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cover.Image")));
			this->cover->Location = System::Drawing::Point(157, 74);
			this->cover->Margin = System::Windows::Forms::Padding(2);
			this->cover->Name = L"cover";
			this->cover->Size = System::Drawing::Size(247, 240);
			this->cover->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->cover->TabIndex = 0;
			this->cover->TabStop = false;
			this->cover->Click += gcnew System::EventHandler(this, &newhiphop::cover_Click);
			// 
			// indaclub
			// 
			this->indaclub->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->indaclub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"indaclub.BackgroundImage")));
			this->indaclub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->indaclub->Location = System::Drawing::Point(437, 118);
			this->indaclub->Margin = System::Windows::Forms::Padding(2);
			this->indaclub->Name = L"indaclub";
			this->indaclub->Size = System::Drawing::Size(53, 52);
			this->indaclub->TabIndex = 1;
			this->indaclub->TabStop = false;
			// 
			// smackthat
			// 
			this->smackthat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->smackthat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"smackthat.BackgroundImage")));
			this->smackthat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->smackthat->Location = System::Drawing::Point(437, 191);
			this->smackthat->Margin = System::Windows::Forms::Padding(2);
			this->smackthat->Name = L"smackthat";
			this->smackthat->Size = System::Drawing::Size(53, 52);
			this->smackthat->TabIndex = 2;
			this->smackthat->TabStop = false;
			// 
			// golddigger
			// 
			this->golddigger->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->golddigger->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"golddigger.BackgroundImage")));
			this->golddigger->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->golddigger->Location = System::Drawing::Point(437, 266);
			this->golddigger->Margin = System::Windows::Forms::Padding(2);
			this->golddigger->Name = L"golddigger";
			this->golddigger->Size = System::Drawing::Size(53, 52);
			this->golddigger->TabIndex = 3;
			this->golddigger->TabStop = false;
			// 
			// mockbird
			// 
			this->mockbird->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->mockbird->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mockbird.BackgroundImage")));
			this->mockbird->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mockbird->Location = System::Drawing::Point(437, 341);
			this->mockbird->Margin = System::Windows::Forms::Padding(2);
			this->mockbird->Name = L"mockbird";
			this->mockbird->Size = System::Drawing::Size(53, 52);
			this->mockbird->TabIndex = 4;
			this->mockbird->TabStop = false;
			// 
			// fdapolice
			// 
			this->fdapolice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->fdapolice->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fdapolice.BackgroundImage")));
			this->fdapolice->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fdapolice->Location = System::Drawing::Point(437, 416);
			this->fdapolice->Margin = System::Windows::Forms::Padding(2);
			this->fdapolice->Name = L"fdapolice";
			this->fdapolice->Size = System::Drawing::Size(53, 52);
			this->fdapolice->TabIndex = 5;
			this->fdapolice->TabStop = false;
			// 
			// indaclublabel
			// 
			this->indaclublabel->AutoSize = true;
			this->indaclublabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->indaclublabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->indaclublabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->indaclublabel->ForeColor = System::Drawing::SystemColors::Control;
			this->indaclublabel->Location = System::Drawing::Point(495, 130);
			this->indaclublabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->indaclublabel->Name = L"indaclublabel";
			this->indaclublabel->Size = System::Drawing::Size(388, 31);
			this->indaclublabel->TabIndex = 6;
			this->indaclublabel->Text = L"Lock On Me     Metro Boomin";
			this->indaclublabel->Click += gcnew System::EventHandler(this, &newhiphop::indaclublabel_Click);
			// 
			// smackthatlabel
			// 
			this->smackthatlabel->AutoSize = true;
			this->smackthatlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->smackthatlabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->smackthatlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->smackthatlabel->ForeColor = System::Drawing::SystemColors::Control;
			this->smackthatlabel->Location = System::Drawing::Point(495, 203);
			this->smackthatlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->smackthatlabel->Name = L"smackthatlabel";
			this->smackthatlabel->Size = System::Drawing::Size(270, 31);
			this->smackthatlabel->TabIndex = 7;
			this->smackthatlabel->Text = L"Doja     Central Cee";
			this->smackthatlabel->Click += gcnew System::EventHandler(this, &newhiphop::smackthatlabel_Click);
			// 
			// diggerlabel
			// 
			this->diggerlabel->AutoSize = true;
			this->diggerlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->diggerlabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->diggerlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diggerlabel->ForeColor = System::Drawing::SystemColors::Control;
			this->diggerlabel->Location = System::Drawing::Point(495, 276);
			this->diggerlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->diggerlabel->Name = L"diggerlabel";
			this->diggerlabel->Size = System::Drawing::Size(349, 31);
			this->diggerlabel->TabIndex = 8;
			this->diggerlabel->Text = L"Humble      Kendrik Lamar";
			this->diggerlabel->Click += gcnew System::EventHandler(this, &newhiphop::diggerlabel_Click);
			// 
			// mocklabel
			// 
			this->mocklabel->AutoSize = true;
			this->mocklabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->mocklabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mocklabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mocklabel->ForeColor = System::Drawing::SystemColors::Control;
			this->mocklabel->Location = System::Drawing::Point(495, 352);
			this->mocklabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mocklabel->Name = L"mocklabel";
			this->mocklabel->Size = System::Drawing::Size(373, 31);
			this->mocklabel->TabIndex = 9;
			this->mocklabel->Text = L"What To Do\?    Travis Scott";
			this->mocklabel->Click += gcnew System::EventHandler(this, &newhiphop::mocklabel_Click);
			// 
			// goodday
			// 
			this->goodday->AutoSize = true;
			this->goodday->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->goodday->Cursor = System::Windows::Forms::Cursors::Hand;
			this->goodday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goodday->ForeColor = System::Drawing::SystemColors::Control;
			this->goodday->Location = System::Drawing::Point(495, 422);
			this->goodday->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goodday->Name = L"goodday";
			this->goodday->Size = System::Drawing::Size(314, 31);
			this->goodday->TabIndex = 10;
			this->goodday->Text = L"My Eyes    Travis Scott";
			this->goodday->Click += gcnew System::EventHandler(this, &newhiphop::label1_Click);
			// 
			// startqueue
			// 
			this->startqueue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->startqueue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startqueue.BackgroundImage")));
			this->startqueue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->startqueue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startqueue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startqueue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->startqueue->Location = System::Drawing::Point(326, 331);
			this->startqueue->Margin = System::Windows::Forms::Padding(2);
			this->startqueue->Name = L"startqueue";
			this->startqueue->Size = System::Drawing::Size(93, 52);
			this->startqueue->TabIndex = 11;
			this->startqueue->UseVisualStyleBackColor = false;
			this->startqueue->Click += gcnew System::EventHandler(this, &newhiphop::startqueue_Click);
			// 
			// play
			// 
			this->play->BackColor = System::Drawing::SystemColors::Desktop;
			this->play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play.BackgroundImage")));
			this->play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->play->ForeColor = System::Drawing::SystemColors::ControlText;
			this->play->Location = System::Drawing::Point(559, 616);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(54, 46);
			this->play->TabIndex = 12;
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &newhiphop::play_Click);
			// 
			// volumecontrol
			// 
			this->volumecontrol->AutoSize = false;
			this->volumecontrol->BackColor = System::Drawing::SystemColors::Desktop;
			this->volumecontrol->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volumecontrol->Location = System::Drawing::Point(862, 635);
			this->volumecontrol->Maximum = 100;
			this->volumecontrol->Name = L"volumecontrol";
			this->volumecontrol->Size = System::Drawing::Size(209, 30);
			this->volumecontrol->TabIndex = 33;
			this->volumecontrol->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumecontrol->Value = 50;
			this->volumecontrol->Scroll += gcnew System::EventHandler(this, &newhiphop::volumecontrol_Scroll);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->ForeColor = System::Drawing::Color::Purple;
			this->progressBar1->Location = System::Drawing::Point(420, 663);
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(330, 3);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 25;
			this->progressBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &newhiphop::progressBar1_MouseClick);
			// 
			// playprev
			// 
			this->playprev->BackColor = System::Drawing::SystemColors::Desktop;
			this->playprev->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playprev.BackgroundImage")));
			this->playprev->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playprev->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playprev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playprev->Location = System::Drawing::Point(532, 628);
			this->playprev->Name = L"playprev";
			this->playprev->Size = System::Drawing::Size(28, 26);
			this->playprev->TabIndex = 26;
			this->playprev->UseVisualStyleBackColor = false;
			this->playprev->Click += gcnew System::EventHandler(this, &newhiphop::playprev_Click);
			// 
			// playnext
			// 
			this->playnext->BackColor = System::Drawing::SystemColors::Desktop;
			this->playnext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playnext.BackgroundImage")));
			this->playnext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playnext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playnext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playnext->Location = System::Drawing::Point(610, 628);
			this->playnext->Name = L"playnext";
			this->playnext->Size = System::Drawing::Size(28, 26);
			this->playnext->TabIndex = 27;
			this->playnext->UseVisualStyleBackColor = false;
			this->playnext->Click += gcnew System::EventHandler(this, &newhiphop::playnext_Click);
			// 
			// volume
			// 
			this->volume->BackColor = System::Drawing::SystemColors::Desktop;
			this->volume->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volume.BackgroundImage")));
			this->volume->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->volume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volume->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->volume->Location = System::Drawing::Point(826, 635);
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(34, 23);
			this->volume->TabIndex = 28;
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &newhiphop::volume_Click);
			// 
			// albumcover
			// 
			this->albumcover->BackColor = System::Drawing::SystemColors::Desktop;
			this->albumcover->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"albumcover.BackgroundImage")));
			this->albumcover->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->albumcover->Location = System::Drawing::Point(93, 622);
			this->albumcover->Margin = System::Windows::Forms::Padding(2);
			this->albumcover->Name = L"albumcover";
			this->albumcover->Size = System::Drawing::Size(53, 52);
			this->albumcover->TabIndex = 29;
			this->albumcover->TabStop = false;
			// 
			// trackname
			// 
			this->trackname->AutoSize = true;
			this->trackname->BackColor = System::Drawing::SystemColors::Desktop;
			this->trackname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackname->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->trackname->Location = System::Drawing::Point(153, 629);
			this->trackname->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->trackname->Name = L"trackname";
			this->trackname->Size = System::Drawing::Size(0, 24);
			this->trackname->TabIndex = 30;
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::SystemColors::Desktop;
			this->start->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start->Location = System::Drawing::Point(418, 635);
			this->start->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(34, 13);
			this->start->TabIndex = 31;
			this->start->Text = L"00:00";
			// 
			// end
			// 
			this->end->AutoSize = true;
			this->end->BackColor = System::Drawing::SystemColors::Desktop;
			this->end->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->end->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->end->Location = System::Drawing::Point(717, 634);
			this->end->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(34, 13);
			this->end->TabIndex = 32;
			this->end->Text = L"00:00";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &newhiphop::timer1_Tick);
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
			this->explore->Location = System::Drawing::Point(3, 107);
			this->explore->Margin = System::Windows::Forms::Padding(2);
			this->explore->Name = L"explore";
			this->explore->Size = System::Drawing::Size(85, 82);
			this->explore->TabIndex = 35;
			this->explore->UseVisualStyleBackColor = false;
			this->explore->Click += gcnew System::EventHandler(this, &newhiphop::explore_Click);
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
			this->yourlibrary->Location = System::Drawing::Point(3, 255);
			this->yourlibrary->Margin = System::Windows::Forms::Padding(2);
			this->yourlibrary->Name = L"yourlibrary";
			this->yourlibrary->Size = System::Drawing::Size(85, 84);
			this->yourlibrary->TabIndex = 34;
			this->yourlibrary->UseVisualStyleBackColor = false;
			this->yourlibrary->Click += gcnew System::EventHandler(this, &newhiphop::yourlibrary_Click);
			// 
			// artist
			// 
			this->artist->AutoSize = true;
			this->artist->BackColor = System::Drawing::SystemColors::Desktop;
			this->artist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artist->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->artist->Location = System::Drawing::Point(153, 652);
			this->artist->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->artist->Name = L"artist";
			this->artist->Size = System::Drawing::Size(0, 20);
			this->artist->TabIndex = 36;
			// 
			// info
			// 
			this->info->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"info.BackgroundImage")));
			this->info->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->info->Location = System::Drawing::Point(154, 320);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(182, 85);
			this->info->TabIndex = 37;
			this->info->TabStop = false;
			// 
			// reset
			// 
			this->reset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset.BackgroundImage")));
			this->reset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset->Location = System::Drawing::Point(488, 628);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(28, 23);
			this->reset->TabIndex = 58;
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &newhiphop::reset_Click);
			// 
			// rand2
			// 
			this->rand2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand2.BackgroundImage")));
			this->rand2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand2->Enabled = false;
			this->rand2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand2->Location = System::Drawing::Point(654, 629);
			this->rand2->Name = L"rand2";
			this->rand2->Size = System::Drawing::Size(28, 23);
			this->rand2->TabIndex = 60;
			this->rand2->UseVisualStyleBackColor = true;
			this->rand2->Visible = false;
			this->rand2->Click += gcnew System::EventHandler(this, &newhiphop::rand2_Click);
			// 
			// rand
			// 
			this->rand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand.BackgroundImage")));
			this->rand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand->Location = System::Drawing::Point(654, 629);
			this->rand->Name = L"rand";
			this->rand->Size = System::Drawing::Size(28, 23);
			this->rand->TabIndex = 59;
			this->rand->UseVisualStyleBackColor = true;
			this->rand->Click += gcnew System::EventHandler(this, &newhiphop::rand_Click);
			// 
			// search_box
			// 
			this->search_box->AcceptsReturn = true;
			this->search_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->search_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_box->Enabled = false;
			this->search_box->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_box->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->search_box->Location = System::Drawing::Point(157, 12);
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(374, 25);
			this->search_box->TabIndex = 61;
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
			this->search->Location = System::Drawing::Point(135, 3);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(436, 41);
			this->search->TabIndex = 62;
			this->search->UseVisualStyleBackColor = false;
			// 
			// newhiphop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1142, 681);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->search);
			this->Controls->Add(this->rand2);
			this->Controls->Add(this->rand);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->startqueue);
			this->Controls->Add(this->info);
			this->Controls->Add(this->artist);
			this->Controls->Add(this->explore);
			this->Controls->Add(this->yourlibrary);
			this->Controls->Add(this->volumecontrol);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->trackname);
			this->Controls->Add(this->albumcover);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->playnext);
			this->Controls->Add(this->playprev);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->play);
			this->Controls->Add(this->goodday);
			this->Controls->Add(this->mocklabel);
			this->Controls->Add(this->diggerlabel);
			this->Controls->Add(this->smackthatlabel);
			this->Controls->Add(this->indaclublabel);
			this->Controls->Add(this->fdapolice);
			this->Controls->Add(this->mockbird);
			this->Controls->Add(this->golddigger);
			this->Controls->Add(this->smackthat);
			this->Controls->Add(this->indaclub);
			this->Controls->Add(this->cover);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"newhiphop";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"anghami";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &newhiphop::hiphopclassics_FormClosing);
			this->Load += gcnew System::EventHandler(this, &newhiphop::hiphopclassics_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->indaclub))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smackthat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->golddigger))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mockbird))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fdapolice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->albumcover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->info))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// flags and global variables
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
			if (who == 1) mciSendStringA("open \"Lock On Me.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 2) mciSendStringA("open \"central Cee - Doja (Directed by Cole Bennett).mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 3) mciSendStringA("open \"humble.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 4) mciSendStringA("open \"what to do.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 5) mciSendStringA("open \"my eyes.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			progressBar1->Value = progress;
			timer1->Start();
			Bitmap^ img = gcnew Bitmap("pausebutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 1;
			mciSendStringA("play mp3", nullptr, 0, nullptr);
		}
		//
	private: System::Void indaclublabel_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("lock_on_me.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Lock On Me";
		artist->Text = "Metro Boomin";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:54";
		index = 2;
		mp3(1);
	}
	private: System::Void smackthatlabel_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("doja.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Doja";
		artist->Text = "Central Cee";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:04";
		index = 3;
		mp3(2);
	}
	private: System::Void diggerlabel_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("humble.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Humble";
		artist->Text = "Kendrik Lamar";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:57";
		index = 4;
		mp3(3);
	}
	private: System::Void mocklabel_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("what to do.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "What To Do?";
		artist->Text = "Travis Scott";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "04:18";
		index = 5;
		mp3(4);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("my eyes.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "My Eyes";
		artist->Text = "Travis Scott";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "04:12";
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
					indaclublabel_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 2) {
					smackthatlabel_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 3) {
					diggerlabel_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 4) {
					mocklabel_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 5) {
					label1_Click(simulatedSender, simulatedEventArgs);
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
	private: System::Void volumecontrol_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int volumeLevel = volumecontrol->Value;
		float normalizedVolume = static_cast<float>(volumeLevel) / 100.0f;
		DWORD volume2 = static_cast<DWORD>(normalizedVolume * 0xFFFF);
		waveOutSetVolume(0, MAKELONG(volume2, volume2));
		if (volumecontrol->Value == 0) {
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
			volumecontrol->Value = 0;
			waveOutSetVolume(0, 0);
			ismuted = 1;
		}
		else {
			Bitmap^ img = gcnew Bitmap("volume.png");
			volume->BackgroundImage = img;
			volumecontrol->Value = 50;
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
	private: System::Void hiphopclassics_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void startqueue_Click(System::Object^ sender, System::EventArgs^ e) {
		q.Enqueue(indaclublabel->Text);
		q.Enqueue(smackthatlabel->Text);
		q.Enqueue(diggerlabel->Text);
		q.Enqueue(mocklabel->Text);
		q.Enqueue(goodday->Text);
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		indaclublabel_Click(simulatedSender, simulatedEventArgs);
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
			indaclublabel_Click(simulatedSender, simulatedEventArgs);
		}
		else if (index == 2) {
			smackthatlabel_Click(simulatedSender, simulatedEventArgs);
		}
		else if (index == 3) {
			diggerlabel_Click(simulatedSender, simulatedEventArgs);
		}
		else if (index == 4) {
			mocklabel_Click(simulatedSender, simulatedEventArgs);
		}
		else if (index == 5) {
			label1_Click(simulatedSender, simulatedEventArgs);
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
	private: System::Void playnext_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		if (!s.isEmpty()) {
			int currentSongIndex = index;
			switch (currentSongIndex) {
			case 1:
				indaclublabel_Click(simulatedSender, simulatedEventArgs);
				break;
			case 2:
				smackthatlabel_Click(simulatedSender, simulatedEventArgs);
				break;
			case 3:
				diggerlabel_Click(simulatedSender, simulatedEventArgs);
				break;
			case 4:
				mocklabel_Click(simulatedSender, simulatedEventArgs);
				break;
			case 5:
				label1_Click(simulatedSender, simulatedEventArgs);
				break;
			}
			s.push(currentSongIndex);
		}
		else {
			label1_Click(simulatedSender, simulatedEventArgs);
			s.push(5);
		}
	}
	private: System::Void playprev_Click(System::Object^ sender, System::EventArgs^ e) {
		s.pop();
		index--;
		if (index >= 1) {
			switch (index) {
			case 1: label1_Click(sender, e); break;
			case 2: indaclublabel_Click(sender, e); break;
			case 3: smackthatlabel_Click(sender, e); break;
			case 4: diggerlabel_Click(sender, e); break;
			case 5: mocklabel_Click(sender, e); break;
			}
		}
		else {
			index = 5;
			mocklabel_Click(sender, e);
		}
	}
	private: System::Void hiphopclassics_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
	private: System::Void cover_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
