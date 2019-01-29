#pragma once

namespace Dragonid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pilka;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  miecz;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbStrzal;
	private: System::Windows::Forms::Label^  lbPunkty;
	private: System::Windows::Forms::Button^  koniec;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox53;




	private: System::Windows::Forms::PictureBox^  pictureBox58;

	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox65;

	private: System::Windows::Forms::PictureBox^  restart;


	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->pilka = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->miecz = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbStrzal = (gcnew System::Windows::Forms::Label());
			this->lbPunkty = (gcnew System::Windows::Forms::Label());
			this->koniec = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->restart = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->miecz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->restart))->BeginInit();
			this->SuspendLayout();
			// 
			// pilka
			// 
			this->pilka->BackColor = System::Drawing::Color::Transparent;
			this->pilka->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pilka->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.ErrorImage")));
			this->pilka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.Image")));
			this->pilka->Location = System::Drawing::Point(511, 703);
			this->pilka->Name = L"pilka";
			this->pilka->Size = System::Drawing::Size(30, 30);
			this->pilka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pilka->TabIndex = 0;
			this->pilka->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Gra::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-1, 780);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(793, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-2, 92);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(28, 689);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(766, 92);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(26, 689);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// miecz
			// 
			this->miecz->BackColor = System::Drawing::Color::Transparent;
			this->miecz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"miecz.Image")));
			this->miecz->Location = System::Drawing::Point(449, 736);
			this->miecz->Name = L"miecz";
			this->miecz->Size = System::Drawing::Size(151, 42);
			this->miecz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->miecz->TabIndex = 5;
			this->miecz->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(61, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 46);
			this->label1->TabIndex = 6;
			this->label1->Text = L"STRZA£";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(433, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 46);
			this->label2->TabIndex = 7;
			this->label2->Text = L"PUNKTY";
			// 
			// lbStrzal
			// 
			this->lbStrzal->AutoSize = true;
			this->lbStrzal->BackColor = System::Drawing::Color::Transparent;
			this->lbStrzal->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbStrzal->ForeColor = System::Drawing::Color::Black;
			this->lbStrzal->Location = System::Drawing::Point(234, 22);
			this->lbStrzal->MinimumSize = System::Drawing::Size(50, 45);
			this->lbStrzal->Name = L"lbStrzal";
			this->lbStrzal->Size = System::Drawing::Size(50, 53);
			this->lbStrzal->TabIndex = 8;
			this->lbStrzal->Text = L"3";
			// 
			// lbPunkty
			// 
			this->lbPunkty->AutoSize = true;
			this->lbPunkty->BackColor = System::Drawing::Color::Transparent;
			this->lbPunkty->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPunkty->Location = System::Drawing::Point(614, 22);
			this->lbPunkty->MinimumSize = System::Drawing::Size(150, 45);
			this->lbPunkty->Name = L"lbPunkty";
			this->lbPunkty->Size = System::Drawing::Size(150, 53);
			this->lbPunkty->TabIndex = 9;
			this->lbPunkty->Text = L"0000\r\n";
			// 
			// koniec
			// 
			this->koniec->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"koniec.BackgroundImage")));
			this->koniec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->koniec->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->koniec->ForeColor = System::Drawing::Color::White;
			this->koniec->Location = System::Drawing::Point(433, 564);
			this->koniec->Name = L"koniec";
			this->koniec->Size = System::Drawing::Size(217, 97);
			this->koniec->TabIndex = 12;
			this->koniec->Text = L"KONIEC ";
			this->koniec->UseVisualStyleBackColor = true;
			this->koniec->Visible = false;
			this->koniec->Click += gcnew System::EventHandler(this, &Gra::koniec_Click_1);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"ceg³a1.png");
			this->imageList1->Images->SetKeyName(1, L"ceg³a2.png");
			this->imageList1->Images->SetKeyName(2, L"ceg³a3.png");
			this->imageList1->Images->SetKeyName(3, L"ceg³a4.png");
			this->imageList1->Images->SetKeyName(4, L"ceg³a5.png");
			this->imageList1->Images->SetKeyName(5, L"ceg³a6.png");
			this->imageList1->Images->SetKeyName(6, L"ceg³a7.png");
			// 
			// pictureBox13
			// 
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(523, 224);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(92, 47);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 27;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"soft";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(174, 224);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(92, 47);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 25;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"soft";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(61, 166);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(92, 47);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 23;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"soft";
			// 
			// pictureBox18
			// 
			this->pictureBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(61, 277);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(92, 47);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 22;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"soft";
			// 
			// pictureBox21
			// 
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(639, 111);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(92, 47);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 35;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"hard";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(405, 166);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(92, 47);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 34;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"soft";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(523, 166);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(92, 47);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 33;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"soft";
			// 
			// pictureBox24
			// 
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(289, 166);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(92, 47);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 32;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"soft";
			// 
			// pictureBox25
			// 
			this->pictureBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(174, 166);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(92, 47);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 31;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"soft";
			// 
			// pictureBox26
			// 
			this->pictureBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(61, 111);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(92, 47);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 30;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"hard";
			// 
			// pictureBox29
			// 
			this->pictureBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(639, 166);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(92, 47);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 43;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"soft";
			// 
			// pictureBox30
			// 
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(405, 224);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(92, 47);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 42;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"soft";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(523, 111);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(92, 47);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 41;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"hard";
			// 
			// pictureBox32
			// 
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(289, 224);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(92, 47);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 40;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"soft";
			// 
			// pictureBox33
			// 
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(174, 111);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(92, 47);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 39;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"hard";
			// 
			// pictureBox34
			// 
			this->pictureBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(61, 224);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(92, 47);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 38;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"soft";
			// 
			// pictureBox38
			// 
			this->pictureBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(405, 279);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(92, 47);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 50;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Tag = L"hard";
			// 
			// pictureBox39
			// 
			this->pictureBox39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(523, 277);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(92, 47);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 49;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Tag = L"soft";
			// 
			// pictureBox40
			// 
			this->pictureBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(405, 111);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(92, 47);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 48;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Tag = L"hard";
			// 
			// pictureBox41
			// 
			this->pictureBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(174, 279);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(92, 47);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox41->TabIndex = 47;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Tag = L"soft";
			// 
			// pictureBox45
			// 
			this->pictureBox45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(639, 332);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(92, 47);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox45->TabIndex = 59;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Tag = L"soft";
			// 
			// pictureBox46
			// 
			this->pictureBox46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(405, 332);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(92, 47);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox46->TabIndex = 58;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Tag = L"soft";
			// 
			// pictureBox47
			// 
			this->pictureBox47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(523, 332);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(92, 47);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox47->TabIndex = 57;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Tag = L"hard";
			// 
			// pictureBox48
			// 
			this->pictureBox48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(289, 332);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(92, 47);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox48->TabIndex = 56;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Tag = L"soft";
			// 
			// pictureBox49
			// 
			this->pictureBox49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(289, 111);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(92, 47);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox49->TabIndex = 55;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Tag = L"hard";
			// 
			// pictureBox50
			// 
			this->pictureBox50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(61, 332);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(92, 47);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox50->TabIndex = 54;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Tag = L"soft";
			// 
			// pictureBox53
			// 
			this->pictureBox53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(289, 279);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(92, 47);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox53->TabIndex = 67;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Tag = L"hard";
			// 
			// pictureBox58
			// 
			this->pictureBox58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(174, 333);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(92, 47);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox58->TabIndex = 62;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Tag = L"hard";
			// 
			// pictureBox63
			// 
			this->pictureBox63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(639, 277);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(92, 47);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox63->TabIndex = 73;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Tag = L"soft";
			// 
			// pictureBox65
			// 
			this->pictureBox65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(639, 224);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(92, 47);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox65->TabIndex = 71;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Tag = L"soft";
			// 
			// restart
			// 
			this->restart->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->restart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restart.Image")));
			this->restart->Location = System::Drawing::Point(133, 564);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(217, 97);
			this->restart->TabIndex = 76;
			this->restart->TabStop = false;
			this->restart->Visible = false;
			this->restart->Click += gcnew System::EventHandler(this, &Gra::pictureBox1_Click);
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(789, 805);
			this->Controls->Add(this->restart);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->koniec);
			this->Controls->Add(this->lbPunkty);
			this->Controls->Add(this->lbStrzal);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->miecz);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pilka);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Gra";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Gra::Gra_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::ruchMiecza);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::stopMiecza);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->miecz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->restart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int x = 5, y = 5, strzal = 3, punkty = 0, cegly = 0;
		char kierunek;
		bool blokadaSpacji = false;

