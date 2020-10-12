#pragma once
#include "pch.h" //link the pre-compiled file to this file
#include <iostream> 
#include <fstream>
#include <string>
#include <ctime> //allows access to the date and time
#include <msclr\marshal.h> //allows System strings to be converted to std strings
#include <msclr\marshal_cppstd.h>

//Lines 12-252 are automatically generated by the system (except from lines 24 and 29-33)
//Comments of these generated lines of code are explanations of what the code does which I found by looking through the documentation, these explanations can be found on the "AddFoodItem.h" header file
namespace HealthFoodProject {

	using namespace std; //use the standard namespace for efficiency by referencing it earlier in the file
	using namespace System; //the following namespace declarations (Lines 15-20) are for using the system and allowing for the creation of a GUI
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AddFoodItem : public System::Windows::Forms::Form //Declare the AddFoodItem class
	{
	public:
		Form^ HomePage; //Allows for the return to the HomePage form
		AddFoodItem(void)
		{
			InitializeComponent(); // Calls the function which initialises the GUI
		} //Lines 25 and 30-34 are adapted from code found in the video "How to switch first form to second and second to first form in GUI C++ using MS visual Studio 2013. � by Ozair Khan"
		AddFoodItem(Form^ HomePageShow) //Declare a function which allows for the user to return to the HomePage form, the parameter being the 'this' value in the HomePage form
		{
			HomePage = HomePageShow;
			InitializeComponent(); //Calls the function which initialises the HomePage GUI in order to return to the HomePage form
		}

	protected:
		~AddFoodItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack; //Lines 44 to 66 decalres the label, button and textbox objects used inside the GUI
	protected:
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::TextBox^ txtFoodItem;
	private: System::Windows::Forms::Label^ lblFoodItem;
	private: System::Windows::Forms::TextBox^ txtFiber;
	private: System::Windows::Forms::Label^ lblFiber;
	private: System::Windows::Forms::TextBox^ txtFats;
	private: System::Windows::Forms::Label^ lblFats;
	private: System::Windows::Forms::TextBox^ txtProteins;
	private: System::Windows::Forms::Label^ lblProteins;
	private: System::Windows::Forms::TextBox^ txtSalt;

	private: System::Windows::Forms::Label^ lblSalt;

	private: System::Windows::Forms::TextBox^ txtMinerals;
	private: System::Windows::Forms::Label^ lblMinerals;
	private: System::Windows::Forms::TextBox^ txtVitamins;
	private: System::Windows::Forms::Label^ lblVitamins;
	private: System::Windows::Forms::TextBox^ txtCarbs;
	private: System::Windows::Forms::Label^ lblCarbs;
	private: System::Windows::Forms::Label^ lblAddFoodItem;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) //this function initialises all the components and objects inside the AddFoodItem form
		{
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->txtFoodItem = (gcnew System::Windows::Forms::TextBox());
			this->lblFoodItem = (gcnew System::Windows::Forms::Label());
			this->txtFiber = (gcnew System::Windows::Forms::TextBox());
			this->lblFiber = (gcnew System::Windows::Forms::Label());
			this->txtFats = (gcnew System::Windows::Forms::TextBox());
			this->lblFats = (gcnew System::Windows::Forms::Label());
			this->txtProteins = (gcnew System::Windows::Forms::TextBox());
			this->lblProteins = (gcnew System::Windows::Forms::Label());
			this->txtSalt = (gcnew System::Windows::Forms::TextBox());
			this->lblSalt = (gcnew System::Windows::Forms::Label());
			this->txtMinerals = (gcnew System::Windows::Forms::TextBox());
			this->lblMinerals = (gcnew System::Windows::Forms::Label());
			this->txtVitamins = (gcnew System::Windows::Forms::TextBox());
			this->lblVitamins = (gcnew System::Windows::Forms::Label());
			this->txtCarbs = (gcnew System::Windows::Forms::TextBox());
			this->lblCarbs = (gcnew System::Windows::Forms::Label());
			this->lblAddFoodItem = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// btnBack
			this->btnBack->Location = System::Drawing::Point(238, 163); //Initialises where in the form (co-ordinates) the object will be
			this->btnBack->Name = L"btnBack"; //Initialises the name of the object 
			this->btnBack->Size = System::Drawing::Size(75, 23); //Initialises the size of the object
			this->btnBack->TabIndex = 39; //Sets the tab order of the object inside its container
			this->btnBack->Text = L"Back"; //Initialises the text which is inside the object
			this->btnBack->UseVisualStyleBackColor = true; //Uses the back colour of the form as the objects back colour
			this->btnBack->Click += gcnew System::EventHandler(this, &AddFoodItem::btnBack_Click); //Initialises the event method which activates when this object is clicked
			// btnClear
			this->btnClear->Location = System::Drawing::Point(238, 193);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 38;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &AddFoodItem::btnClear_Click);
			// btnEnter
			this->btnEnter->Location = System::Drawing::Point(238, 226);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(75, 23);
			this->btnEnter->TabIndex = 37;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &AddFoodItem::btnEnter_Click);
			// txtFoodItem
			this->txtFoodItem->Location = System::Drawing::Point(114, 36);
			this->txtFoodItem->Name = L"txtFoodItem";
			this->txtFoodItem->Size = System::Drawing::Size(100, 20);
			this->txtFoodItem->TabIndex = 36;
			// lblFoodItem
			this->lblFoodItem->AutoSize = true; //Adjusts the size of the label to fit its contents
			this->lblFoodItem->Location = System::Drawing::Point(15, 39);
			this->lblFoodItem->Name = L"lblFoodItem";
			this->lblFoodItem->Size = System::Drawing::Size(57, 13);
			this->lblFoodItem->TabIndex = 35;
			this->lblFoodItem->Text = L"Food Item:";
			// txtFiber
			this->txtFiber->Location = System::Drawing::Point(114, 229);
			this->txtFiber->Name = L"txtFiber";
			this->txtFiber->Size = System::Drawing::Size(100, 20);
			this->txtFiber->TabIndex = 34;
			// lblFiber
			this->lblFiber->AutoSize = true;
			this->lblFiber->Location = System::Drawing::Point(15, 232);
			this->lblFiber->Name = L"lblFiber";
			this->lblFiber->Size = System::Drawing::Size(48, 13);
			this->lblFiber->TabIndex = 33;
			this->lblFiber->Text = L"Fiber (g):";
			// txtFats
			this->txtFats->Location = System::Drawing::Point(114, 200);
			this->txtFats->Name = L"txtFats";
			this->txtFats->Size = System::Drawing::Size(100, 20);
			this->txtFats->TabIndex = 32;
			// lblFats
			this->lblFats->AutoSize = true;
			this->lblFats->Location = System::Drawing::Point(15, 203);
			this->lblFats->Name = L"lblFats";
			this->lblFats->Size = System::Drawing::Size(45, 13);
			this->lblFats->TabIndex = 31;
			this->lblFats->Text = L"Fats (g):";
			// txtProteins
			this->txtProteins->Location = System::Drawing::Point(114, 171);
			this->txtProteins->Name = L"txtProteins";
			this->txtProteins->Size = System::Drawing::Size(100, 20);
			this->txtProteins->TabIndex = 30; 
			// lblProteins
			this->lblProteins->AutoSize = true;
			this->lblProteins->Location = System::Drawing::Point(15, 174);
			this->lblProteins->Name = L"lblProteins";
			this->lblProteins->Size = System::Drawing::Size(63, 13);
			this->lblProteins->TabIndex = 29;
			this->lblProteins->Text = L"Proteins (g):";
			// txtSalt
			this->txtSalt->Location = System::Drawing::Point(114, 143);
			this->txtSalt->Name = L"txtSalt";
			this->txtSalt->Size = System::Drawing::Size(100, 20);
			this->txtSalt->TabIndex = 28;
			// lblSalt
			this->lblSalt->AutoSize = true;
			this->lblSalt->Location = System::Drawing::Point(15, 146);
			this->lblSalt->Name = L"lblSalt";
			this->lblSalt->Size = System::Drawing::Size(43, 13);
			this->lblSalt->TabIndex = 27;
			this->lblSalt->Text = L"Salt (g):";
			// txtMinerals
			this->txtMinerals->Location = System::Drawing::Point(114, 117);
			this->txtMinerals->Name = L"txtMinerals";
			this->txtMinerals->Size = System::Drawing::Size(100, 20);
			this->txtMinerals->TabIndex = 26;
			// lblMinerals
			this->lblMinerals->AutoSize = true;
			this->lblMinerals->Location = System::Drawing::Point(15, 120);
			this->lblMinerals->Name = L"lblMinerals";
			this->lblMinerals->Size = System::Drawing::Size(64, 13);
			this->lblMinerals->TabIndex = 25;
			this->lblMinerals->Text = L"Minerals (g):";
			// txtVitamins
			this->txtVitamins->Location = System::Drawing::Point(114, 90);
			this->txtVitamins->Name = L"txtVitamins";
			this->txtVitamins->Size = System::Drawing::Size(100, 20);
			this->txtVitamins->TabIndex = 24;
			// lblVitamins
			this->lblVitamins->AutoSize = true;
			this->lblVitamins->Location = System::Drawing::Point(15, 93);
			this->lblVitamins->Name = L"lblVitamins";
			this->lblVitamins->Size = System::Drawing::Size(64, 13);
			this->lblVitamins->TabIndex = 23;
			this->lblVitamins->Text = L"Vitamins (g):";
			// txtCarbs
			this->txtCarbs->Location = System::Drawing::Point(114, 63);
			this->txtCarbs->Name = L"txtCarbs";
			this->txtCarbs->Size = System::Drawing::Size(100, 20);
			this->txtCarbs->TabIndex = 22;
			// lblCarbs
			this->lblCarbs->AutoSize = true;
			this->lblCarbs->Location = System::Drawing::Point(15, 66);
			this->lblCarbs->Name = L"lblCarbs";
			this->lblCarbs->Size = System::Drawing::Size(93, 13);
			this->lblCarbs->TabIndex = 21;
			this->lblCarbs->Text = L"Carbohydrates (g):";
			// lblAddFoodItem
			this->lblAddFoodItem->AutoSize = true;
			this->lblAddFoodItem->Location = System::Drawing::Point(123, 9);
			this->lblAddFoodItem->Name = L"lblAddFoodItem";
			this->lblAddFoodItem->Size = System::Drawing::Size(76, 13);
			this->lblAddFoodItem->TabIndex = 20;
			this->lblAddFoodItem->Text = L"Add Food Item";
			// AddFoodItem
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13); //sets the size of the font
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font; //Defines the automatic scaling mode of the container 
			this->ClientSize = System::Drawing::Size(328, 261);
			this->Controls->Add(this->btnBack); //Lines 226-245 adds in the object to the form at its positions initialised above
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->txtFoodItem);
			this->Controls->Add(this->lblFoodItem);
			this->Controls->Add(this->txtFiber);
			this->Controls->Add(this->lblFiber);
			this->Controls->Add(this->txtFats);
			this->Controls->Add(this->lblFats);
			this->Controls->Add(this->txtProteins);
			this->Controls->Add(this->lblProteins);
			this->Controls->Add(this->txtSalt);
			this->Controls->Add(this->lblSalt);
			this->Controls->Add(this->txtMinerals);
			this->Controls->Add(this->lblMinerals);
			this->Controls->Add(this->txtVitamins);
			this->Controls->Add(this->lblVitamins);
			this->Controls->Add(this->txtCarbs);
			this->Controls->Add(this->lblCarbs);
			this->Controls->Add(this->lblAddFoodItem);
			this->Name = L"AddFoodItem"; //Sets the text and name of the form
			this->Text = L"AddFoodItem";
			this->Load += gcnew System::EventHandler(this, &AddFoodItem::AddFoodItem_Load); //Sets the first event to execute as loading the form
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void AddFoodItem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { //This method clears all the entered data inside the textboxes 
	txtFoodItem->Text = ""; //Sets the text value of the textbox to "" (empty)
	txtCarbs->Text = "";
	txtVitamins->Text = "";
	txtMinerals->Text = "";
	txtSalt->Text = "";
	txtProteins->Text = "";
	txtFats->Text = "";
	txtFiber->Text = "";
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) { //This method returns the user back to the HomePage form
	this->Hide(); //Hide this form (Lines 266 and 267 are adapted from code found in the video "How to switch first form to second and second to first form in GUI C++ using MS visual Studio 2013. � by Ozair Khan")
	HomePage->Show(); //Show the HomePage form (initialise the HomePage form values)
}
private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) { //This method validates the entered data into the textboxes and appends the data to the FoodDiary CSV file
	ofstream WriteCSV; //Decalres an object to write data to a CSV file to the WriteCSV variable
	SYSTEMTIME RawTodayDate; //Decalres an object to access the system time to the RawTodayDate variable - Lines 271-273 are adapted using help from the SYSTEMTIME documentation
	GetLocalTime(&RawTodayDate); //Returns the local datetime value of the system, passing the object as a pointer 
	String^ SystemTodayDate = RawTodayDate.wDay + "/" + RawTodayDate.wMonth + "/" + RawTodayDate.wYear; //Construts today's date to use in the system using string concatenations of individual values into the pattern "XX/XX/XXXX"
	WriteCSV.open("CSV Files/FoodDiary.csv", std::ios_base::app); //Establishes a connection to the FoodDiary.csv file to append data to it

	string TodayDate = msclr::interop::marshal_as<std::string>(SystemTodayDate); //Lines 276 to 284 take the system string value and convert it into a std string value in order for the value to be written to a CSV file and have been adapted from "Stack Overflow � C++ .NET convert System::String to std::string"
	string FoodItem = msclr::interop::marshal_as<std::string>(txtFoodItem->Text);
	string Carbs = msclr::interop::marshal_as<std::string>(txtCarbs->Text);
	string Vitamins = msclr::interop::marshal_as<std::string>(txtVitamins->Text);
	string Minerals = msclr::interop::marshal_as<std::string>(txtMinerals->Text);
	string Salt = msclr::interop::marshal_as<std::string>(txtSalt->Text);
	string Proteins = msclr::interop::marshal_as<std::string>(txtProteins->Text);
	string Fats = msclr::interop::marshal_as<std::string>(txtFats->Text);
	string Fiber = msclr::interop::marshal_as<std::string>(txtFiber->Text);

	//the if statement below checks if any of the textboxes are empty (Presence Check Data Validation), presenting an error message if any of the textboxes are empty
	if ((FoodItem == "") || (Carbs == "") || (Vitamins == "") || (Minerals == "") || (Salt == "") || (Proteins == "") || (Fats == "") || (Fiber == "")) {
		MessageBox::Show("Please ensure that all of the textboxes are filled in", "Presence Error");
	}
	else { //If none of the textboxes are empty, then the system will check if any of the entered values (stod = string to double conversion) are below 0 or above 50.0 (Range Check Data Validation), displaying an error message if any of the values are outside of these ranges
		if ((0 > stod(Carbs)) || (50.0 < stod(Carbs)) || (0 > stod(Vitamins)) || (50.0 < stod(Vitamins)) || (0 > stod(Minerals)) || (50.0 < stod(Minerals)) || (0 > stod(Salt)) || (50.0 < stod(Salt)) || (0 > stod(Proteins)) || (50.0 < stod(Proteins)) || (0 > stod(Fats)) || (50.0 < stod(Fats)) || (0 > stod(Fiber)) || (50.0 < stod(Fiber))) {
			MessageBox::Show("Please ensure that the nutrient value in the textboxes are between 0g and 50.0g", "Range Error");
		}
		else { //If all the values are inside the ranges, then the system would append the data to the CSV file, displaying a message to the user, and then clear the textboxes 
			WriteCSV << TodayDate << "," << FoodItem << "," << Carbs << "," << Vitamins << "," << Minerals << "," << Salt << "," << Proteins << "," << Fats << "," << Fiber << "\n";
			WriteCSV.close(); //Closes the connection to the CSV file
			MessageBox::Show("Your food item information has been successfully saved", "Success"); //Message displayed to the user
			txtFoodItem->Text = ""; //Clears all of the textboxes of entered data (Lines 298-305)
			txtCarbs->Text = "";
			txtVitamins->Text = "";
			txtMinerals->Text = "";
			txtSalt->Text = "";
			txtProteins->Text = "";
			txtFats->Text = "";
			txtFiber->Text = "";
		}
	}
}
};
}
