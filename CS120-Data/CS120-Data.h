#pragma once

// CS120-Data.h

namespace CS120Data {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
//	using namespace System::Windows::Forms;
	using namespace System::Data;
//	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::IO::IsolatedStorage;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Data::SQLite;
	using namespace System::Data::SQLite::Linq;
	using namespace System::Data::SQLite::Generic;


		
		// TODO: Add your methods for this class here.
	public ref class Class1    {
			public:
		Class1(void)
		{
			//InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Class1()
		{
			//if (components)			{				delete components;			}
		}

	    static String^ lblMessageText ;static SQLiteConnection^ db = gcnew SQLiteConnection();
		static String^ diskFile = "ProduceListBoxA.txt";static String^ uncleBobFN = "WriteTest.txt";
		static bool ConnectionNotOpened = false; static String^ txtProductIDText ="";static StringBuilder ^sb;

	public: System::Void ReadListBoxFromDB()
			{
				OpenDBConnection(); ReadTable("Products");
			}

	public: System::Void OpenDBConnection()
			{
				try
					{
						lblMessageText += "Opening Database Connection To MyDb.db ...";	ConnectionNotOpened = false;
						db->ConnectionString = "Data Source=MyDb.db";
						db->Open();					   // Open Database Connection
						lblMessageText += "Database Connection To MyDb.db Opened.\n";
					}
				catch (Exception ^e)
					{
						lblMessageText += "Exception While Opening Sqlite3 Connnection ..." + e->ToString();
					}
 			}

	public: System::Void ReadTable(String^ TableName)		   
			{
				String ^strField, ^strLine;sb = gcnew StringBuilder();
				// Display Table
				 try
				 {
				    lblMessageText += "Displaying Table " + TableName;
				    SQLiteCommand ^cmdSelect = db->CreateCommand();
				    cmdSelect->CommandText = "SELECT * FROM " + TableName + ";";
				    SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				    
					sb->Capacity=6666;
				    for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				    {

				       if (colCtr > 0) sb->Append("|");							// Add Seperator (If After First Column)

				       sb->Append(reader->GetName(colCtr));						// Add Column Name
				    }
				    sb->AppendLine();
				    sb->Append("~~~~~~~~~~~~");
				    sb->AppendLine();
					lblMessageText += sb->ToString();
					sb = gcnew StringBuilder();									 
					String^ ppppp = "";
				    while (reader->Read())
				    {
				       for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				       {
				          //if (colCtr > 0) sb->Append("|");						// Add Seperator (If After First Column)
						  switch (colCtr)
						  {
								case 0:
									txtProductIDText = reader->GetValue(colCtr)->ToString();		// Add Column Text
						            break;
								case 1:
									strField = reader->GetValue(colCtr)->ToString();		// Add Column Text
									strLine=strField;						  
						            break;
								case 5:
									strField = reader->GetValue(colCtr)->ToString();		// Add Column Text									//int sizeofstrline = strLine->Length;
									for (int i = strLine->Length; i < 20; i++)				{						ppppp += " ";				}
									strLine += ppppp + txtProductIDText;	ppppp="";	//i=0;				  
									for (int j = strLine->Length; j < 30; j++)				{						ppppp += " ";				}
									strLine += ppppp + strField;	ppppp="";	//i=0;				  
						            break;
								case 10:
									strField = reader->GetValue(colCtr)->ToString();		// Add Column Text									//sb->Insert(30,strField);						  
									for (int k = strLine->Length; k < 40; k++)				{						ppppp += " ";				}
									strLine += ppppp + strField;	ppppp="";	//j=0;				  
						            break;
						  }
				       }
					   //lbProduce->Items->Add(strLine);
					   sb->AppendLine(strLine);			strLine="";
				    }
				    lblMessageText += sb->ToString() + "///SQLite " + TableName;
				 }
				 catch (Exception ^e)
				 {                          
				    lblMessageText += "Exception While Displaying " + TableName + " ..." + e->ToString() ;
				 }

			}


	};
}
