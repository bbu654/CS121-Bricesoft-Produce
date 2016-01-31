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
	using namespace System::Collections::Specialized;
	using namespace System::Text;
	using namespace System::Data::SQLite;
	using namespace System::Data::SQLite::Linq;
	using namespace System::Data::SQLite::Generic;
	
	/// <summary>
	/// Summary for MyData
	///     this is the Data Layer(Tier)!
	/// </summary>

ref class MyData
{
public:

	MyData(void)
	{}
			static 	StringCollection^ lblMessageText = gcnew StringCollection();	static bool ConnectionNotOpened = true;  
			static SQLiteConnection^ db = gcnew SQLiteConnection();         static StringCollection^ sc = gcnew StringCollection();  
public: System::Collections::Specialized::StringCollection^ ReadListBoxFromDB()
			{
				lblMessageText->Add("Entering Class MyData!");    //myCol->Add( "* white" );
				OpenDBConnection(); ReadTableProduct("Products", "productName, productId, unitPrice ,productImage");		
				// Uses the enumerator. 				//void PrintValues2( StringCollection^ myCol ){
				sc->Add("****End of Products!****");    
				StringEnumerator^ myEnumerator = lblMessageText->GetEnumerator();
				while ( myEnumerator->MoveNext() )
					sc->Add(myEnumerator->Current );
				return sc;
			}

	public: System::Void OpenDBConnection()
			{
				try
					{
						lblMessageText->Add("Opening Database Connection To MyDb.db ...");	ConnectionNotOpened = false;
						db->ConnectionString = "Data Source=MyDb.db";
						db->Open();					   // Open Database Connection
						lblMessageText->Add("Database Connection To MyDb.db Opened.");
					}
				catch (Exception ^e)
					{
						lblMessageText->Add("Exception While Opening Sqlite3 Connnection ..." + e->ToString());
					}
 			}

	public: System::Void ReadTableProduct(String^ TableName, String^ FieldNames)		   
			{
				String ^strField, ^strField0, ^strField1, ^strField2, ^strField3, ^strLine;
				// Display Table
				 try
				 {
					 lblMessageText->Add("Displaying Table " + TableName);
					 SQLiteCommand ^cmdSelect = db->CreateCommand();
				     cmdSelect->CommandText = "SELECT " + FieldNames + " FROM " + TableName + ";";
				     SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				    String ^Pop = "";//sb = gcnew StringBuilder();
					//sb->Capacity=6666;
				    
					for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				    {
						if (colCtr > 0) Pop += "|";							// Add Seperator (If After First Column)

						Pop += reader->GetName(colCtr);						// Add Column Name (a reader Property)
				    }

					Pop += ("\n~~~~~~~~~~~~\n");
					lblMessageText->Add( Pop->ToString());			Pop = "";			String^ ppppp = "";
				    
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
									strField1 = reader->GetValue(colCtr)->ToString(); 		// Add Column Text
						            break;
								case 2:                  //5
									strField2 = reader->GetValue(colCtr)->ToString();		// Add Column Text									//int sizeofstrline = strLine->Length;
									for (int i = strLine->Length; i < 20; i++)				{						ppppp += " ";				}
									strLine += ppppp + strField1;	ppppp="";	//i=0;				  
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
									strField = strField->Insert(39,strField3)->TrimEnd();
									break;
						  }
				       }					   //lbProduce->Items->Add(strLine);				
					   sc->Add(strLine);			strLine="";				strField = " ";

				    }
				    //lblMessageText->Add(sb->ToString() + "///SQLite " + TableName);
				 }
				 catch (Exception ^e)
				 {                          
				    lblMessageText->Add("Exception While Displaying " + TableName + " ..." + e->ToString()) ;
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

};

}