#pragma endregion

		private: Void play(String^ dzwiek)		//funkcja odtwarzaj¹ca dŸwiêk
		{
			try {
				System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
				graj->SoundLocation = dzwiek;
				graj->Load();
				graj->Play();
			}
			catch (...) {

			}
		}

		private: Void zbicie_cegly(System::Windows::Forms::Control^ cegla) 
		{
			 if ((pilka->Top + pilka->Height > cegla->Top) &&
				(pilka->Top < cegla->Top + cegla->Height) && 
				(pilka->Left + pilka->Width > cegla->Left) &&
				(pilka->Left < cegla->Left + cegla->Width) &&
				(cegla->Visible == true))
			{
				y = -y;
				
				if (cegla->Tag != "hard")
				{
					cegla->Visible = false;
					punkty += 10;
				//zliczenie rozbitych cegiel
					cegly += 1;
				//dŸwiêk
					play("../dzwieki/kruszenie.wav");
				}
				else 
				{
					if(x>0)
					{
						x += 1;
					}
					else 
					{
						x -= 1;
					}
					if(y>0)
					{
						y += 1;
					}
					else
					{
						y -= 1;
					}
					
					PictureBox^ rozbita_cegla = (PictureBox^)cegla;
					rozbita_cegla->Image = imageList1->Images[4];
					cegla->Tag = "semi";
					punkty += 15;
					//dŸwiêk
					play("../dzwieki/klik.wav");
				}

			}
			lbPunkty->Text = "" + punkty;
			if (cegly == 30)
			{
				//dŸwiêk
				play("../dzwieki/wygrana.wav");
				timer1->Enabled = false;
				restart->Visible = true;
				koniec->Visible = true;
				cegly = 0;
				Gra::BackgroundImage = Image::FromFile("../images_project/tlo-blysk.png");
				lbStrzal->Visible = false;
				lbPunkty->Visible = false;
				label2->Visible = false;
				label1->Visible = false;
				pilka->Visible = false;
				miecz->Visible = false;
				pictureBox2->Visible = false;
				pictureBox3->Visible = false;
				pictureBox4->Visible = false;

			}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		for each (Control^ element in this->Controls)
		{
			if (element->Tag == "soft" || element->Tag == "hard" || element->Tag == "semi")
			{
				zbicie_cegly(element);
			}

		}
		
		//ruch pi³ki
		pilka->Left += x;
		pilka->Top += y;

		//odbicie od prawej œciany
		if (pilka->Left >= Gra::Width - pilka->Width - 48) x = -x;
		
		//odbicie od górnej œcianki
		if (pilka->Top <= 100) y = -y;

		//odbicie od lewej œciany
		if (pilka->Left <= 30) x = -x;

		// ruch miecza w lewo
		if ((kierunek =='L')&&(miecz->Left > 40)) {
			miecz->Left -= 20;
			if ((x == 0) && (y == 0)) pilka->Left -= 20;
		}

		// ruch miecza w prawo
		if ((kierunek == 'R')&&(miecz->Left < Gra::Width - miecz->Width - 55)) 
		{
			miecz->Left += 20;
			if ((x == 0) && (y == 0)) pilka->Left += 20;
		}

		// odbicie od miecza
		if ((pilka->Left + (pilka->Width /2) > miecz->Left) && (pilka->Left < miecz->Left + miecz->Width) && (pilka->Top + pilka->Height > miecz->Top)) {
			y = -y;
			//dŸwiêk
			play("../dzwieki/paletka.wav");
		}
		//utrata pilki:
		 else if (pilka->Top + pilka->Height > miecz->Top ) 
		{
			timer1->Enabled = false;
			pilka->Visible = false;
			strzal -= 1;
			punkty -= 50;
			lbStrzal->Text = "" + strzal;  // lub Convert.toString()
			lbPunkty->Text = "" + punkty;

			if (strzal > 0){
			MessageBox::Show("SKUCHA !!!", "DRAGONID", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			pilka->Top = miecz->Top - pilka->Height ;
			pilka->Left = miecz->Left + (miecz->Width / 2);
			x = 0;
			y = 0;

			timer1->Enabled = true;
			pilka->Visible = true;
			
			blokadaSpacji = false;
			
		}
			else {
				//dŸwiêk
			play("../dzwieki/smiech2.wav"); 
				restart->Visible = true;
				koniec->Visible = true;
			}
		}
	}
			 // ruszanie mieczem KeyEvent key_down;

	private: System::Void ruchMiecza(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) kierunek = 'L';
		if (e->KeyCode == Keys::Right) kierunek = 'R';
		if ((e->KeyCode == Keys::Space) && (blokadaSpacji==false)) {
			x = -5;
			y = -5;
			blokadaSpacji = true;
		}
	}
