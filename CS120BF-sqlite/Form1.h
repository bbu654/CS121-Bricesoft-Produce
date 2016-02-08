#pragma once

namespace WindowsFormsApplication2012 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;	
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Label^  lblMessage;
	protected: 

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
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(674, 12);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"&OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &Form1::btnOK_Click);
			// 
			// lblMessage
			// 
			this->lblMessage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblMessage->CausesValidation = false;
			this->lblMessage->Location = System::Drawing::Point(13, 53);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(736, 817);
			this->lblMessage->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 543);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->btnOK);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
		// Create The Connection Object
		static SQLiteConnection ^db = gcnew SQLiteConnection(); 
		static bool ConnectionNotOpened = true; 
		static String ^TableCreated = " Table Created.\n";
		static String ^CreatingTable = "Creating Table ..." ; 
		static String ^CREATETABLE = "CREATE TABLE IF NOT EXISTS ";
		static String ^ExceptionCreatingTable = "EXCEPTION!: Creating Table: ";

	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //SQLite3 Pop it now
				   if(ConnectionNotOpened)				//	
				    {
						OpenDBConnection();
						CreateCustomersTable();			
						CreateSuppliersTable();
						CreateRegionTable();
						CreateTerritoriesTable();		
						CreateCategoriesTable();
						CreateEmployeesTable();
						CreateShippersTable();
						CreateCustomerDemographicsTable();
						CreateOrdersTable();
						CreateProductsTable();
						CreateOrderDetailsTable();		   
						CreateEmployeeTerritoriesTable();
						CreateCustomerCustomerDemoTable();
						InsertIntoCustomer();
						InsertIntoProducts();
						ReadTable("Customers");						ReadTable("Products");
					}
				   else
				    {
						//
				    }
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

						 // DEP: NONE
	public: System::Void CreateCustomersTable()		   
			{
				 String ^TableName = "Customers";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (customerId INTEGER PRIMARY KEY ASC, "
																				 +	  "companyName TEXT, "				//40
																				 +	  "contactName TEXT, "				//30
																				 +	  "contactTitle TEXT, "				//30
																				 +	  "customerAddress TEXT, "			//30
																				 +	  "customerAddress2 TEXT, "			//30
																				 +	  "customercity TEXT, "				//15
 																				 +	  "customerRegion TEXT, "			//15
 																				 +	  "customerPostalCode TEXT, "		//10
 																				 +	  "customerCountry TEXT, "			//15
 																				 +	  "customerPhone TEXT, "			//24
 																				 +	  "customerFax TEXT, "  			//24
 																				 +	  "customerEmail TEXT, "			//nvarchar(255)		
 																				 +	  "customerPassword TEXT, "			//nvarchar(255)		
 																				 +	  "customerEOR TEXT );";			//nvarchar(255)		

				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}
	 	public: System::Void InsertIntoCustomer()
						{
						       String ^TableName = "Customers";
				    								
				    		   // Insert A Value
				    		   try
				    		   {
				    				//	  lblMessage->Text += "Inserting Values into " + TableName ;
						    		//	  SQLiteCommand ^cmdInsertValue = db->CreateCommand();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(101, 'BriceSoft.net', 'Brice Ulwelling',  'CEO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
						    		//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(102, 'BriceSoft.net', 'Eileen Ulwelling', 'CFO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(103, 'BriceSoft.net', 'Amy Ulwelling',    'CMO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(104, 'BriceSoft.net', 'Gary Ulwelling',   'CIO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(105, 'BriceSoft.net', 'Cary Ulwelling',   'COO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
				    				//	  lblMessage->Text += "Value Inserted.";  
								  lblMessage->Text += "Inserting Values into " + TableName ;
				    			  SQLiteCommand ^cmdInsertValue = db->CreateCommand();
								  cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(101, 'BriceSoft.net', 'Brice Ulwelling',  'CEO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '', 'b@b.com', 'b', ''),(102, 'BriceSoft.net', 'Eileen Ulwelling', 'CFO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '', 'eileen@hotmail.com', 'b', ''),(103, 'BriceSoft.net', 'Amy Ulwelling',    'CMO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '', 'amy@hotmail.com', 'b', ''),(104, 'BriceSoft.net', 'Gary Ulwelling',   'CIO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '', 'gary@hotmail.com', 'b', ''),(105, 'BriceSoft.net', 'Cary Ulwelling',   'COO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '', 'cary@hotmail.com', 'b', ''),(106, 'Blue Bloods', 'Frank Reagan', 'Commissioner ', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '', 'frank@hotmail.com', 'b', ''),(107, 'Blue Bloods', 'Danny Reagan', 'Sr. Detective', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '', 'danny@hotmail.com', 'b', ''),(108, 'Blue Bloods', 'Erin  Reagan', 'A District A ', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '', 'erin@hotmail.com', 'b', ''),(109, 'Blue Bloods', 'Jaime Reagan', 'Officer      ', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '', 'jaime@hotmail.com', 'b', ''),(110, 'Blue Bloods', 'Linda Reagan', 'Nurse', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/812-4327', '', 'linda@hotmail.com', 'b', '');";
				    			  cmdInsertValue->ExecuteNonQuery();
				    			  lblMessage->Text += "Value Inserted.";
				    		   }
				    		   catch (Exception ^e)
				    		   {
				    			  lblMessage->Text += "Exception While Inserting Value Into " + TableName + ": ..." + e->ToString() ;
				    		   }

						}

	public: System::Void ReadTable(String^ TableName)		   
			{
				// Display Table
				 try
				 {
				    lblMessage->Text += "Displaying Table " + TableName;
				    SQLiteCommand ^cmdSelect = db->CreateCommand();
				    cmdSelect->CommandText = "SELECT * FROM " + TableName + ";";
				    SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				    StringBuilder ^sb = gcnew StringBuilder();
				    for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				    {

				       if (colCtr > 0) sb->Append("|");							// Add Seperator (If After First Column)

				       sb->Append(reader->GetName(colCtr));						// Add Column Name
				    }
				    sb->AppendLine();
				    sb->Append("~~~~~~~~~~~~");
				    sb->AppendLine();
				    while (reader->Read())
				    {
				       for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				       {
				          if (colCtr > 0) sb->Append("|");						// Add Seperator (If After First Column)
 
				          sb->Append(reader->GetValue(colCtr)->ToString());		// Add Column Text
				       }
				       sb->AppendLine();
				    }
				    lblMessage->Text += sb->ToString() + "///SQLite " + TableName;
				 }
				 catch (Exception ^e)
				 {                          
				    lblMessage->Text += "Exception While Displaying " + TableName + " ..." + e->ToString() ;
				 }

			}
						 // DEP: NONE
	public: System::Void CreateSuppliersTable()		   
			{
				 String ^TableName = "Suppliers";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (supplierId INTEGER PRIMARY KEY ASC, "
																				 +	  "supplierCompanyName TEXT, "		//40
																				 +	  "supplierContactName TEXT, "		//30
																				 +	  "supplierContactTitle TEXT, "		//30
																				 +	  "supplierAddress TEXT, "			//30
																				 +	  "supplierAddress2 TEXT, "			//30
																				 +	  "suppliercity TEXT, "				//15
 																				 +	  "supplierRegion TEXT, "			//15
 																				 +	  "supplierPostalCode TEXT, "		//10
 																				 +	  "supplierCountry TEXT, "			//15
 																				 +	  "supplierPhone TEXT, "			//24
 																				 +	  "supplierFax TEXT, "				//24
 																				 +	  "supplierhomePage TEXT );";		//400
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: NONE
	public: System::Void CreateRegionTable()		   
			{
				 String^ TableName = "Region";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (regionId INTEGER PRIMARY KEY ASC, "
 																				 +	  "regionDescription TEXT );";			//50
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

					     // DEP: Region
	public: System::Void CreateTerritoriesTable()		   
			{
				 String^ TableName = "Territories";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (territoryId INTEGER PRIMARY KEY ASC, "
																				 +	  "territoryDescription TEXT, "	//nchar(50)
 																				 +	  "regionId INTEGER );";		//15
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: NONE
	public: System::Void CreateCategoriesTable()		   
			{
				 String^ TableName = "Categories";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (categoryId INTEGER PRIMARY KEY ASC, "
																				 +	  "categoryName TEXT, "			//nvarchar(15)
																				 +	  "categoryDescription TEXT, "	//nvarchar(400)
																				 +	  "categorypicture BLOG );";			
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text +=ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: NONE
	public: System::Void CreateEmployeesTable()		   
			{
				 String^ TableName = "Employees";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (employeeId INTEGER PRIMARY KEY ASC, "
																				 +	  "employeeLastName TEXT, "				//nvarchar(20)
																				 +	  "employeeFirstName TEXT, "			//nvarchar(10)
																				 +	  "employeeTitle TEXT, "				//nvarchar(30)
																				 +	  "employeeTitleOfCourtesy TEXT, "		//nvarchar(25)
																				 +	  "employeeBirthDate TEXT, "			//datetime
																				 +	  "employeeHireDate TEXT, "				//datetime
																				 +	  "employeeAddress TEXT, "				//nvarchar30)
																				 +	  "employeeAddress2 TEXT, "				//nvarchar30)
																				 +	  "employeeCity TEXT, "					//nvarchar(15)
 																				 +	  "employeeRegion TEXT, "				//nvarchar(15)
 																				 +	  "employeePostalCode TEXT, "			//nvarchar(10)
 																				 +	  "employeeCountry TEXT, "				//nvarchar(15)
 																				 +	  "employeeHomePhone TEXT, "			//nvarchar(24)
 																				 +	  "employeeExtension TEXT, "			//nvarchar(4)
																				 +	  "employeePhoto BLOG, "				//??
																				 +	  "employeeNotes TEXT, "				//nvarchar(24)
																				 +	  "employeeReportsTo INTEGER, "			
																				 +	  "employeePhotoPath TEXT, "			//nvarchar(255)		
 																				 +	  "employeeEmail TEXT, "				//nvarchar(255)		
 																				 +	  "employeePassword TEXT, "				//nvarchar(255)		
 																				 +	  "employeeEOR TEXT );";				//nvarchar(255)		
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}
 	public: System::Void InsertIntoEmployees()
						{
						       String ^TableName = "Employees";
				    								
				    		   // Insert A Value
				    		   try
				    		   {
				    				//	  lblMessage->Text += "Inserting Values into " + TableName ;
						    		//	  SQLiteCommand ^cmdInsertValue = db->CreateCommand();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(101, 'BriceSoft.net', 'Brice Ulwelling',  'CEO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
						    		//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(102, 'BriceSoft.net', 'Eileen Ulwelling', 'CFO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(103, 'BriceSoft.net', 'Amy Ulwelling',    'CMO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(104, 'BriceSoft.net', 'Gary Ulwelling',   'CIO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(105, 'BriceSoft.net', 'Cary Ulwelling',   'COO', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
				    				//	  lblMessage->Text += "Value Inserted.";  
								  lblMessage->Text += "Inserting Values into " + TableName ;			//23			YYYY-MM-DD HH:MM:SS.SSS				'BriceSoft.net',			
				    			  SQLiteCommand ^cmdInsertValue = db->CreateCommand();
								  cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(101, 'Ulwelling', 'Brice', 'CEO', '', '1955-09-29 00:01:01.001', '2010-10-25 00:01:01.001', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '',,'Note',213, '', 'bbu654@hotmail.com', 'b', ''),(102, 'Ulwelling', 'Eileen', 'CFO', '', '1957-05-18 00:01:01.001', '2006-04-13 00:01:01.001', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '',,'Note',213, '', 'Eileen@hotmail.com', 'b', ''),(103, 'Ulwelling', 'Amy',    'CMO', '', '1989-08-07 00:01:01.001', '2006-04-13 00:01:01.001', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '',,'Note',213, '', 'Amy@hotmail.com', 'b', ''),(104, 'Ulwelling', 'Gary',   'CIO', '', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '',,'Note',213, '', 'Gary@hotmail.com', 'b', ''),(105, 'Ulwelling', 'Cary',   'COO', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/532-5720', '',,'Note',213, '', 'Cary@hotmail.com', 'b', ''),(106, 'Reagan', 'Frank', 'Commissioner ', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', '172 North Deerwood Street', '', 'New York', 'New York', '92869', 'USA', '714/812-4327', '',,'Note',213, '', 'Frank@hotmail.com', 'b', ''),(107, 'Reagan', 'Danny', 'Sr. Detective', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', '172 North Deerwood Street', '', 'New York', 'New York', '92869', 'USA', '714/812-4327', '',,'Note',213, '', 'Danny@hotmail.com', 'b', ''),(108, 'Reagan', 'Erin', 'A District A ', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', '172 North Deerwood Street', '', 'New York', 'New York', '92869', 'USA', '714/812-4327', '',,'Note',213, '', 'Erin@hotmail.com', 'b', ''),(109, 'Reagan', 'Jaime', 'Officer      ', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', '172 North Deerwood Street', '', 'Villa Park', 'California', '92869', 'USA', '714/696-6969', '',,'Note',213, '', 'Jaime@hotmail.com', 'b', ''),(110, 'Reagan', 'Linda', 'Nurse', '1993-11-26 00:01:01.001', '2007-09-02 00:01:01.001', 'P.O. Box 12332', '', 'New York', 'New York', '92859', 'USA', '714/812-4327', '',,'Note',213, '', 'Linda@hotmail.com', 'b', '');";
				    			  cmdInsertValue->ExecuteNonQuery();
				    			  lblMessage->Text += "Value Inserted.";
				    		   }
				    		   catch (Exception ^e)
				    		   {
				    			  lblMessage->Text += "Exception While Inserting Value Into " + TableName + ": ..." + e->ToString() ;
				    		   }

						}

						 // DEP: None
	public: System::Void CreateShippersTable()		   
			{
				 String^ TableName = "Shippers";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (shipperId INTEGER PRIMARY KEY ASC, "
																				 +	  "companyName TEXT, "			//nvarchar(40)
 																				 +	  "shipperPhone TEXT );";		//nvarchar(24)
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: None
	public: System::Void CreateCustomerDemographicsTable()		   
			{
				 String^ TableName = "CustomerDemographics";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (customerTypeId INTEGER PRIMARY KEY ASC, "			//nchar(10)
 																				 +	  "customerDesc TEXT );";		//ntext
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: Customers, Employees
	public: System::Void CreateOrdersTable()		   
			{
				 String^ TableName = "Orders";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (orderId INTEGER PRIMARY KEY ASC, "
 																				 +	  "customerId INTEGER, "
																				 +	  "employeeId INTEGER, "
																				 +	  "orderDate TEXT, "			//23			YYYY-MM-DD HH:MM:SS.SSS
																				 +	  "requiredDate TEXT, "			//23			12345678901234567890123
																				 +	  "shippedDate TEXT, "			//23
																				 +	  "shipVia INTEGER, "
																				 +	  "freight REAL, "
																				 +	  "shipName TEXT, "				//40
																				 +	  "shipAddress TEXT, "			//30
																				 +	  "shipAddress2 TEXT, "			//30
																				 +	  "shipcity TEXT, "				//15
 																				 +	  "shipRegion TEXT, "			//15
 																				 +	  "shipPostalCode TEXT, "		//10
 																				 +	  "shipCountry TEXT );";		//15
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}


 	public: System::Void InsertIntoProducts()
			{
			       String ^TableName = "Products";
	    		   try
		    		   {
						    lblMessage->Text += "Inserting Values into " + TableName ;
		    			    SQLiteCommand ^cmdInsertValue = db->CreateCommand();							//White Grape         1.88      whitegrape.jpg
						    cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(101, 'Apple               ', 101, 101, 1, 1.34, 66, 1, 66, 0, '      apple.jpg' ),(102, 'Lettuce             ', 101, 101, 1, 1.61, 66, 1, 66, 0, '      romainelettuce.jpg'),(103, 'Strawberry          ', 101, 101, 1, 2.49, 55, 1, 55, 0, '      strawberry.jpg'),(104, 'Pomegranate         ', 101, 101, 1, 2.34, 55, 1, 55, 0, '      pomegranate.jpg'),(105, 'Tomato              ', 101, 101, 1, 2.89, 55, 1, 55, 0, '      cherrytomato.jpg'),(106, 'Cherry              ', 101, 101, 1, 1.89, 55, 1, 55, 0, '      cherry.jpg'),(107, 'Orange              ', 101, 101, 1, 1.25, 55, 1, 55, 0, '      orange.jpg'),(108, 'White Grape         ', 101, 101, 1, 1.88, 55, 1, 55, 0, '      whitegrape.jpg');";
							cmdInsertValue->ExecuteNonQuery();				// Insert A Value
		    			    lblMessage->Text += "Values Inserted into " + TableName;
		    		   }
	    		   catch (Exception ^e)
		    		   {
		    			   lblMessage->Text += "Exception While Inserting Value Into " + TableName + ": ..." + e->ToString() ;
		    		   }
									/*  
									Strawberry          0.99      strawberry.jpg
									Lettuce             1.61      romainelettuce.jpg
									Pomegranate         2.34      pomegranate.jpg
									Orange              1.25      orange.jpg
									Apple               1.16      apple.jpg
									White Grape         1.88      whitegrape.jpg
									Cherry              1.89      cherry.jpg
									Tomato              3.25      cherrytomato.jpg
									*/
				    				//	  lblMessage->Text += "Inserting Values into " + TableName ;
						    		//	  SQLiteCommand ^cmdInsertValue = db->CreateCommand();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(106, 'Blue Bloods', 'Frank Reagan', 'Commissioner', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '');";
						    		//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(107, 'Blue Bloods', 'Danny Reagan', 'Sr. Detective', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(108, 'Blue Bloods', 'Erin Reagan', 'ADA', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(109, 'Blue Bloods', 'Jaime Reagan', 'Officer', '172 North Deerwood Street', '', 'Orange', 'California', '92869', 'USA', '714/812-4327', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
									  //cmdInsertValue->CommandText = "INSERT INTO " + TableName + " VALUES(110, 'Blue Bloods', 'Linda Reagan', 'Nurse', 'P.O. Box 12332', '', 'Orange', 'California', '92859', 'USA', '714/812-4327', '');";
				    				//	  cmdInsertValue->ExecuteNonQuery();
				    				//	  lblMessage->Text += "Value Inserted.";  
	//public: system::void SelectAllTables()
	//		{
									//			PRAGMA table_info( 	 Customers			);
									//			PRAGMA table_info( 	 Suppliers			);
									//			PRAGMA table_info( 	 Region			);
									//			PRAGMA table_info( 	 Territories		);
									//			PRAGMA table_info( 	 Categories			);
									//			PRAGMA table_info( 	 Employees			);
									//			PRAGMA table_info( 	 Shippers			);
									//			PRAGMA table_info( CustomerDemographics );
									//			PRAGMA table_info( 	 Orders			);
									//			PRAGMA table_info( 	 Products			);
									//			PRAGMA table_info( 	 OrderDetails			);
									//			PRAGMA table_info(  EmployeeTerritories );
									//			PRAGMA table_info( 	CustomerCustomerDemo);
	//		}
			}
						 // DEP: Suppliers, Categories
	public: System::Void CreateProductsTable()		   
			{
				 String^ TableName = "Products";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (productId INTEGER PRIMARY KEY ASC, "
																				 +	  "productName TEXT, "			//nvarchar(40		2
 																				 +	  "supplierId INTEGER, "		//int				3
																				 +	  "categoryId INTEGER, "		//int				4
																				 +	  "quantityPerUnit INTEGER, "	//nvarchar(20)		5
																				 +	  "unitPrice REAL, "			//money				6
																				 +	  "unitsInStock INTEGER, "		//smallint			7
																				 +	  "unitsOnOrder INTEGER, "		//smallint			8
																				 +	  "reOrderLevel INTEGER, "		//smallint			9
																				 +	  "discontinued INTEGER, "		//BOOL				10
																				 +	  "productImage TEXT );";		//nvarchar(40)		11
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

					     // DEP: Orders, Products
	public: System::Void CreateOrderDetailsTable()		   
			{
				 String^ TableName = "OrderDetails";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (orderId INTEGER PRIMARY KEY ASC, "
 																				 +	  "productId INTEGER, "
																				 +	  "unitPrice REAL, "
																				 +	  "quantity INTEGER, "
 																				 +	  "discount REAL );";		//15
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: Employees, Territories
	public: System::Void CreateEmployeeTerritoriesTable()		   
			{
				 String^ TableName = "EmployeeTerritories";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (employeeId INTEGER PRIMARY KEY ASC, "
 																				 +	  "territoryId INTEGER );";		//15
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

						 // DEP: Customers
	public: System::Void CreateCustomerCustomerDemoTable()		   
			{
				 String^ TableName = "CustomerCustomerDemo";
				 try
				 {
					lblMessage->Text += CreatingTable + TableName;
				    SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				    cmdCreateTable->CommandText = CREATETABLE + TableName 
																				 +  " (customerId INTEGER PRIMARY KEY ASC, "			//nchar(10)
 																				 +	  "customerType TEXT );";		//ntext
				    cmdCreateTable->ExecuteNonQuery();
				    lblMessage->Text += TableName + TableCreated;
				 }
				 catch (Exception ^e)
				 {
					 lblMessage->Text += ExceptionCreatingTable + TableName + e->ToString() ;
				 }
			}

	};

}

