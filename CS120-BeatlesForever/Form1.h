#pragma once

namespace WindowsFormsApplication2012 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::IO::IsolatedStorage;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Data::SQLite;
	using namespace System::Data::SQLite::Linq;
	using namespace System::Data::SQLite::Generic;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
#pragma region InitDecon
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblTitle;
	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::TextBox^  txtLastName;
	private: System::Windows::Forms::TextBox^  txtItem;
	private: System::Windows::Forms::TextBox^  txtQuantity;
	private: System::Windows::Forms::TextBox^  txtItemPrice;


	private: System::Windows::Forms::TextBox^  txtTax;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::TextBox^  txtSubTotal;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::TextBox^  txtTotal;
	private: System::Windows::Forms::ListBox^  lbProduce;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::PictureBox^  picProduce;
	private: System::Windows::Forms::PictureBox^  picHead;
	private: System::Windows::Forms::Label^  lblMessage;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::TextBox^  txtPrice;
	private: System::Windows::Forms::TextBox^  txtProductID;
	private: System::Windows::Forms::Button^  btnLogin;



	private: System::Windows::Forms::Label^  lblPassword;


	private: System::Windows::Forms::Label^  lblID;
	private: System::Windows::Forms::TextBox^  txtPassword;

	private: System::Windows::Forms::TextBox^  txtID;



	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->picHead = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtItem = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtItemPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->lbProduce = (gcnew System::Windows::Forms::ListBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->picProduce = (gcnew System::Windows::Forms::PictureBox());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtProductID = (gcnew System::Windows::Forms::TextBox());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picHead))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picProduce))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->lblTitle->Location = System::Drawing::Point(181, 17);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(363, 29);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Bricesoft Produce Emporeum";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SpringGreen;
			this->label2->Location = System::Drawing::Point(181, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(293, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"       The FRESHEST Ever";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->picHead);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->lblTitle);
			this->groupBox1->Location = System::Drawing::Point(10, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(647, 130);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// picHead
			// 
			this->picHead->Location = System::Drawing::Point(13, 17);
			this->picHead->Name = L"picHead";
			this->picHead->Size = System::Drawing::Size(150, 81);
			this->picHead->TabIndex = 2;
			this->picHead->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"First Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Last Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Item:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 314);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Quantity:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Price:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 382);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Tax:";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(98, 209);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(100, 20);
			this->txtFirstName->TabIndex = 9;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &Form1::txtFirstName_TextChanged);
			this->txtFirstName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::txtFirstName_KeyDown);
			this->txtFirstName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtFirstName_KeyPress);
			this->txtFirstName->Leave += gcnew System::EventHandler(this, &Form1::txtFirstName_Leave);
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(98, 243);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(100, 20);
			this->txtLastName->TabIndex = 10;
			this->txtLastName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::txtLastName_KeyDown);
			this->txtLastName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtLastName_KeyPress);
			this->txtLastName->Leave += gcnew System::EventHandler(this, &Form1::txtLastName_Leave);
			// 
			// txtItem
			// 
			this->txtItem->Location = System::Drawing::Point(98, 277);
			this->txtItem->Name = L"txtItem";
			this->txtItem->ReadOnly = true;
			this->txtItem->Size = System::Drawing::Size(100, 20);
			this->txtItem->TabIndex = 11;
			this->txtItem->TabStop = false;
			// 
			// txtQuantity
			// 
			this->txtQuantity->Location = System::Drawing::Point(98, 311);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(100, 20);
			this->txtQuantity->TabIndex = 12;
			this->txtQuantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtQuantity->TextChanged += gcnew System::EventHandler(this, &Form1::txtQuantity_TextChanged);
			this->txtQuantity->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::txtQuantity_KeyDown);
			this->txtQuantity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtQuantity_KeyPress);
			this->txtQuantity->Leave += gcnew System::EventHandler(this, &Form1::txtQuantity_Leave);
			// 
			// txtItemPrice
			// 
			this->txtItemPrice->Location = System::Drawing::Point(98, 345);
			this->txtItemPrice->Name = L"txtItemPrice";
			this->txtItemPrice->ReadOnly = true;
			this->txtItemPrice->Size = System::Drawing::Size(100, 20);
			this->txtItemPrice->TabIndex = 13;
			this->txtItemPrice->TabStop = false;
			this->txtItemPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtTax
			// 
			this->txtTax->Location = System::Drawing::Point(98, 379);
			this->txtTax->Name = L"txtTax";
			this->txtTax->ReadOnly = true;
			this->txtTax->Size = System::Drawing::Size(100, 20);
			this->txtTax->TabIndex = 14;
			this->txtTax->TabStop = false;
			this->txtTax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 416);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Sub Total:";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Location = System::Drawing::Point(98, 413);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(100, 20);
			this->txtSubTotal->TabIndex = 16;
			this->txtSubTotal->TabStop = false;
			this->txtSubTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 450);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Total:";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(98, 447);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(100, 20);
			this->txtTotal->TabIndex = 18;
			this->txtTotal->TabStop = false;
			this->txtTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbProduce
			// 
			this->lbProduce->FormattingEnabled = true;
			this->lbProduce->Location = System::Drawing::Point(385, 190);
			this->lbProduce->Name = L"lbProduce";
			this->lbProduce->Size = System::Drawing::Size(76, 108);
			this->lbProduce->TabIndex = 19;
			this->lbProduce->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbProduce_SelectedIndexChanged);
			this->lbProduce->Leave += gcnew System::EventHandler(this, &Form1::lbProduce_Leave);
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(496, 188);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(89, 23);
			this->btnOK->TabIndex = 20;
			this->btnOK->Text = L"Click To &Add";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &Form1::btnOK_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(496, 230);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(89, 23);
			this->btnClear->TabIndex = 21;
			this->btnClear->Text = L"&Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// btnExit
			// 
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Location = System::Drawing::Point(496, 274);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(89, 23);
			this->btnExit->TabIndex = 22;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// picProduce
			// 
			this->picProduce->Location = System::Drawing::Point(496, 335);
			this->picProduce->Name = L"picProduce";
			this->picProduce->Size = System::Drawing::Size(146, 132);
			this->picProduce->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picProduce->TabIndex = 23;
			this->picProduce->TabStop = false;
			// 
			// lblMessage
			// 
			this->lblMessage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblMessage->Location = System::Drawing::Point(23, 487);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(619, 150);
			this->lblMessage->TabIndex = 24;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(385, 338);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->ReadOnly = true;
			this->txtPrice->Size = System::Drawing::Size(100, 20);
			this->txtPrice->TabIndex = 25;
			this->txtPrice->TabStop = false;
			this->txtPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtPrice->Visible = false;
			// 
			// txtProductID
			// 
			this->txtProductID->Location = System::Drawing::Point(385, 366);
			this->txtProductID->Name = L"txtProductID";
			this->txtProductID->ReadOnly = true;
			this->txtProductID->Size = System::Drawing::Size(100, 20);
			this->txtProductID->TabIndex = 26;
			this->txtProductID->TabStop = false;
			this->txtProductID->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtProductID->Visible = false;
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Location = System::Drawing::Point(121, 145);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(79, 13);
			this->lblID->TabIndex = 27;
			this->lblID->Text = L"Login Id(Email):";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(329, 145);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(56, 13);
			this->lblPassword->TabIndex = 29;
			this->lblPassword->Text = L"Password:";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(496, 144);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(89, 23);
			this->btnLogin->TabIndex = 31;
			this->btnLogin->Text = L"&Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Form1::btnLogin_Click);
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(201, 142);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 20);
			this->txtID->TabIndex = 32;
			this->txtID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::txtID_KeyDown);
			this->txtID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtID_KeyPress);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(385, 142);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 33;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::txtPassword_KeyDown);
			this->txtPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtPassword_KeyPress);
			// 
			// Form1
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(667, 659);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->txtProductID);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->picProduce);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->lbProduce);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtSubTotal);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtTax);
			this->Controls->Add(this->txtItemPrice);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->txtItem);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picHead))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picProduce))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//My Code	//TODO in exit check to see if myarray is empty if not save the order; need email for custo and order need to verify cust add a cust rec supplier region category emplayee
			// need logon with id and password option to logon as guest; same info just not saved
		static bool ConnectionNotOpened = true;
		static double tax = .08;					static double total = 0;						static double itemPrice = 0;			
		static double subTotalAmt = 0;				double price;		double salesTaxAmt;			int quantity;						static int structureCntr = 1; 
		static System::Drawing::Color defaultTxtBackColor ;		static Color defaultLblBackColor ;		static Color errBackColor = Color::LightGreen; //TODO: Finish below. my head hurts!
		static SQLiteConnection^ db = gcnew SQLiteConnection();static String^ diskFile = "ProduceListBoxA.txt";static String^ uncleBobFN = "WriteTest.txt";
		static FileStream^ fileStream = gcnew FileStream(uncleBobFN,FileMode::OpenOrCreate,FileAccess::ReadWrite,FileShare::ReadWrite ); 
		static String^ strStrucNameA;					String^ MessageTitle;
		ref struct strucProduce{int iProductID;			String^ sFirstName;			String^ SLastName;			String^ sItem;				String^ sTaxRate;			String^ sItemPrice;			
								String^ sQuantity;		String^ sPrice;				String^ sSalesTaxAmt;		String^ sSubTotal;			String^ sTotal;}strStrucName;
		static IsolatedStorageFile^ isoStore = IsolatedStorageFile::GetStore(IsolatedStorageScope::User | IsolatedStorageScope::Assembly, (Type ^)nullptr, (Type ^)nullptr);
		static UnicodeEncoding^ uniEncoding = gcnew UnicodeEncoding;				static String^ lastRecordText = "The last processed record number was: ";
		static int textLength = uniEncoding->GetByteCount( lastRecordText );		static int recordNumber = 13;			static int arrayIndex = 0;
		static int byteCount = uniEncoding->GetByteCount( recordNumber.ToString() );static String^ tempString;				
		static array<strucProduce ^> ^ MyArray =  gcnew array<strucProduce ^>(1000);static StringBuilder ^sb;
		//TextValidation
		static bool txtFirstNameIsDirty = false; static bool txtLastNameIsDirty = false; static bool txtIDIsDirty = false; static bool txtPasswordIsDirty = false;
		static bool txtQuantityIsDirty=false;
 