private: System::Void stopMiecza(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = 'S';   //funkcja key_up, puszczenie klawisza zatrzymuje miecz
}

		 // koniec gry
private: System::Void koniec_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
	this->Close();
}

		 // restart
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	strzal = 3;
	punkty = 0;

	lbPunkty->Text = "" + punkty;
	lbStrzal->Text = "" + strzal;
	label1->Visible = true;
	label2->Visible = true;
	lbStrzal->Visible = true;
	lbPunkty->Visible = true;
	koniec->Visible = false;
	restart->Visible = false;
	pictureBox2->Visible = true;
	pictureBox3->Visible = true;
	pictureBox4->Visible = true;
	pilka->Top = miecz->Top - pilka->Height;
	pilka->Left = miecz->Left + (miecz->Width / 2);

	pilka->Visible = true;
	miecz->Visible = true;
	timer1->Enabled = true;

	x = 0;
	y = 0;

	blokadaSpacji = false;

	Gra::BackgroundImage = Image::FromFile("../images_project/backgrund-gra3-min.png");

	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "soft" || elementy->Tag == "hard" || elementy->Tag == "semi") 
			elementy->Visible = true;
		if (elementy->Tag == "semi")
		{
			elementy->Tag = "hard";
			PictureBox^ obraz = (PictureBox^)elementy;
			obraz->Image = imageList1->Images[5];
		}
	}

}
private: System::Void Gra_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