/*  */

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 					  //01234567890123456789012345678901234567890123456789
			 //lbProduce->Items->Add("Strawberry          0.99      strawberry.jpg");
			 //lbProduce->Items->Add("Lettuce             1.61      romainelettuce.jpg");
			 //lbProduce->Items->Add("Pomegranate         2.34      pomegranate.jpg");
			 //lbProduce->Items->Add("Orange              1.25      orange.jpg");
			 //lbProduce->Items->Add("Apple               1.16      apple.jpg");
			 //lbProduce->Items->Add("White Grape         1.88      whitegrape.jpg");
			 //lbProduce->Items->Add("Cherry              1.89      cherry.jpg");
			 //lbProduce->Items->Add("Tomato              3.25      cherrytomato.jpg");
			 // ReadListBoxFromFile();
			 ReadListBoxFromDB();
			 lbProduce->Sorted = true;
			 txtQuantity->Text = "1";
			 picHead->Load("supermarketv1.jpg");
			 defaultTxtBackColor= txtFirstName->BackColor; defaultLblBackColor = lblMessage->BackColor;
			 this->Text = lblTitle->Text;
			 // Display a help button on the form.
			 this->HelpButton = true;
			 // Define the border style of the form to a dialog box.
			 this->FormBorderStyle = Windows::Forms::FormBorderStyle::Fixed3D ;
		     // Set the accept button of the form to button1.
			 this->AcceptButton = btnOK;
		     // Set the cancel button of the form to button2.
			 this->CancelButton = btnExit;
		     // Set the start position of the form to the center of the screen.
			 this->StartPosition = FormStartPosition::CenterScreen;			 //this->StartPosition(CenterToScreen) ;
		}

	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(txtFirstName->Text == String::Empty || txtLastName->Text == String::Empty || txtItem->Text == String::Empty || txtQuantity->Text == String::Empty || lbProduce->SelectedIndex < 0)
			 {
				 txtFirstName_Leave(sender, e);				txtLastName_Leave(sender, e);				txtQuantity_Leave(sender, e);				lbProduce_Leave(sender, e);

				 String^ strMessage = "Please Enter First & Last Name, Quantity, and select an item from the Produce Box";
				 MessageBox::Show(strMessage, "Missing Fields", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 lblMessage->Text = strMessage;
			 }
			 else
			 {
				 CalculateSubTotals();				CalculateTotals();					FillStruc();				WriteStrucToFile();
				 if(structureCntr == 2)
		             {
						 CreateIsoFoldersNFiles();
						 lblMessage->Text += "Here is a list of all directories in this isolated store:   ";
						 for each (String^ directory in GetAllDirectories("*", isoStore))
						     {						lblMessage->Text += directory; lblMessage->Text += ",";							 }		        
						 lblMessage->Text += "\r Here is a list of all the files in this isolated store:";										    // Retrieve all the files in the directory by calling the GetFiles method.			//Console::WriteLine('\r');
						 for each (String^ file in GetAllFiles("*", isoStore))
							 {						lblMessage->Text += file;      lblMessage->Text += ",";							 }				//	  }				// else				//	 {
						 WriteToIsoFile();
					 }
			}
		 }

	public: System::Void CalculateSubTotals()
		 {
			 if(txtQuantity->Text == String::Empty)								{						txtQuantity->Text = "1";					}
			 int quantity = Convert::ToInt32(txtQuantity->Text);
			 txtItemPrice->Text = itemPrice.ToString("C2");

			 double price = quantity * itemPrice;
			 txtPrice->Text = price.ToString("C2");

			 double salesTaxAmt = tax * price;
			 txtTax->Text = salesTaxAmt.ToString("C2");

			 subTotalAmt = price + salesTaxAmt;
			 txtSubTotal->Text = subTotalAmt.ToString("C2");
		 }

	public: System::Void CalculateTotals()
		{
				 total += subTotalAmt;
				 txtTotal->Text = total.ToString("C2");
				 lblMessage->Text = "Thank You, " + txtFirstName->Text + " " + txtLastName->Text + " for your order of " + txtQuantity->Text + " " + txtItem->Text + 
					 "(s). Your Sub-Total is " + txtSubTotal->Text + ", and your total is " + txtTotal->Text + ".";  
		}

	public: System::Void FillStruc()
		{
			 int arrIx= arrayIndex;				//MyArray =  gcnew array<strucProduce ^>(1000);int indx=0;
			 MyArray[arrIx] = gcnew strucProduce;		 					MyArray[arrIx]->iProductID = Convert::ToInt32(txtProductID->Text->Trim());
			 MyArray[arrIx]->sFirstName = txtFirstName->Text->Trim();		MyArray[arrIx]->SLastName = txtLastName->Text->Trim();
			 MyArray[arrIx]->sItem = txtItem->Text->Trim();					MyArray[arrIx]->sTaxRate = tax.ToString("C2");				
			 MyArray[arrIx]->sItemPrice = txtItemPrice->Text->Trim();		MyArray[arrIx]->sQuantity = txtQuantity->Text->Trim(); 
			 MyArray[arrIx]->sPrice = txtPrice->Text->Trim();				MyArray[arrIx]->sSalesTaxAmt = txtTax->Text->Trim(); 
			 MyArray[arrIx]->sSubTotal = txtSubTotal->Text->Trim();			MyArray[arrIx]->sTotal = txtTotal->Text->Trim();
			 arrayIndex++;
		}

	public: System::Void WriteStrucToFile()
		 {
			strStrucNameA =		txtProductID->Text->Trim()	+ "," +		txtFirstName->Text->Trim()     + "," +     txtLastName->Text->Trim()     + "," +     txtItem->Text->Trim() 
					+ "," +     tax.ToString("C2")			+ "," +		txtQuantity->Text->Trim()      + "," +     txtItemPrice->Text->Trim()    + "," +     txtPrice->Text->Trim()
					+ "," +		txtTax->Text->Trim()		+ "," +		txtSubTotal->Text->Trim()	   + "," +	   txtTotal->Text->Trim()		 + "\n";
			byteCount = uniEncoding->GetByteCount( strStrucNameA );   structureCntr++;				   //  		   fileStream->Write( uniEncoding->GetBytes( strStrucName.ToString() ), 0, byteCount );
			fileStream->Write( uniEncoding->GetBytes( strStrucNameA), 0, byteCount );
            fileStream->Flush();
			//
		}

	public: System::Void ReadListBoxFromFile()
		 {				 //---create reader and load listbox
				 StreamReader^ myReader;
				 try
				 {
					 	myReader = gcnew StreamReader(diskFile);
						 while(myReader->Peek() != -1)
						 {
								String^ dataFromFile = myReader->ReadLine();
								lbProduce->Items->Add(dataFromFile);
						 }
				 }
				 catch (Exception^ ex)
				 {
						MessageBox::Show("An error ocurred while reading.... " + ex->Message->ToString(), lblTitle->Text);
				 }
				 finally
				 {
					myReader->Close();
				 }


			//			// char[] readBuf;			// StreamReader^ produceReader - gcnew StreamReader(fileStream);			 //fileStream->r                // Now we may begin reading the bytes that were originally written. For simplicity reasons we decided to read one byte at a time and print each byte to the console.
			//         array< Byte >^ MyReadBuffer = gcnew array< Byte >(44);
			//try
			//{				while (true)
			//             {                    int BytesRead;
			//                 try
			//			{							String^ Strawberry ;
			//				BytesRead = fileStream->Read(MyReadBuffer, 0, MyReadBuffer->Length);							//unsigned char* uc;							//Strawberry=( reinterpret_cast< Byte>(MyReadBuffer) ) ;
			//				for each (Byte Tvar in MyReadBuffer)							{ 								Strawberry += (char)Tvar;					}//->( reinterpret_cast< char const*>(Tvar));   ////unsigned char								char boooob = //( reinterpret_cast< Byte>(Tvar));//							Strawberry = Convert::ToString(MyReadBuffer[44]);
			//				lbProduce->Items->Add(Strawberry);							//Console::WriteLine("Read() is OK");
			//			}
			//			catch (Exception^ e)							{								throw gcnew Exception("Read failed with error: " + e->Message);							}
			//                 if (BytesRead == 0)                                 {                        break;		                    }                      //Console::WriteLine("No more bytes to read");							// Console::WriteLine("Read byte -> " + MyReadBuffer[0].ToString());
			//             }
			//         }
			//         catch (Exception^ e)				{					   Console::WriteLine("Found error " + e->Message);				}
			//         finally
			//	{					fileStream->Close();}						// We are finished performing IO on the file. We need to close the file to release operating system resources related to the file.					//Console::WriteLine("Close() is OK");				}								//    return 0;
			//										 //Stream^ streamB =gcnew Stream("ProduceListBox.txt",SreamMode::OpenOrCreate,FileAccess::ReadWrite,FileShare::ReadWrite );			 //StreamReader^ readerB =gcnew StreamReader(			 //fileStream->Read(readBuf,0,43)			 //fileStream->Write( uniEncoding->GetBytes( strStrucNameA), 0, byteCount );            //fileStream->Flush();			//
		}

	public: System::Void ReadListBoxFromDB()
			{
				OpenDBConnection(); ReadTable("Products", "productName, productId, unitPrice ,productImage");		

			}

	public: System::Void OpenDBConnection()
			{
				try
					{
						lblMessage->Text += "Opening Database Connection To MyDb.db ...";	ConnectionNotOpened = false;
						db->ConnectionString = "Data Source=MyDb.db";
						db->Open();					   // Open Database Connection
						lblMessage->Text += "Database Connection To MyDb.db Opened.\n";
					}
				catch (Exception ^e)
					{
						lblMessage->Text += "Exception While Opening Sqlite3 Connnection ..." + e->ToString();
					}
 			}

	public: System::Void ReadTable(String^ TableName, String^ FieldNames)		   
			{
				String ^strField, ^strField0, ^strField1, ^strField2, ^strField3, ^strLine;
				// Display Table
				 try
				 {
				    lblMessage->Text += "Displaying Table " + TableName;
				    SQLiteCommand ^cmdSelect = db->CreateCommand();
				    cmdSelect->CommandText = "SELECT " + FieldNames + " FROM " + TableName + ";";
				    SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				    sb = gcnew StringBuilder();
					sb->Capacity=6666;
				    for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				    {

				       if (colCtr > 0) sb->Append("|");							// Add Seperator (If After First Column)

				       sb->Append(reader->GetName(colCtr));						// Add Column Name
				    }
				    sb->AppendLine();
				    sb->Append("~~~~~~~~~~~~");
				    sb->AppendLine();
					lblMessage->Text += sb->ToString();sb = gcnew StringBuilder();									 String^ ppppp = "";
				    while (reader->Read())
				    {
				       for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				       {
				          //if (colCtr > 0) sb->Append("|");						// Add Seperator (If After First Column)
						  switch (colCtr)
						  {
								case 0:                  //1
									strField0 = reader->GetValue(colCtr)->ToString();		// Add Column Text
									strLine=strField0;						  
						            break;
								case 1:                  //0
									txtProductID->Text = reader->GetValue(colCtr)->ToString(); strField1 = txtProductID->Text;		// Add Column Text
						            break;
								case 2:                  //5
									strField2 = reader->GetValue(colCtr)->ToString();		// Add Column Text									//int sizeofstrline = strLine->Length;
									for (int i = strLine->Length; i < 20; i++)				{						ppppp += " ";				}
									strLine += ppppp + txtProductID->Text;	ppppp="";	//i=0;				  
									for (int j = strLine->Length; j < 30; j++)				{						ppppp += " ";				}
									strLine += ppppp + strField2;	ppppp="";	//i=0;				  
						            break;
								case 3:                  //10
									strField3 = reader->GetValue(colCtr)->ToString();		// Add Column Text									//sb->Insert(30,strField);						  
									for (int k = strLine->Length; k < 40; k++)				{						ppppp += " ";				}
									strLine += ppppp + strField3;	ppppp="";	//j=0;				  
									strField = "                                                               ";
									strField = strField->Insert(0,strField0);
									strField = strField->Insert(19,strField1);
									strField = strField->Insert(29,strField2);
									strField = strField->Insert(39,strField3);
									break;
						  }
				       }
					   lbProduce->Items->Add(strLine);				sb->AppendLine(strLine);			strLine="";				strField = " ";

				    }
				    lblMessage->Text += sb->ToString() + "///SQLite " + TableName;
				 }
				 catch (Exception ^e)
				 {                          
				    lblMessage->Text += "Exception While Displaying " + TableName + " ..." + e->ToString() ;
				 }

			}
			/* using namespace System;

int main()
{
   String^ animal1 = "fox";
   String^ animal2 = "dog";
   String^ strTarget = String::Format( "The {0} jumped over the {1}.", animal1, animal2 );
   Console::WriteLine( "The original string is:{0}{1}{0}", Environment::NewLine, strTarget );
   Console::Write( "Enter an adjective (or group of adjectives) to describe the {0}: ==> ", animal1 );
   String^ adj1 = Console::ReadLine();
   Console::Write( "Enter an adjective (or group of adjectives) to describe the {0}: ==> ", animal2 );
   String^ adj2 = Console::ReadLine();
   adj1 = String::Concat( adj1->Trim(), " " );
   adj2 = String::Concat( adj2->Trim(), " " );
   strTarget = strTarget->Insert( strTarget->IndexOf( animal1 ), adj1 );
   strTarget = strTarget->Insert( strTarget->IndexOf( animal2 ), adj2 );
   Console::WriteLine( " {0}The final string is: {0} {1}", Environment::NewLine, strTarget );
}
// Output from the example might appear as follows:
//       The original string is:
//       The fox jumped over the dog.
//       
//       Enter an adjective (or group of adjectives) to describe the fox: ==> bold
//       Enter an adjective (or group of adjectives) to describe the dog: ==> lazy
//       
//       The final string is:
//       The bold fox jumped over the lazy dog.
public static List<language> GetLanguages(int langId)
{
    List<language> langs = new List<language>();
    try
    {
        using (SQLiteConnection conn = new SQLiteConnection(connectionString))
        {
            conn.Open();
            string sql = "SELECT * FROM Language WHERE Id = " + langId;
            if (langId == 0)
            {
                sql = "SELECT * FROM Language";
            }
            using (SQLiteCommand cmd = new SQLiteCommand(sql, conn))
            {
                using (SQLiteDataReader reader = cmd.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        Language la = new Language();
                        la.LangTitle = reader["LangTitle"].ToString();
                        la.Id = Int32.Parse(reader["Id"].ToString());
                        langs.Add(la);
                    }
                }
            }
            conn.Close();
        }
    }
    catch (SQLiteException e)
    {
        ...
    }
    return langs;
}*/
	public: System::Void CreateIsoFoldersNFiles()
		{
			 String^ TopLevelDirectory = "TopLevelDirectory";						 String^ SecondLevel = TopLevelDirectory + "/SecondLevel";				String^ InsideDirectory = "AnotherTopLevelDirectory/InsideDirectory";
			 if(!isoStore->DirectoryExists(TopLevelDirectory))			{			 isoStore->CreateDirectory(TopLevelDirectory);		}
			 if(!isoStore->DirectoryExists(SecondLevel))				{			 isoStore->CreateDirectory(SecondLevel);			}
			 if(!isoStore->DirectoryExists(InsideDirectory))			{			 isoStore->CreateDirectory(InsideDirectory);		}					lblMessage->Text += "\rCreated directories.";
			 String^ InTheRootFN = "InTheRoot.txt";									 String^ HereIAmFN = InsideDirectory + "/HereIAm.txt";
			 if(!isoStore->FileExists(InTheRootFN))
				{gcnew IsolatedStorageFileStream(InTheRootFN, FileMode::Create, isoStore);				 lblMessage->Text += "Created a new file in the root.";}
	         if(!isoStore->FileExists(HereIAmFN))
				{gcnew IsolatedStorageFileStream(HereIAmFN,FileMode::Create, isoStore);					 lblMessage->Text += "Created a new file in the InsideDirectory.\r";			}	         // End of setup.							        //Console::WriteLine('\r');
		}

	public:  System::Void WriteToIsoFile()
		 {
			 try
				 {
					 String^ isoFileName = "TestStore.txt";
					 if (isoStore->FileExists(isoFileName))
						{
							lblMessage->Text += "The file already exists!";			
							IsolatedStorageFileStream^ isoStream = gcnew IsolatedStorageFileStream(isoFileName, FileMode::Open, isoStore);
							StreamReader^ reader = gcnew StreamReader(isoStream);
							lblMessage->Text += "Reading contents:";
							lblMessage->Text += reader->ReadToEnd();
						}
		            else
						{			 /* try	{  int* myarray= new int[1000];	} catch (exception& e)	  {    cout << "Standard exception: " << e.what() << endl;  }  return 0;} */	
							IsolatedStorageFileStream^ isoStream = gcnew IsolatedStorageFileStream(isoFileName, FileMode::CreateNew, isoStore);
							StreamWriter^ writer = gcnew StreamWriter(isoStream);
		                    writer->WriteLine("Hello Isolated Storage");
		                    lblMessage->Text += "You have written to the file.";
		                }
				  }
			 catch (Exception ^e)
				  {
						MessageBox::Show("Error Executing ISOFileWrite: " + e->ToString(), "\n Exception While ISOFileWrite ...");
				  }

			 //catch(System::Exception^* e) 
		//				{lblMessage->Text += "EXCEPTION!" + (*e)->ToString();}
				// int byteCount = uniEncoding->GetByteCount( recordNumber.ToString() );					//String^ tempString;				//
				//FileStream^ fileStream = gcnew FileStream( "Test#@@#.dat",FileMode::OpenOrCreate,FileAccess::ReadWrite,FileShare::ReadWrite ); */
				//System::IO::FileStream^ fsProduce("Test.txt",System::IO::FileMode::Append); fsProduce.Write( );
		 } 

	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 txtFirstName->Text = ""; txtLastName->Text = ""; txtItem->Text = ""; txtPrice->Text = ""; txtQuantity->Text = ""; txtSubTotal->Text =""; txtTax->Text = ""; txtTotal->Text = "";
			 lbProduce->SelectedIndex = -1;
		 }

	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Close();
		 }

	private: System::Void lbProduce_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbProduce->SelectedIndex != -1)
			 {
				 //lbProduce_Leave(sender, e);
				 txtItem->Text = lbProduce->SelectedItem->ToString()->Substring(0,20)->Trim();
				 txtProductID->Text = lbProduce->SelectedItem->ToString()->Substring(20,10)->Trim();
				 itemPrice = Convert::ToDouble(lbProduce->SelectedItem->ToString()->Substring(30,10)->Trim());
				 String^ strImage = lbProduce->SelectedItem->ToString()->Substring(40)->Trim();
				 picProduce->Load(strImage);
				 CalculateSubTotals();
				 lblMessage->BackColor = defaultLblBackColor;    
				 lbProduce->BackColor = defaultTxtBackColor;
				 errorProvider1->SetError( this->lbProduce, String::Empty);
				 lblMessage->Text = "";

			 }
		 }

	private: System::Void txtFirstName_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Separate the Sting testign from the isdirty UI logic
			 if(StringIsDirty(txtFirstName->Text))
				{
					lblMessage->BackColor = errBackColor;    
					txtFirstName->BackColor = errBackColor;
					//txtFirstName->
					txtFirstName->Focus();
					errorProvider1->SetError( this->txtFirstName, lblMessage->Text);

					//txtFirstName->
				} 
			 else
				 {
					lblMessage->BackColor = defaultLblBackColor;    
					txtFirstName->BackColor = defaultTxtBackColor;
					errorProvider1->SetError( this->txtFirstName, String::Empty);
					lblMessage->Text = "";
				 }
		 }

	private: System::Void txtLastName_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Separate the Sting testign from the isdirty UI logic
			 if(StringIsDirty(txtLastName->Text))
				{
					lblMessage->BackColor = errBackColor;    
					txtLastName->BackColor = errBackColor;											//txtFirstName->
					txtLastName->Focus();
					errorProvider1->SetError( this->txtLastName, lblMessage->Text);					//txtFirstName->
				} 
			 else
				 {
					lblMessage->BackColor = defaultLblBackColor;    
					txtLastName->BackColor = defaultTxtBackColor;
					errorProvider1->SetError( this->txtLastName, String::Empty);
					lblMessage->Text = "";
				 }
		 }

	private: System::Void txtQuantity_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Separate the Sting testign from the isdirty UI logic
			 if(StringIsDirty(txtQuantity->Text))
				{
					lblMessage->BackColor = errBackColor;    
					txtQuantity->BackColor = errBackColor;											//txtQuantity->					
					txtQuantity->Focus();
					errorProvider1->SetError( this->txtQuantity, lblMessage->Text);
				} 
			 else
				 {
					lblMessage->BackColor = defaultLblBackColor;    
					txtQuantity->BackColor = defaultTxtBackColor;
					errorProvider1->SetError( this->txtQuantity, String::Empty);
					lblMessage->Text = "";
				 }
		 }

	private: System::Void lbProduce_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
 			 if(lbProduce->SelectedIndex == -1)
				 {
					 lblMessage->BackColor = errBackColor;    
					 lbProduce->BackColor = errBackColor;											//lbProduce->					
					 lbProduce->Focus();
					 errorProvider1->SetError( this->lbProduce, lblMessage->Text);
				 } 
			 else
				 {
					 lblMessage->BackColor = defaultLblBackColor;    
					 lbProduce->BackColor = defaultTxtBackColor;
					 errorProvider1->SetError( this->lbProduce, String::Empty);
					 lblMessage->Text = "";
				 }

		 }

	public: System::Boolean StringIsDirty(System::String^ str2Test)
		{
			 bool textIsDirty = false;
			 if(str2Test->Trim() == String::Empty)    	   {textIsDirty = true;    lblMessage->Text += "Name Can NOT be empty. ";}
			 if(str2Test->Contains("--") )                 {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain consecutive dashes. ";    }
			 if(str2Test->Contains("=") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an equal sign ('='). ";   }
			 if(str2Test->Contains("!") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an exclamation mark ('!'). ";   }
			 if(str2Test->Contains("@") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an at sign ('@'). ";   }
			 if(str2Test->Contains("#") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a pound sign ('#'). ";   }
			 if(str2Test->Contains("$") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a dollar sign ('$'). ";   }
			 if(str2Test->Contains("%") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a percent sign ('%'). ";   }
			 if(str2Test->Contains("^") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an carat ('^'). ";   }
			 if(str2Test->Contains("&") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an ampersand ('&'). ";   }
			 if(str2Test->Contains("(") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a parethesis ('('). ";   }
			 if(str2Test->Contains(")") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a parethesis (')'). ";   }
			 if(str2Test->Contains("_") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a underscore ('_'). ";   }
			 if(str2Test->Contains("+") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a plus sign ('+'). ";   }
			 if(str2Test->Contains("*") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an asterick ('*'). ";   }
			 if(str2Test->Contains("~") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a tilda ('*'). ";   }
			 if(str2Test->Contains("`") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a back quote ('`'). ";   }
			 if(str2Test->Contains("{") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an angle bracket ('{'). ";   }
			 if(str2Test->Contains("}") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain an angle bracket ('}'). ";   }
			 if(str2Test->Contains("|") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a pipe symbol ('|'). ";   }
			 if(str2Test->Contains("[") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a square bracket ('['). ";   }
			 if(str2Test->Contains("]") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a square bracket (']'). ";   }
			 if(str2Test->Contains("\\") )                 {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a back slash ('\\'). ";   }
			 if(str2Test->Contains(":") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a colon (':'). ";      }
			 if(str2Test->Contains(";") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a semi-colon (';'). ";   }
			 if(str2Test->Contains("\"") )                 {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a double quote ('\"'). ";   }
			 if(str2Test->Contains("\'") )                 {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a single quote ('\''). ";   }
			 if(str2Test->Contains("<") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a less-than ('<'). ";   }
			 if(str2Test->Contains(">") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a greater-than ('>'). ";   }
			 if(str2Test->Contains(",") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a comma (','). ";   }
			 if(str2Test->Contains(".") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a period ('.'). ";   }
			 if(str2Test->Contains("?") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a question mark ('?'). ";   }
			 if(str2Test->Contains("/") )                  {textIsDirty = true;    lblMessage->Text += "Name Can NOT contain a front slash ('/'). ";   }
			 return(textIsDirty);
		}
		
	public: System::Boolean NumberIsDirty(System::String^ str2Test)
		{
			bool textIsDirty = false;					   Int64 intQuantity;
				if(str2Test->Trim() == String::Empty)    	   {textIsDirty = true;    lblMessage->Text += "Quantity Can NOT be empty. ";}
				else
					{
						bool pop = Int64::TryParse(str2Test,intQuantity); if(!pop){textIsDirty = true;    lblMessage->Text += "Quantity Is NOT an Integer. ";}
					}
			 return(textIsDirty);
		}

	    // Method to retrieve all directories, recursively, within a store.
	static List<String^>^ GetAllDirectories(String^ pattern, IsolatedStorageFile^ storeFile)
		{			// Get the root of the search string.
			String^ root = Path::GetDirectoryName(pattern);

			if (root != "")				{						root += "/";				}

			array<String^>^ directories = storeFile->GetDirectoryNames(pattern);			// Retrieve directories.
			
			List<String^>^ directoryList = gcnew List<String^>(directories);

			for (int i = 0, max = directories->Length; i < max; i++)						// Retrieve subdirectories of matches.
			{
				 String^ directory = directoryList[i] + "/";
				List<String^>^ more = GetAllDirectories (root + directory + "*", storeFile);

				for (int j = 0; j < more->Count; j++)										// For each subdirectory found, add in the base path.
				{
					 more[j] = directory + more[j];
				}

				directoryList->InsertRange(i + 1, more);				// Insert the subdirectories into the list and update the counter and upper bound.
				i += more->Count;
				max += more->Count;
			}

			return directoryList;
		}		// End of GetAllDirectories

	static List<String^>^ GetAllFiles(String^ pattern, IsolatedStorageFile^ storeFile)
	    {
	        // Get the root and file portions of the search string.
	        String^ fileString = Path::GetFileName(pattern);
	        array<String^>^ files = storeFile->GetFileNames(pattern);
	
	        List<String^>^ fileList = gcnew List<String^>(files);
	
	        // Loop through the subdirectories, collect matches,
	        // and make separators consistent.
	        for each (String^ directory in GetAllDirectories( "*", storeFile))
	        {
	            for each (String^ file in storeFile->GetFileNames(directory + "/" + fileString))
	            {
	                fileList->Add((directory + "/" + file));
	            }
	        }
	
	        return fileList;
	    } // End of GetFiles.

	private: System::Void txtQuantity_TextChanged(System::Object^  sender, System::EventArgs^  e) {		 }
	private: System::Void txtFirstName_TextChanged(System::Object^  sender, System::EventArgs^  e) {	 }

/*      //---events happen in this order: KeyDown, KeyPress, KeyUp
	private: System::Void txtLast_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
		       if (e->KeyChar ==(Char) Keys::Escape)
                MessageBox::Show("You pressed Escape from the keypress event");
		 }
	private: System::Void txtLast_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
		      if (e->KeyCode == Keys::F10)
                MessageBox::Show("You pressed F10 from the keypress event");
		 }
		 
	private: System::Void txtPrice_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
		      if (e->KeyCode == Keys::Enter)
                SendKeys::Send("{Tab}");
		 }

  */
	private: System::Void txtFirstName_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if ((e->KeyCode >= Keys::A) & (e->KeyCode <= Keys::Z)) 
			 {txtFirstNameIsDirty=false;}
		 }
	private: System::Void txtFirstName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {	   //This of Handled as "Blocked"
					   if(txtFirstNameIsDirty==false)
						  e->Handled = false;      //means the control can process the char (Don't Block)
					   else
						  e->Handled = true;       //stop char from being sent to control (Block it)
								 }
	private: System::Void txtLastName_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)		{
					 //---make this handler to examine which key is pressed. A-Z or space, or backspace
					 if ((e->KeyCode >=Keys::A && e->KeyCode <= Keys::Z) |						 //(e->KeyCode == Keys::Space |
						 (e->KeyCode == Keys::Back))     
							txtLastNameIsDirty=false;
					 else
							txtLastNameIsDirty=true;
}
	private: System::Void txtLastName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)	{	
						if(txtLastNameIsDirty==false)
							  e->Handled = false;      //means the control can process the char (Don't Block)
					    else
							  e->Handled = true;       //stop char from being sent to control (Block it)
						}
	private: System::Void txtQuantity_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)		{
			 //---make this handler to examine which key is pressed. 0-9 or backspace
					 if ((e->KeyCode >=Keys::D0 && e->KeyCode <= Keys::D9) |						 //(e->KeyCode == Keys::Space |
						 (e->KeyCode >=Keys::NumPad0 && e->KeyCode <= Keys::NumPad9) |						 
						 (e->KeyCode == Keys::Back))     
							txtQuantityIsDirty=false;
					 else
							txtQuantityIsDirty=true;}
	private: System::Void txtQuantity_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)	{		  
						if(txtQuantityIsDirty==false)
							  e->Handled = false;      //means the control can process the char (Don't Block)
					    else
							  e->Handled = true;       //stop char from being sent to control (Block it)
					}
	private: System::Void txtPassword_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
						 {	//TODO: need password on database verify exists code somewhere and id/email also	 
			  					 if ((e->KeyCode >=Keys::A && e->KeyCode <= Keys::Z) |						 
									 (e->KeyCode >=Keys::D0 && e->KeyCode <= Keys::D9 && !e->Shift) |				    //  (e->KeyCode == Keys::Space |
									 (e->KeyCode >=Keys::NumPad0 && e->KeyCode <= Keys::NumPad9) |		
									 (e->KeyCode == Keys::D2 && e->Shift) | (e->KeyCode == Keys::D3 && e->Shift) |		//  case '@':		case '#':
									 (e->KeyCode == Keys::D4 && e->Shift) | (e->KeyCode == Keys::D5 && e->Shift) |		//  case '$':		case '%':
									 (e->KeyCode == Keys::D6 && e->Shift) | (e->KeyCode == Keys::Back))					//  case '^':
											txtPasswordIsDirty=false;
								 else
											txtPasswordIsDirty=true;
						 }

	private: System::Void txtPassword_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {		 
			 			if(txtPasswordIsDirty==false)
							  e->Handled = false;      //means the control can process the char (Don't Block)
					    else
							  e->Handled = true;       //stop char from being sent to control (Block it)
					 }
	private: System::Void txtID_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {		 }
	private: System::Void txtID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
						{
			 				//  if(txtIDIsDirty==false)
							//  	  e->Handled = false;      //means the control can process the char (Don't Block)
							//  else
							//  	  e->Handled = true;       //stop char from being sent to control (Block it)
						}															 
	private: System::Void txtID_KeyPressA(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {		 }
	private: System::Void txtID_KeyDownA(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {		 }
					//  2 digits
					//  1 Upper case
					//  1 Lower case
					//  1 Symbol (Only(@#$%^)
	private: System::Void txtPassword_KeyPressA(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {		  
						if(txtPasswordIsDirty==false)
							  e->Handled = false;      //means the control can process the char (Don't Block)
					    else
							  e->Handled = true;       //stop char from being sent to control (Block it)
						}
	private: System::Void txtPassword_KeyDownA(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
			 {	  					 if ((e->KeyCode >=Keys::A && e->KeyCode <= Keys::Z) |						 
						(e->KeyCode >=Keys::D0 && e->KeyCode <= Keys::D9) |						 //(e->KeyCode == Keys::Space |
						 (e->KeyCode >=Keys::NumPad0 && e->KeyCode <= Keys::NumPad9) |		
						 (e->KeyCode == Keys::D2 && e->Shift) | (e->KeyCode == Keys::D3 && e->Shift) |
						 (e->KeyCode == Keys::D4 && e->Shift) | (e->KeyCode == Keys::D5 && e->Shift) |
						 (e->KeyCode == Keys::D6 && e->Shift) |
						 /*
						 case '@':
										           case '#':
										           case '$':
										           case '%':
										           case '^':
						 */
						 (e->KeyCode == Keys::Back))     
							txtPasswordIsDirty=false;
					 else
							txtPasswordIsDirty=true;
					 }

	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (btnLogin->Text == "&Login")
				{
											
					bool PasswordIsValid = true, IDIsValid=true;
					if (IsValidPassword(txtPassword->Text) && IsValidEmail(txtID->Text)) //Validate id and password(if not done)//check id and password If match to db Set Message to Thanks for logging in change btnLogin->Text = "Logoff"; store db::id somewhere
					{
						lblID->Visible = false;
						lblPassword->Visible = false;
						txtID->Visible = false;
						txtPassword->Visible = false;
						btnLogin->Text = "&Logoff";
						lblMessage->Text += " Congratulations, You have successfully Logged In! ";
					}
					else
					{
				 		lblID->Visible=true;
						lblPassword->Visible=true;
						txtID->Visible = true;
						txtPassword->Visible = true;
						btnLogin->Text = "&Login";
						lblMessage->Text += " Invalid UserID/Password! ";
					}
			 }
			 else if (btnLogin->Text == "&Logoff")
				{
					if (MessageBox::Show("Logout?", "Do you really want to Logout?", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK )
						{
							lblID->Visible = true; 
							lblPassword->Visible = true; 
							txtID->Visible = true;			txtID->Text = "";
							txtPassword->Visible = true;	txtPassword->Text = "";
							btnLogin->Text = "&Login";					//TODO: Login code is txtID = dbPassword
						}
				}
				 //else if (btnLogin->Text == "&Logoff")
				 //{
					// //TODO: LOGOUT CODE
				    //	lblID->Visible=true;
					//	lblPassword->Visible=true;
					//	txtID->Visible = true;
					//	txtPassword->Visible = true;
					//	btnLogin->Text = "&Login";
				 //}
		 }
		 public: System::Boolean IsValidPassword(String^ password)
				 {/* Password Requirements :	*/		
						String^ sPassword = password->Trim();
						int space = sPassword->IndexOf(" ");
						if (space != -1)											return false;
						if(sPassword->Length < 8)									return false;
						if (String::IsNullOrEmpty(sPassword))						return false;
						int iDigits = 0;												//  2 digits
						int iUppers = 0;												//  1 Upper case
						int iLowers = 0;												//  1 Lower case
						int iSymbols = 0;												//  1 Symbol (Only(@#$%^)::No ()~`-_=+/*&?><., 
						/*  for each (char c in sLabel->ToCharArray())
								{		  if (!Char::IsLetterOrDigit(c))										return false;}		
					    */
						for each (char c in sPassword->ToCharArray())
								{
									if (Char::IsUpper(c)) iUppers++;
									if (Char::IsLower(c)) iLowers++;
									if (Char::IsDigit(c)) iDigits++;
									if (!Char::IsLetterOrDigit(c))
									      {
											  switch (c)
											  {    case '@':
										           case '#':
										           case '$':
										           case '%':
										           case '^':
									  		           iSymbols++; break;
											       default:
											           return false;
											   }
									       }
								}
								if(iUppers < 1) return false;
								if(iLowers < 1) return false;
								if(iDigits < 2) return false;
								if(iSymbols < 1) return false;
						 return true;
}
		 public: System::Boolean IsValidEmail(String^ sEmail)
				 {      // No spaces allowed
						String^ email = sEmail->Trim();
						int space = email->IndexOf(" ");
						if (space != -1)
							 return false;
						
						// -------------------------
						// EMAIL MUST BE IN FORMAT:  LOCAL @ DOMAIN
						// -------------------------
						// There must be exactly one @
						int firstAtSign = email->IndexOf("@");
						if (firstAtSign == -1)
							 return false;
						int lastAtSign = email->LastIndexOf("@");
						if (lastAtSign != firstAtSign)
							return false;

						// There must be a LOCAL and a DOMAIN
						String^ local = email->Substring(0, firstAtSign);
						String^ domain = email->Substring(firstAtSign + 1);

						if ((local->Length < 1) || (local->Length > 64))  // max length of 64.
							return false;

						if ((domain->Length < 1) || (domain->Length > 63))  // max length of 63.
							return false;
						
						// -------------------------
						// TEST LOCAL PIECE
						// -------------------------
						// Can't begin or end with . or have two .. in a row.
						if (ValidatePeriods(local) == false)
							return false;

						// All characters must be a letter, number or allowed special character.
						if (ValidateCharacters(local) == false)
							return false;
						
						// -------------------------
						// TEST DOMAIN PIECE  
						// -------------------------
						// Can't begin or end with . or have two .. in a row.
						if (ValidatePeriods(domain) == false)
							return false;
						
						/* Domain is in format label.label.label
							  String^ delimStr = " ,.:\t";					Console::WriteLine( "delimiter : '{0}'", delimStr );				  array<Char>^ delimiter = delimStr->ToCharArray( );
							  array<String^>^ words;						String^ line = "one\ttwo three:four,five six seven";				  Console::WriteLine( "text : '{0}'", line );
							  words = line->Split( delimiter );				Console::WriteLine( "Number of Words : {0}", words->Length );		  
							  for (int word=0; word<words->Length; word++)	Console::WriteLine( "{0}", words[word] );					  */

						array<String^>^ labels;
						labels = domain->Split('.');
						for each (String^ sLabel in labels)							// Test each label
							{
								if (sLabel->Length < 1 || sLabel->Length > 62)									return false;
								if (sLabel[0] == '-' || sLabel[sLabel->Length - 1] == '-')						return false;
								if (sLabel->Contains("--"))														return false;
								if (String::IsNullOrEmpty(sLabel))												return false;
								for each (char c in sLabel->ToCharArray())
								{		  if (!Char::IsLetterOrDigit(c))										return false;}		//  if (ValidateCharacters(label) == false)		return false;
							}

						// Last label must be all alphabetic
						String^ lastLabel = labels[labels->Length - 1];
						for each (char c in lastLabel->ToCharArray())
						{				  if (Char::IsLetter(c) == false)										return false;}

						return true;
    }

	private: Boolean ValidatePeriods(String^ label)
				 {
					 if (String::IsNullOrEmpty(label))															 return false;
					 if (label->Contains(".."))						/* Can't have two periods in a row. */		 return false;
					 if (label[0] == '.' || label[label->Length - 1] == '.')  /* Can't begin or end w/ a '.' */	 return false;
					 
					 return true;
				}

	private: Boolean ValidateCharacters(String^ sLabel)
				 {
					 if (String::IsNullOrEmpty(sLabel))
						 return false;
					 //array<Char>^ delimiter = delimStr->ToCharArray( );
					 array<Char>^ allowed = { '!', '$', '%', '&', '*', '-', '=', '?', '^', '_', '{', '}', '~', '\'', '.' };
					 if (sLabel->IndexOfAny(allowed) == -1)
						 return false;
						 // if ( e->Label->IndexOfAny( temp0 ) == -1 )
						 //for each (Char c in sLabel->ToCharArray())
							// {
							//	 if (Char::IsLetterOrDigit(c))
							//		 continue;
							//	 String^ bobsUrUncle = c->ToString();
							//	 int x = c->ToString()->IndexOfAny(allowed);
							//	 if (x == -1)
							//		 return false;
							// }
					 
					 return true;
			     }
};
}

