#pragma once
#include "User.h"
#include <sstream>
#include <msclr\marshal_cppstd.h>

namespace AirBooks {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	public ref class Main : public System::Windows::Forms::Form {
	public:
		Main(void) {
			InitializeComponent();
		}

	protected:
		~Main() {
			if (components) {
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::TextBox^ ln_passwordField;

	private: System::Windows::Forms::TextBox^ ln_emailField;
	private: System::Windows::Forms::Label^ ln_email;

	private: System::Windows::Forms::Button^ createAccountButton;
	private: System::Windows::Forms::Label^ ln_password;

	private: System::Windows::Forms::Label^ loginStatus;
	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ accountTab;

	private: System::Windows::Forms::TabPage^ flightsTab;

	private: System::Windows::Forms::Label^ companyLogo;

	private: System::Windows::Forms::Panel^ loginPanel;
	private: System::Windows::Forms::Panel^ accountPanel;

	private: System::Windows::Forms::Button^ passwordUpdate;

	private: System::Windows::Forms::TextBox^ passwordNew;

	private: System::Windows::Forms::Label^ passwordCurrent;

	private: System::Windows::Forms::Button^ emailUpdate;
	private: System::Windows::Forms::TextBox^ emailNew;
	private: System::Windows::Forms::Label^ emailCurrent;

	private: System::Windows::Forms::Button^ logoutButton;
	private: System::Windows::Forms::Panel^ createAccountPanel;
	private: System::Windows::Forms::TextBox^ ca_firstNameField;
	private: System::Windows::Forms::Label^ ca_lastName;
	private: System::Windows::Forms::Label^ ca_firstName;
	private: System::Windows::Forms::TextBox^ ca_lastNameField;
	private: System::Windows::Forms::TextBox^ ca_emailField;
	private: System::Windows::Forms::Label^ createAccountStatus;

	private: System::Windows::Forms::Label^ ca_password;
	private: System::Windows::Forms::Label^ ca_email;
	private: System::Windows::Forms::TextBox^ ca_passwordField;
	private: System::Windows::Forms::LinkLabel^ switchToCreate;
	private: System::Windows::Forms::LinkLabel^ switchToLogin;

	private: System::Windows::Forms::Button^ lastNameUpdate;
	private: System::Windows::Forms::TextBox^ lastNameNew;
	private: System::Windows::Forms::Label^ lastNameCurrent;

	private: System::Windows::Forms::Button^ firstNameUpdate;
	private: System::Windows::Forms::TextBox^ firstNameNew;
	private: System::Windows::Forms::Label^ firstNameCurrent;
	private: System::Windows::Forms::DateTimePicker^ maxTimeField;

	private: System::Windows::Forms::DateTimePicker^ minTimeField;

	private: System::Windows::Forms::Label^ destinationLabel;
	private: System::Windows::Forms::Label^ departureTimeLabel;
	private: System::Windows::Forms::Label^ maxTimeLabel;
	private: System::Windows::Forms::Label^ minTimeLabel;
	private: System::Windows::Forms::TableLayoutPanel^ flightsList;
	private: System::Windows::Forms::Label^ f_occupancyHeader;

	private: System::Windows::Forms::Label^ f_departureHeader;

	private: System::Windows::Forms::Label^ f_destinationHeader;

	private: System::Windows::Forms::Label^ f_idHeader;

	private: System::Windows::Forms::Button^ searchFlightsButton;
	private: System::Windows::Forms::ComboBox^ destinationField;








	private: System::Windows::Forms::Panel^ mainview;



	private: System::Windows::Forms::Panel^ bottomBar;
	private: System::Windows::Forms::Panel^ noAccount;


	private: System::Windows::Forms::LinkLabel^ f_returnToAccount;
	private: System::Windows::Forms::Label^ f_accountWarning;


	private: System::Windows::Forms::Label^ f_priceHeader;
private: System::Windows::Forms::Label^ f_divider;



private: System::Windows::Forms::Label^ t_divider;



private: System::Windows::Forms::TableLayoutPanel^ ticketList;

private: System::Windows::Forms::TableLayoutPanel^ ticketsHeader;
private: System::Windows::Forms::Label^ t_idHeader;
private: System::Windows::Forms::Label^ t_seatHeader;
private: System::Windows::Forms::Label^ t_destinationHeader;
private: System::Windows::Forms::Label^ t_departureHeader;
private: System::Windows::Forms::Panel^ accountTickets;
private: System::Windows::Forms::Panel^ accountOverview;


private: System::Windows::Forms::Label^ h_divider;
private: System::Windows::Forms::Panel^ purchaseTicket;

private: System::Windows::Forms::Panel^ flights;
private: System::Windows::Forms::Label^ h_divider2;
private: System::Windows::Forms::TableLayoutPanel^ planeTable;
private: System::Windows::Forms::MaskedTextBox^ cardNumberField;

private: System::Windows::Forms::Label^ cvvLabel;
private: System::Windows::Forms::MaskedTextBox^ cvvField;


private: System::Windows::Forms::Label^ expDateLabel;

private: System::Windows::Forms::Label^ cardNumberLabel;
private: System::Windows::Forms::MaskedTextBox^ expDateField;
private: System::Windows::Forms::Button^ submitPayment;
private: System::Windows::Forms::Label^ ticketQuantityLabel;
private: System::Windows::Forms::Label^ ticketPriceLabel;
private: System::Windows::Forms::Label^ discountLabel;
private: System::Windows::Forms::Label^ totalPriceLabel;
private: System::Windows::Forms::TabControl^ manageTabBuffer;
private: System::Windows::Forms::TabPage^ manageTab;
private: System::Windows::Forms::Panel^ managerCreateAccount;
private: System::Windows::Forms::TextBox^ manageFirstField;

private: System::Windows::Forms::Label^ manageFirstLabel;
private: System::Windows::Forms::Button^ manageSubmitAccount;



private: System::Windows::Forms::TextBox^ manageEmailField;
private: System::Windows::Forms::TextBox^ managePassField;
private: System::Windows::Forms::Label^ manageCreateStatus;



private: System::Windows::Forms::Label^ manageLastLabel;
private: System::Windows::Forms::TextBox^ manageLastField;
private: System::Windows::Forms::Label^ manageEmailLabel;
private: System::Windows::Forms::Label^ managePassLabel;




private: System::Windows::Forms::RadioButton^ employeeRadio;

private: System::Windows::Forms::RadioButton^ customerRadio;
private: System::Windows::Forms::RadioButton^ managerRadio;
private: System::Windows::Forms::Label^ accountTypeLabel;
private: System::Windows::Forms::Label^ h_divider3;

private: System::Windows::Forms::Panel^ manageSearchFlights;



private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::DateTimePicker^ manageMaxTime;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::DateTimePicker^ manageMinTime;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ manageSearchFlightsButton;

private: System::Windows::Forms::ComboBox^ manageDestinationField;
private: System::Windows::Forms::TableLayoutPanel^ manageFlightsList;


private: System::Windows::Forms::Panel^ manageModifyFlight;
private: System::Windows::Forms::Label^ modifyIdLabel;
private: System::Windows::Forms::TextBox^ modifyDestinationField;
private: System::Windows::Forms::Label^ modifyDestinationLabel;
private: System::Windows::Forms::Label^ modifyIdField;
private: System::Windows::Forms::Label^ h_divider4;
private: System::Windows::Forms::DateTimePicker^ modifyDepartureField;

private: System::Windows::Forms::Label^ modifyDepartureLabel;
private: System::Windows::Forms::Button^ modifyDelete;


private: System::Windows::Forms::Button^ modifyUpdate;
private: System::Windows::Forms::Button^ modifyCreate;
private: System::Windows::Forms::TextBox^ modifyColumnsField;
private: System::Windows::Forms::TextBox^ modifyRowsField;
private: System::Windows::Forms::Label^ modifyColumnsLabel;
private: System::Windows::Forms::Label^ modifyRowsLabel;
private: System::Windows::Forms::TextBox^ modifyPriceField;
private: System::Windows::Forms::Label^ modifyPriceLabel;

















	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->accountTab = (gcnew System::Windows::Forms::TabPage());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->ln_emailField = (gcnew System::Windows::Forms::TextBox());
			this->switchToCreate = (gcnew System::Windows::Forms::LinkLabel());
			this->ln_email = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->ln_password = (gcnew System::Windows::Forms::Label());
			this->ln_passwordField = (gcnew System::Windows::Forms::TextBox());
			this->loginStatus = (gcnew System::Windows::Forms::Label());
			this->createAccountPanel = (gcnew System::Windows::Forms::Panel());
			this->ca_firstNameField = (gcnew System::Windows::Forms::TextBox());
			this->switchToLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->ca_firstName = (gcnew System::Windows::Forms::Label());
			this->createAccountButton = (gcnew System::Windows::Forms::Button());
			this->ca_emailField = (gcnew System::Windows::Forms::TextBox());
			this->ca_passwordField = (gcnew System::Windows::Forms::TextBox());
			this->createAccountStatus = (gcnew System::Windows::Forms::Label());
			this->ca_lastName = (gcnew System::Windows::Forms::Label());
			this->ca_lastNameField = (gcnew System::Windows::Forms::TextBox());
			this->ca_email = (gcnew System::Windows::Forms::Label());
			this->ca_password = (gcnew System::Windows::Forms::Label());
			this->accountPanel = (gcnew System::Windows::Forms::Panel());
			this->accountOverview = (gcnew System::Windows::Forms::Panel());
			this->firstNameCurrent = (gcnew System::Windows::Forms::Label());
			this->passwordCurrent = (gcnew System::Windows::Forms::Label());
			this->passwordNew = (gcnew System::Windows::Forms::TextBox());
			this->lastNameNew = (gcnew System::Windows::Forms::TextBox());
			this->emailNew = (gcnew System::Windows::Forms::TextBox());
			this->emailCurrent = (gcnew System::Windows::Forms::Label());
			this->lastNameCurrent = (gcnew System::Windows::Forms::Label());
			this->firstNameNew = (gcnew System::Windows::Forms::TextBox());
			this->emailUpdate = (gcnew System::Windows::Forms::Button());
			this->firstNameUpdate = (gcnew System::Windows::Forms::Button());
			this->lastNameUpdate = (gcnew System::Windows::Forms::Button());
			this->passwordUpdate = (gcnew System::Windows::Forms::Button());
			this->accountTickets = (gcnew System::Windows::Forms::Panel());
			this->h_divider = (gcnew System::Windows::Forms::Label());
			this->ticketsHeader = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->t_idHeader = (gcnew System::Windows::Forms::Label());
			this->t_seatHeader = (gcnew System::Windows::Forms::Label());
			this->t_destinationHeader = (gcnew System::Windows::Forms::Label());
			this->t_departureHeader = (gcnew System::Windows::Forms::Label());
			this->t_divider = (gcnew System::Windows::Forms::Label());
			this->ticketList = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flightsTab = (gcnew System::Windows::Forms::TabPage());
			this->noAccount = (gcnew System::Windows::Forms::Panel());
			this->f_returnToAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->f_accountWarning = (gcnew System::Windows::Forms::Label());
			this->flights = (gcnew System::Windows::Forms::Panel());
			this->h_divider2 = (gcnew System::Windows::Forms::Label());
			this->destinationLabel = (gcnew System::Windows::Forms::Label());
			this->f_divider = (gcnew System::Windows::Forms::Label());
			this->maxTimeField = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_idHeader = (gcnew System::Windows::Forms::Label());
			this->minTimeField = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_departureHeader = (gcnew System::Windows::Forms::Label());
			this->minTimeLabel = (gcnew System::Windows::Forms::Label());
			this->f_destinationHeader = (gcnew System::Windows::Forms::Label());
			this->maxTimeLabel = (gcnew System::Windows::Forms::Label());
			this->f_occupancyHeader = (gcnew System::Windows::Forms::Label());
			this->departureTimeLabel = (gcnew System::Windows::Forms::Label());
			this->f_priceHeader = (gcnew System::Windows::Forms::Label());
			this->searchFlightsButton = (gcnew System::Windows::Forms::Button());
			this->destinationField = (gcnew System::Windows::Forms::ComboBox());
			this->flightsList = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->purchaseTicket = (gcnew System::Windows::Forms::Panel());
			this->totalPriceLabel = (gcnew System::Windows::Forms::Label());
			this->discountLabel = (gcnew System::Windows::Forms::Label());
			this->ticketQuantityLabel = (gcnew System::Windows::Forms::Label());
			this->ticketPriceLabel = (gcnew System::Windows::Forms::Label());
			this->submitPayment = (gcnew System::Windows::Forms::Button());
			this->cvvLabel = (gcnew System::Windows::Forms::Label());
			this->cvvField = (gcnew System::Windows::Forms::MaskedTextBox());
			this->expDateLabel = (gcnew System::Windows::Forms::Label());
			this->cardNumberLabel = (gcnew System::Windows::Forms::Label());
			this->expDateField = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cardNumberField = (gcnew System::Windows::Forms::MaskedTextBox());
			this->planeTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->manageTab = (gcnew System::Windows::Forms::TabPage());
			this->managerCreateAccount = (gcnew System::Windows::Forms::Panel());
			this->h_divider3 = (gcnew System::Windows::Forms::Label());
			this->accountTypeLabel = (gcnew System::Windows::Forms::Label());
			this->managerRadio = (gcnew System::Windows::Forms::RadioButton());
			this->employeeRadio = (gcnew System::Windows::Forms::RadioButton());
			this->customerRadio = (gcnew System::Windows::Forms::RadioButton());
			this->manageFirstField = (gcnew System::Windows::Forms::TextBox());
			this->manageFirstLabel = (gcnew System::Windows::Forms::Label());
			this->manageSubmitAccount = (gcnew System::Windows::Forms::Button());
			this->manageEmailField = (gcnew System::Windows::Forms::TextBox());
			this->managePassField = (gcnew System::Windows::Forms::TextBox());
			this->manageCreateStatus = (gcnew System::Windows::Forms::Label());
			this->manageLastLabel = (gcnew System::Windows::Forms::Label());
			this->manageLastField = (gcnew System::Windows::Forms::TextBox());
			this->manageEmailLabel = (gcnew System::Windows::Forms::Label());
			this->managePassLabel = (gcnew System::Windows::Forms::Label());
			this->manageModifyFlight = (gcnew System::Windows::Forms::Panel());
			this->modifyPriceField = (gcnew System::Windows::Forms::TextBox());
			this->modifyPriceLabel = (gcnew System::Windows::Forms::Label());
			this->modifyColumnsField = (gcnew System::Windows::Forms::TextBox());
			this->modifyRowsField = (gcnew System::Windows::Forms::TextBox());
			this->modifyColumnsLabel = (gcnew System::Windows::Forms::Label());
			this->modifyRowsLabel = (gcnew System::Windows::Forms::Label());
			this->modifyCreate = (gcnew System::Windows::Forms::Button());
			this->modifyDelete = (gcnew System::Windows::Forms::Button());
			this->modifyUpdate = (gcnew System::Windows::Forms::Button());
			this->modifyDepartureField = (gcnew System::Windows::Forms::DateTimePicker());
			this->modifyDepartureLabel = (gcnew System::Windows::Forms::Label());
			this->h_divider4 = (gcnew System::Windows::Forms::Label());
			this->modifyDestinationField = (gcnew System::Windows::Forms::TextBox());
			this->modifyDestinationLabel = (gcnew System::Windows::Forms::Label());
			this->modifyIdField = (gcnew System::Windows::Forms::Label());
			this->modifyIdLabel = (gcnew System::Windows::Forms::Label());
			this->manageSearchFlights = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->manageMaxTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->manageMinTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->manageSearchFlightsButton = (gcnew System::Windows::Forms::Button());
			this->manageDestinationField = (gcnew System::Windows::Forms::ComboBox());
			this->manageFlightsList = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->companyLogo = (gcnew System::Windows::Forms::Label());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->mainview = (gcnew System::Windows::Forms::Panel());
			this->bottomBar = (gcnew System::Windows::Forms::Panel());
			this->manageTabBuffer = (gcnew System::Windows::Forms::TabControl());
			this->tabControl->SuspendLayout();
			this->accountTab->SuspendLayout();
			this->loginPanel->SuspendLayout();
			this->createAccountPanel->SuspendLayout();
			this->accountPanel->SuspendLayout();
			this->accountOverview->SuspendLayout();
			this->accountTickets->SuspendLayout();
			this->ticketsHeader->SuspendLayout();
			this->flightsTab->SuspendLayout();
			this->noAccount->SuspendLayout();
			this->flights->SuspendLayout();
			this->purchaseTicket->SuspendLayout();
			this->manageTab->SuspendLayout();
			this->managerCreateAccount->SuspendLayout();
			this->manageModifyFlight->SuspendLayout();
			this->manageSearchFlights->SuspendLayout();
			this->mainview->SuspendLayout();
			this->bottomBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl->Controls->Add(this->accountTab);
			this->tabControl->Controls->Add(this->flightsTab);
			this->tabControl->Controls->Add(this->manageTab);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Margin = System::Windows::Forms::Padding(0, 0, 0, 192);
			this->tabControl->Name = L"tabControl";
			this->tabControl->Padding = System::Drawing::Point(30, 3);
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(2534, 1292);
			this->tabControl->TabIndex = 7;
			// 
			// accountTab
			// 
			this->accountTab->Controls->Add(this->loginPanel);
			this->accountTab->Controls->Add(this->createAccountPanel);
			this->accountTab->Controls->Add(this->accountPanel);
			this->accountTab->Location = System::Drawing::Point(4, 43);
			this->accountTab->Margin = System::Windows::Forms::Padding(0);
			this->accountTab->Name = L"accountTab";
			this->accountTab->Padding = System::Windows::Forms::Padding(0, 0, 0, 20);
			this->accountTab->Size = System::Drawing::Size(2526, 1245);
			this->accountTab->TabIndex = 0;
			this->accountTab->Text = L"Account";
			this->accountTab->UseVisualStyleBackColor = true;
			this->accountTab->Enter += gcnew System::EventHandler(this, &Main::accountTab_Enter);
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->ln_emailField);
			this->loginPanel->Controls->Add(this->switchToCreate);
			this->loginPanel->Controls->Add(this->ln_email);
			this->loginPanel->Controls->Add(this->loginButton);
			this->loginPanel->Controls->Add(this->ln_password);
			this->loginPanel->Controls->Add(this->ln_passwordField);
			this->loginPanel->Controls->Add(this->loginStatus);
			this->loginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginPanel->Location = System::Drawing::Point(0, 0);
			this->loginPanel->Margin = System::Windows::Forms::Padding(0);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Padding = System::Windows::Forms::Padding(40, 38, 40, 38);
			this->loginPanel->Size = System::Drawing::Size(2526, 1225);
			this->loginPanel->TabIndex = 9;
			// 
			// ln_emailField
			// 
			this->ln_emailField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_emailField->Location = System::Drawing::Point(961, 340);
			this->ln_emailField->Margin = System::Windows::Forms::Padding(4);
			this->ln_emailField->MinimumSize = System::Drawing::Size(400, 23);
			this->ln_emailField->Name = L"ln_emailField";
			this->ln_emailField->Size = System::Drawing::Size(596, 38);
			this->ln_emailField->TabIndex = 0;
			// 
			// switchToCreate
			// 
			this->switchToCreate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->switchToCreate->Location = System::Drawing::Point(1061, 627);
			this->switchToCreate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->switchToCreate->Name = L"switchToCreate";
			this->switchToCreate->Size = System::Drawing::Size(404, 52);
			this->switchToCreate->TabIndex = 7;
			this->switchToCreate->TabStop = true;
			this->switchToCreate->Text = L"I don\'t have an account";
			this->switchToCreate->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->switchToCreate->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::switchToCreate_LinkClicked);
			// 
			// ln_email
			// 
			this->ln_email->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_email->Location = System::Drawing::Point(961, 292);
			this->ln_email->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ln_email->Name = L"ln_email";
			this->ln_email->Size = System::Drawing::Size(174, 44);
			this->ln_email->TabIndex = 4;
			this->ln_email->Text = L"Email";
			// 
			// loginButton
			// 
			this->loginButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loginButton->Location = System::Drawing::Point(1061, 688);
			this->loginButton->Margin = System::Windows::Forms::Padding(4);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(396, 100);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &Main::loginButton_Click);
			// 
			// ln_password
			// 
			this->ln_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_password->Location = System::Drawing::Point(961, 440);
			this->ln_password->Margin = System::Windows::Forms::Padding(4, 38, 4, 0);
			this->ln_password->Name = L"ln_password";
			this->ln_password->Size = System::Drawing::Size(174, 44);
			this->ln_password->TabIndex = 5;
			this->ln_password->Text = L"Password";
			// 
			// ln_passwordField
			// 
			this->ln_passwordField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_passwordField->Location = System::Drawing::Point(961, 488);
			this->ln_passwordField->Margin = System::Windows::Forms::Padding(4);
			this->ln_passwordField->MinimumSize = System::Drawing::Size(400, 23);
			this->ln_passwordField->Name = L"ln_passwordField";
			this->ln_passwordField->PasswordChar = '*';
			this->ln_passwordField->Size = System::Drawing::Size(596, 38);
			this->ln_passwordField->TabIndex = 1;
			// 
			// loginStatus
			// 
			this->loginStatus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loginStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginStatus->Location = System::Drawing::Point(1061, 819);
			this->loginStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->loginStatus->Name = L"loginStatus";
			this->loginStatus->Size = System::Drawing::Size(396, 98);
			this->loginStatus->TabIndex = 6;
			this->loginStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// createAccountPanel
			// 
			this->createAccountPanel->Controls->Add(this->ca_firstNameField);
			this->createAccountPanel->Controls->Add(this->switchToLogin);
			this->createAccountPanel->Controls->Add(this->ca_firstName);
			this->createAccountPanel->Controls->Add(this->createAccountButton);
			this->createAccountPanel->Controls->Add(this->ca_emailField);
			this->createAccountPanel->Controls->Add(this->ca_passwordField);
			this->createAccountPanel->Controls->Add(this->createAccountStatus);
			this->createAccountPanel->Controls->Add(this->ca_lastName);
			this->createAccountPanel->Controls->Add(this->ca_lastNameField);
			this->createAccountPanel->Controls->Add(this->ca_email);
			this->createAccountPanel->Controls->Add(this->ca_password);
			this->createAccountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createAccountPanel->Location = System::Drawing::Point(0, 0);
			this->createAccountPanel->Margin = System::Windows::Forms::Padding(0);
			this->createAccountPanel->Name = L"createAccountPanel";
			this->createAccountPanel->Padding = System::Windows::Forms::Padding(40, 38, 40, 38);
			this->createAccountPanel->Size = System::Drawing::Size(2526, 1225);
			this->createAccountPanel->TabIndex = 7;
			// 
			// ca_firstNameField
			// 
			this->ca_firstNameField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_firstNameField->Location = System::Drawing::Point(933, 296);
			this->ca_firstNameField->Margin = System::Windows::Forms::Padding(4);
			this->ca_firstNameField->Name = L"ca_firstNameField";
			this->ca_firstNameField->Size = System::Drawing::Size(604, 38);
			this->ca_firstNameField->TabIndex = 5;
			// 
			// switchToLogin
			// 
			this->switchToLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->switchToLogin->Location = System::Drawing::Point(933, 759);
			this->switchToLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 19);
			this->switchToLogin->Name = L"switchToLogin";
			this->switchToLogin->Size = System::Drawing::Size(604, 37);
			this->switchToLogin->TabIndex = 10;
			this->switchToLogin->TabStop = true;
			this->switchToLogin->Text = L"I already have an account";
			this->switchToLogin->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->switchToLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::switchToLogin_LinkClicked);
			// 
			// ca_firstName
			// 
			this->ca_firstName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_firstName->Location = System::Drawing::Point(933, 248);
			this->ca_firstName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ca_firstName->Name = L"ca_firstName";
			this->ca_firstName->Size = System::Drawing::Size(604, 44);
			this->ca_firstName->TabIndex = 14;
			this->ca_firstName->Text = L"First Name";
			// 
			// createAccountButton
			// 
			this->createAccountButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->createAccountButton->Location = System::Drawing::Point(1085, 819);
			this->createAccountButton->Margin = System::Windows::Forms::Padding(4);
			this->createAccountButton->Name = L"createAccountButton";
			this->createAccountButton->Size = System::Drawing::Size(304, 54);
			this->createAccountButton->TabIndex = 9;
			this->createAccountButton->Text = L"Create Account";
			this->createAccountButton->UseVisualStyleBackColor = true;
			this->createAccountButton->Click += gcnew System::EventHandler(this, &Main::createAccountButton_Click);
			// 
			// ca_emailField
			// 
			this->ca_emailField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_emailField->Location = System::Drawing::Point(933, 517);
			this->ca_emailField->Margin = System::Windows::Forms::Padding(4);
			this->ca_emailField->Name = L"ca_emailField";
			this->ca_emailField->Size = System::Drawing::Size(604, 38);
			this->ca_emailField->TabIndex = 7;
			// 
			// ca_passwordField
			// 
			this->ca_passwordField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_passwordField->Location = System::Drawing::Point(933, 627);
			this->ca_passwordField->Margin = System::Windows::Forms::Padding(4);
			this->ca_passwordField->Name = L"ca_passwordField";
			this->ca_passwordField->PasswordChar = '*';
			this->ca_passwordField->Size = System::Drawing::Size(604, 38);
			this->ca_passwordField->TabIndex = 8;
			// 
			// createAccountStatus
			// 
			this->createAccountStatus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->createAccountStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createAccountStatus->Location = System::Drawing::Point(933, 886);
			this->createAccountStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createAccountStatus->Name = L"createAccountStatus";
			this->createAccountStatus->Size = System::Drawing::Size(604, 98);
			this->createAccountStatus->TabIndex = 11;
			this->createAccountStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ca_lastName
			// 
			this->ca_lastName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_lastName->Location = System::Drawing::Point(933, 357);
			this->ca_lastName->Margin = System::Windows::Forms::Padding(4, 19, 4, 0);
			this->ca_lastName->Name = L"ca_lastName";
			this->ca_lastName->Size = System::Drawing::Size(604, 44);
			this->ca_lastName->TabIndex = 15;
			this->ca_lastName->Text = L"Last Name";
			// 
			// ca_lastNameField
			// 
			this->ca_lastNameField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_lastNameField->Location = System::Drawing::Point(933, 406);
			this->ca_lastNameField->Margin = System::Windows::Forms::Padding(4);
			this->ca_lastNameField->Name = L"ca_lastNameField";
			this->ca_lastNameField->Size = System::Drawing::Size(604, 38);
			this->ca_lastNameField->TabIndex = 6;
			// 
			// ca_email
			// 
			this->ca_email->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_email->Location = System::Drawing::Point(933, 469);
			this->ca_email->Margin = System::Windows::Forms::Padding(4, 19, 4, 0);
			this->ca_email->Name = L"ca_email";
			this->ca_email->Size = System::Drawing::Size(214, 44);
			this->ca_email->TabIndex = 9;
			this->ca_email->Text = L"Email";
			// 
			// ca_password
			// 
			this->ca_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_password->Location = System::Drawing::Point(933, 579);
			this->ca_password->Margin = System::Windows::Forms::Padding(4, 19, 4, 0);
			this->ca_password->Name = L"ca_password";
			this->ca_password->Size = System::Drawing::Size(214, 44);
			this->ca_password->TabIndex = 10;
			this->ca_password->Text = L"Password";
			// 
			// accountPanel
			// 
			this->accountPanel->Controls->Add(this->accountOverview);
			this->accountPanel->Controls->Add(this->accountTickets);
			this->accountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accountPanel->Location = System::Drawing::Point(0, 0);
			this->accountPanel->Margin = System::Windows::Forms::Padding(0);
			this->accountPanel->Name = L"accountPanel";
			this->accountPanel->Size = System::Drawing::Size(2526, 1225);
			this->accountPanel->TabIndex = 7;
			this->accountPanel->Visible = false;
			// 
			// accountOverview
			// 
			this->accountOverview->Controls->Add(this->firstNameCurrent);
			this->accountOverview->Controls->Add(this->passwordCurrent);
			this->accountOverview->Controls->Add(this->passwordNew);
			this->accountOverview->Controls->Add(this->lastNameNew);
			this->accountOverview->Controls->Add(this->emailNew);
			this->accountOverview->Controls->Add(this->emailCurrent);
			this->accountOverview->Controls->Add(this->lastNameCurrent);
			this->accountOverview->Controls->Add(this->firstNameNew);
			this->accountOverview->Controls->Add(this->emailUpdate);
			this->accountOverview->Controls->Add(this->firstNameUpdate);
			this->accountOverview->Controls->Add(this->lastNameUpdate);
			this->accountOverview->Controls->Add(this->passwordUpdate);
			this->accountOverview->Dock = System::Windows::Forms::DockStyle::Left;
			this->accountOverview->Location = System::Drawing::Point(0, 0);
			this->accountOverview->Margin = System::Windows::Forms::Padding(0);
			this->accountOverview->Name = L"accountOverview";
			this->accountOverview->Size = System::Drawing::Size(843, 1225);
			this->accountOverview->TabIndex = 16;
			// 
			// firstNameCurrent
			// 
			this->firstNameCurrent->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->firstNameCurrent->AutoEllipsis = true;
			this->firstNameCurrent->Location = System::Drawing::Point(35, 80);
			this->firstNameCurrent->Margin = System::Windows::Forms::Padding(4);
			this->firstNameCurrent->Name = L"firstNameCurrent";
			this->firstNameCurrent->Size = System::Drawing::Size(604, 44);
			this->firstNameCurrent->TabIndex = 9;
			this->firstNameCurrent->Text = L"First Name: John";
			// 
			// passwordCurrent
			// 
			this->passwordCurrent->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->passwordCurrent->AutoEllipsis = true;
			this->passwordCurrent->Location = System::Drawing::Point(35, 453);
			this->passwordCurrent->Margin = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->passwordCurrent->Name = L"passwordCurrent";
			this->passwordCurrent->Size = System::Drawing::Size(604, 44);
			this->passwordCurrent->TabIndex = 4;
			this->passwordCurrent->Text = L"Password";
			// 
			// passwordNew
			// 
			this->passwordNew->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->passwordNew->Location = System::Drawing::Point(35, 501);
			this->passwordNew->Margin = System::Windows::Forms::Padding(4);
			this->passwordNew->Name = L"passwordNew";
			this->passwordNew->PasswordChar = '*';
			this->passwordNew->Size = System::Drawing::Size(604, 38);
			this->passwordNew->TabIndex = 5;
			// 
			// lastNameNew
			// 
			this->lastNameNew->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lastNameNew->Location = System::Drawing::Point(35, 245);
			this->lastNameNew->Margin = System::Windows::Forms::Padding(4);
			this->lastNameNew->MinimumSize = System::Drawing::Size(400, 4);
			this->lastNameNew->Name = L"lastNameNew";
			this->lastNameNew->Size = System::Drawing::Size(604, 38);
			this->lastNameNew->TabIndex = 14;
			// 
			// emailNew
			// 
			this->emailNew->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->emailNew->Location = System::Drawing::Point(35, 376);
			this->emailNew->Margin = System::Windows::Forms::Padding(4);
			this->emailNew->Name = L"emailNew";
			this->emailNew->Size = System::Drawing::Size(604, 38);
			this->emailNew->TabIndex = 1;
			// 
			// emailCurrent
			// 
			this->emailCurrent->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->emailCurrent->AutoEllipsis = true;
			this->emailCurrent->Location = System::Drawing::Point(35, 328);
			this->emailCurrent->Margin = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->emailCurrent->Name = L"emailCurrent";
			this->emailCurrent->Size = System::Drawing::Size(604, 44);
			this->emailCurrent->TabIndex = 0;
			this->emailCurrent->Text = L"Email: exampleuser@domain.com";
			// 
			// lastNameCurrent
			// 
			this->lastNameCurrent->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lastNameCurrent->AutoEllipsis = true;
			this->lastNameCurrent->Location = System::Drawing::Point(35, 197);
			this->lastNameCurrent->Margin = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->lastNameCurrent->Name = L"lastNameCurrent";
			this->lastNameCurrent->Size = System::Drawing::Size(604, 44);
			this->lastNameCurrent->TabIndex = 13;
			this->lastNameCurrent->Text = L"Last Name: Smith";
			// 
			// firstNameNew
			// 
			this->firstNameNew->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->firstNameNew->Location = System::Drawing::Point(35, 126);
			this->firstNameNew->Margin = System::Windows::Forms::Padding(480, 115, 480, 0);
			this->firstNameNew->MinimumSize = System::Drawing::Size(400, 23);
			this->firstNameNew->Name = L"firstNameNew";
			this->firstNameNew->Size = System::Drawing::Size(604, 38);
			this->firstNameNew->TabIndex = 10;
			// 
			// emailUpdate
			// 
			this->emailUpdate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->emailUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailUpdate->Location = System::Drawing::Point(683, 376);
			this->emailUpdate->Margin = System::Windows::Forms::Padding(4);
			this->emailUpdate->Name = L"emailUpdate";
			this->emailUpdate->Size = System::Drawing::Size(122, 38);
			this->emailUpdate->TabIndex = 2;
			this->emailUpdate->Text = L"Update";
			this->emailUpdate->UseVisualStyleBackColor = true;
			this->emailUpdate->Click += gcnew System::EventHandler(this, &Main::emailUpdate_Click);
			// 
			// firstNameUpdate
			// 
			this->firstNameUpdate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->firstNameUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->firstNameUpdate->Location = System::Drawing::Point(683, 128);
			this->firstNameUpdate->Margin = System::Windows::Forms::Padding(16, 15, 16, 15);
			this->firstNameUpdate->Name = L"firstNameUpdate";
			this->firstNameUpdate->Size = System::Drawing::Size(122, 38);
			this->firstNameUpdate->TabIndex = 11;
			this->firstNameUpdate->Text = L"Update";
			this->firstNameUpdate->UseVisualStyleBackColor = true;
			this->firstNameUpdate->Click += gcnew System::EventHandler(this, &Main::firstNameUpdate_Click);
			// 
			// lastNameUpdate
			// 
			this->lastNameUpdate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lastNameUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameUpdate->Location = System::Drawing::Point(683, 245);
			this->lastNameUpdate->Margin = System::Windows::Forms::Padding(4);
			this->lastNameUpdate->Name = L"lastNameUpdate";
			this->lastNameUpdate->Size = System::Drawing::Size(122, 38);
			this->lastNameUpdate->TabIndex = 15;
			this->lastNameUpdate->Text = L"Update";
			this->lastNameUpdate->UseVisualStyleBackColor = true;
			this->lastNameUpdate->Click += gcnew System::EventHandler(this, &Main::lastNameUpdate_Click);
			// 
			// passwordUpdate
			// 
			this->passwordUpdate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->passwordUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordUpdate->Location = System::Drawing::Point(683, 501);
			this->passwordUpdate->Margin = System::Windows::Forms::Padding(4);
			this->passwordUpdate->Name = L"passwordUpdate";
			this->passwordUpdate->Size = System::Drawing::Size(122, 38);
			this->passwordUpdate->TabIndex = 6;
			this->passwordUpdate->Text = L"Update";
			this->passwordUpdate->UseVisualStyleBackColor = true;
			this->passwordUpdate->Click += gcnew System::EventHandler(this, &Main::passwordUpdate_Click);
			// 
			// accountTickets
			// 
			this->accountTickets->Controls->Add(this->h_divider);
			this->accountTickets->Controls->Add(this->ticketsHeader);
			this->accountTickets->Controls->Add(this->t_divider);
			this->accountTickets->Controls->Add(this->ticketList);
			this->accountTickets->Dock = System::Windows::Forms::DockStyle::Right;
			this->accountTickets->Location = System::Drawing::Point(875, 0);
			this->accountTickets->Margin = System::Windows::Forms::Padding(0);
			this->accountTickets->Name = L"accountTickets";
			this->accountTickets->Size = System::Drawing::Size(1651, 1225);
			this->accountTickets->TabIndex = 0;
			// 
			// h_divider
			// 
			this->h_divider->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->h_divider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->h_divider->Location = System::Drawing::Point(0, 7);
			this->h_divider->Margin = System::Windows::Forms::Padding(0);
			this->h_divider->MaximumSize = System::Drawing::Size(2, 4000);
			this->h_divider->Name = L"h_divider";
			this->h_divider->Size = System::Drawing::Size(2, 1240);
			this->h_divider->TabIndex = 19;
			// 
			// ticketsHeader
			// 
			this->ticketsHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ticketsHeader->AutoScroll = true;
			this->ticketsHeader->ColumnCount = 4;
			this->ticketsHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->ticketsHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->ticketsHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->ticketsHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->ticketsHeader->Controls->Add(this->t_idHeader, 0, 0);
			this->ticketsHeader->Controls->Add(this->t_seatHeader, 1, 0);
			this->ticketsHeader->Controls->Add(this->t_destinationHeader, 2, 0);
			this->ticketsHeader->Controls->Add(this->t_departureHeader, 3, 0);
			this->ticketsHeader->Location = System::Drawing::Point(137, 0);
			this->ticketsHeader->Margin = System::Windows::Forms::Padding(0);
			this->ticketsHeader->Name = L"ticketsHeader";
			this->ticketsHeader->RowCount = 1;
			this->ticketsHeader->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->ticketsHeader->Size = System::Drawing::Size(1370, 46);
			this->ticketsHeader->TabIndex = 19;
			// 
			// t_idHeader
			// 
			this->t_idHeader->AutoSize = true;
			this->t_idHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_idHeader->Location = System::Drawing::Point(0, 0);
			this->t_idHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_idHeader->Name = L"t_idHeader";
			this->t_idHeader->Size = System::Drawing::Size(131, 36);
			this->t_idHeader->TabIndex = 0;
			this->t_idHeader->Text = L"Ticket ID";
			this->t_idHeader->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// t_seatHeader
			// 
			this->t_seatHeader->AutoSize = true;
			this->t_seatHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_seatHeader->Location = System::Drawing::Point(205, 0);
			this->t_seatHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_seatHeader->Name = L"t_seatHeader";
			this->t_seatHeader->Size = System::Drawing::Size(75, 36);
			this->t_seatHeader->TabIndex = 1;
			this->t_seatHeader->Text = L"Seat";
			this->t_seatHeader->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// t_destinationHeader
			// 
			this->t_destinationHeader->AutoSize = true;
			this->t_destinationHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->t_destinationHeader->Location = System::Drawing::Point(410, 0);
			this->t_destinationHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_destinationHeader->Name = L"t_destinationHeader";
			this->t_destinationHeader->Size = System::Drawing::Size(164, 36);
			this->t_destinationHeader->TabIndex = 2;
			this->t_destinationHeader->Text = L"Destination";
			this->t_destinationHeader->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// t_departureHeader
			// 
			this->t_departureHeader->AutoSize = true;
			this->t_departureHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->t_departureHeader->Location = System::Drawing::Point(889, 0);
			this->t_departureHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_departureHeader->Name = L"t_departureHeader";
			this->t_departureHeader->Size = System::Drawing::Size(218, 36);
			this->t_departureHeader->TabIndex = 3;
			this->t_departureHeader->Text = L"Departure Time";
			this->t_departureHeader->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// t_divider
			// 
			this->t_divider->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->t_divider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->t_divider->Location = System::Drawing::Point(137, 50);
			this->t_divider->Margin = System::Windows::Forms::Padding(0);
			this->t_divider->MaximumSize = System::Drawing::Size(4000, 2);
			this->t_divider->Name = L"t_divider";
			this->t_divider->Size = System::Drawing::Size(1368, 2);
			this->t_divider->TabIndex = 18;
			// 
			// ticketList
			// 
			this->ticketList->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ticketList->AutoScroll = true;
			this->ticketList->ColumnCount = 4;
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->ticketList->Location = System::Drawing::Point(137, 57);
			this->ticketList->Margin = System::Windows::Forms::Padding(0);
			this->ticketList->Name = L"ticketList";
			this->ticketList->RowCount = 1;
			this->ticketList->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->ticketList->Size = System::Drawing::Size(1370, 1150);
			this->ticketList->TabIndex = 17;
			// 
			// flightsTab
			// 
			this->flightsTab->Controls->Add(this->noAccount);
			this->flightsTab->Controls->Add(this->flights);
			this->flightsTab->Controls->Add(this->purchaseTicket);
			this->flightsTab->Location = System::Drawing::Point(4, 43);
			this->flightsTab->Margin = System::Windows::Forms::Padding(0);
			this->flightsTab->Name = L"flightsTab";
			this->flightsTab->Padding = System::Windows::Forms::Padding(0, 0, 0, 20);
			this->flightsTab->Size = System::Drawing::Size(2526, 1245);
			this->flightsTab->TabIndex = 1;
			this->flightsTab->Text = L"Flights";
			this->flightsTab->UseVisualStyleBackColor = true;
			// 
			// noAccount
			// 
			this->noAccount->Controls->Add(this->f_returnToAccount);
			this->noAccount->Controls->Add(this->f_accountWarning);
			this->noAccount->Dock = System::Windows::Forms::DockStyle::Fill;
			this->noAccount->Location = System::Drawing::Point(0, 0);
			this->noAccount->Margin = System::Windows::Forms::Padding(0);
			this->noAccount->Name = L"noAccount";
			this->noAccount->Size = System::Drawing::Size(2526, 1225);
			this->noAccount->TabIndex = 11;
			// 
			// f_returnToAccount
			// 
			this->f_returnToAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->f_returnToAccount->BackColor = System::Drawing::Color::Transparent;
			this->f_returnToAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_returnToAccount->Location = System::Drawing::Point(913, 646);
			this->f_returnToAccount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->f_returnToAccount->Name = L"f_returnToAccount";
			this->f_returnToAccount->Size = System::Drawing::Size(692, 75);
			this->f_returnToAccount->TabIndex = 1;
			this->f_returnToAccount->TabStop = true;
			this->f_returnToAccount->Text = L"Login";
			this->f_returnToAccount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->f_returnToAccount->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::f_returnToAccount_LinkClicked);
			// 
			// f_accountWarning
			// 
			this->f_accountWarning->Dock = System::Windows::Forms::DockStyle::Fill;
			this->f_accountWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_accountWarning->Location = System::Drawing::Point(0, 0);
			this->f_accountWarning->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->f_accountWarning->Name = L"f_accountWarning";
			this->f_accountWarning->Size = System::Drawing::Size(2526, 1225);
			this->f_accountWarning->TabIndex = 0;
			this->f_accountWarning->Text = L"You must login to view this page.";
			this->f_accountWarning->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flights
			// 
			this->flights->Controls->Add(this->h_divider2);
			this->flights->Controls->Add(this->destinationLabel);
			this->flights->Controls->Add(this->f_divider);
			this->flights->Controls->Add(this->maxTimeField);
			this->flights->Controls->Add(this->f_idHeader);
			this->flights->Controls->Add(this->minTimeField);
			this->flights->Controls->Add(this->f_departureHeader);
			this->flights->Controls->Add(this->minTimeLabel);
			this->flights->Controls->Add(this->f_destinationHeader);
			this->flights->Controls->Add(this->maxTimeLabel);
			this->flights->Controls->Add(this->f_occupancyHeader);
			this->flights->Controls->Add(this->departureTimeLabel);
			this->flights->Controls->Add(this->f_priceHeader);
			this->flights->Controls->Add(this->searchFlightsButton);
			this->flights->Controls->Add(this->destinationField);
			this->flights->Controls->Add(this->flightsList);
			this->flights->Location = System::Drawing::Point(0, 0);
			this->flights->Name = L"flights";
			this->flights->Size = System::Drawing::Size(1262, 1225);
			this->flights->TabIndex = 12;
			// 
			// h_divider2
			// 
			this->h_divider2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->h_divider2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->h_divider2->Location = System::Drawing::Point(1252, 0);
			this->h_divider2->Margin = System::Windows::Forms::Padding(0);
			this->h_divider2->MaximumSize = System::Drawing::Size(2, 4000);
			this->h_divider2->Name = L"h_divider2";
			this->h_divider2->Size = System::Drawing::Size(2, 1222);
			this->h_divider2->TabIndex = 20;
			// 
			// destinationLabel
			// 
			this->destinationLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->destinationLabel->Location = System::Drawing::Point(126, 0);
			this->destinationLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->destinationLabel->Name = L"destinationLabel";
			this->destinationLabel->Size = System::Drawing::Size(192, 37);
			this->destinationLabel->TabIndex = 6;
			this->destinationLabel->Text = L"Destination";
			this->destinationLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// f_divider
			// 
			this->f_divider->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_divider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f_divider->Location = System::Drawing::Point(30, 191);
			this->f_divider->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->f_divider->MaximumSize = System::Drawing::Size(4000, 2);
			this->f_divider->Name = L"f_divider";
			this->f_divider->Size = System::Drawing::Size(1200, 2);
			this->f_divider->TabIndex = 11;
			// 
			// maxTimeField
			// 
			this->maxTimeField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->maxTimeField->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->maxTimeField->Location = System::Drawing::Point(800, 87);
			this->maxTimeField->Margin = System::Windows::Forms::Padding(4);
			this->maxTimeField->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->maxTimeField->Name = L"maxTimeField";
			this->maxTimeField->Size = System::Drawing::Size(260, 38);
			this->maxTimeField->TabIndex = 1;
			// 
			// f_idHeader
			// 
			this->f_idHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_idHeader->Location = System::Drawing::Point(30, 144);
			this->f_idHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_idHeader->Name = L"f_idHeader";
			this->f_idHeader->Size = System::Drawing::Size(184, 46);
			this->f_idHeader->TabIndex = 0;
			this->f_idHeader->Text = L"Flight ID";
			// 
			// minTimeField
			// 
			this->minTimeField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->minTimeField->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->minTimeField->Location = System::Drawing::Point(496, 87);
			this->minTimeField->Margin = System::Windows::Forms::Padding(4);
			this->minTimeField->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->minTimeField->Name = L"minTimeField";
			this->minTimeField->Size = System::Drawing::Size(260, 38);
			this->minTimeField->TabIndex = 2;
			// 
			// f_departureHeader
			// 
			this->f_departureHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_departureHeader->Location = System::Drawing::Point(622, 144);
			this->f_departureHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_departureHeader->Name = L"f_departureHeader";
			this->f_departureHeader->Size = System::Drawing::Size(236, 46);
			this->f_departureHeader->TabIndex = 2;
			this->f_departureHeader->Text = L"Departure Time";
			// 
			// minTimeLabel
			// 
			this->minTimeLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->minTimeLabel->Location = System::Drawing::Point(496, 44);
			this->minTimeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minTimeLabel->Name = L"minTimeLabel";
			this->minTimeLabel->Size = System::Drawing::Size(260, 37);
			this->minTimeLabel->TabIndex = 3;
			this->minTimeLabel->Text = L"Earliest Date:";
			// 
			// f_destinationHeader
			// 
			this->f_destinationHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_destinationHeader->Location = System::Drawing::Point(212, 144);
			this->f_destinationHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_destinationHeader->Name = L"f_destinationHeader";
			this->f_destinationHeader->Size = System::Drawing::Size(410, 46);
			this->f_destinationHeader->TabIndex = 1;
			this->f_destinationHeader->Text = L"Destination";
			// 
			// maxTimeLabel
			// 
			this->maxTimeLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->maxTimeLabel->Location = System::Drawing::Point(800, 44);
			this->maxTimeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->maxTimeLabel->Name = L"maxTimeLabel";
			this->maxTimeLabel->Size = System::Drawing::Size(260, 37);
			this->maxTimeLabel->TabIndex = 4;
			this->maxTimeLabel->Text = L"Latest Date:";
			// 
			// f_occupancyHeader
			// 
			this->f_occupancyHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_occupancyHeader->Location = System::Drawing::Point(858, 144);
			this->f_occupancyHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_occupancyHeader->Name = L"f_occupancyHeader";
			this->f_occupancyHeader->Size = System::Drawing::Size(175, 46);
			this->f_occupancyHeader->TabIndex = 3;
			this->f_occupancyHeader->Text = L"Occupancy";
			// 
			// departureTimeLabel
			// 
			this->departureTimeLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->departureTimeLabel->Location = System::Drawing::Point(606, 0);
			this->departureTimeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->departureTimeLabel->Name = L"departureTimeLabel";
			this->departureTimeLabel->Size = System::Drawing::Size(368, 37);
			this->departureTimeLabel->TabIndex = 5;
			this->departureTimeLabel->Text = L"Departure Time Window";
			this->departureTimeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// f_priceHeader
			// 
			this->f_priceHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_priceHeader->Location = System::Drawing::Point(1033, 144);
			this->f_priceHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_priceHeader->Name = L"f_priceHeader";
			this->f_priceHeader->Size = System::Drawing::Size(139, 46);
			this->f_priceHeader->TabIndex = 4;
			this->f_priceHeader->Text = L"Price";
			// 
			// searchFlightsButton
			// 
			this->searchFlightsButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->searchFlightsButton->Location = System::Drawing::Point(1098, 87);
			this->searchFlightsButton->Margin = System::Windows::Forms::Padding(4);
			this->searchFlightsButton->Name = L"searchFlightsButton";
			this->searchFlightsButton->Size = System::Drawing::Size(132, 46);
			this->searchFlightsButton->TabIndex = 8;
			this->searchFlightsButton->Text = L"Search";
			this->searchFlightsButton->UseVisualStyleBackColor = true;
			this->searchFlightsButton->Click += gcnew System::EventHandler(this, &Main::searchFlightsButton_Click);
			// 
			// destinationField
			// 
			this->destinationField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->destinationField->FormattingEnabled = true;
			this->destinationField->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"New York City", L"Los Angeles", L"Chicago",
					L"Houston", L"Phoenix", L"Philadelphia", L"San Diego", L"Dallas", L"Austin", L"Washington DC", L"Boston", L"Las Vegas", L"Detroit",
					L"Baltimore", L"Kansas City", L"Atlanta", L"Miami", L"Milwaukee", L"Portland", L"Seattle", L"Indianapolis"
			});
			this->destinationField->Location = System::Drawing::Point(30, 85);
			this->destinationField->Margin = System::Windows::Forms::Padding(4);
			this->destinationField->Name = L"destinationField";
			this->destinationField->Size = System::Drawing::Size(394, 39);
			this->destinationField->TabIndex = 10;
			// 
			// flightsList
			// 
			this->flightsList->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->flightsList->AutoScroll = true;
			this->flightsList->AutoSize = true;
			this->flightsList->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->flightsList->ColumnCount = 6;
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->flightsList->Location = System::Drawing::Point(30, 197);
			this->flightsList->Margin = System::Windows::Forms::Padding(4);
			this->flightsList->MinimumSize = System::Drawing::Size(1200, 283);
			this->flightsList->Name = L"flightsList";
			this->flightsList->RowCount = 1;
			this->flightsList->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->flightsList->Size = System::Drawing::Size(1200, 1017);
			this->flightsList->TabIndex = 9;
			// 
			// purchaseTicket
			// 
			this->purchaseTicket->Controls->Add(this->totalPriceLabel);
			this->purchaseTicket->Controls->Add(this->discountLabel);
			this->purchaseTicket->Controls->Add(this->ticketQuantityLabel);
			this->purchaseTicket->Controls->Add(this->ticketPriceLabel);
			this->purchaseTicket->Controls->Add(this->submitPayment);
			this->purchaseTicket->Controls->Add(this->cvvLabel);
			this->purchaseTicket->Controls->Add(this->cvvField);
			this->purchaseTicket->Controls->Add(this->expDateLabel);
			this->purchaseTicket->Controls->Add(this->cardNumberLabel);
			this->purchaseTicket->Controls->Add(this->expDateField);
			this->purchaseTicket->Controls->Add(this->cardNumberField);
			this->purchaseTicket->Controls->Add(this->planeTable);
			this->purchaseTicket->Location = System::Drawing::Point(1262, 0);
			this->purchaseTicket->Name = L"purchaseTicket";
			this->purchaseTicket->Size = System::Drawing::Size(1264, 1225);
			this->purchaseTicket->TabIndex = 13;
			// 
			// totalPriceLabel
			// 
			this->totalPriceLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->totalPriceLabel->Location = System::Drawing::Point(781, 423);
			this->totalPriceLabel->Name = L"totalPriceLabel";
			this->totalPriceLabel->Size = System::Drawing::Size(402, 37);
			this->totalPriceLabel->TabIndex = 11;
			this->totalPriceLabel->Text = L"Total Price:";
			// 
			// discountLabel
			// 
			this->discountLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->discountLabel->Location = System::Drawing::Point(781, 366);
			this->discountLabel->Name = L"discountLabel";
			this->discountLabel->Size = System::Drawing::Size(402, 37);
			this->discountLabel->TabIndex = 10;
			this->discountLabel->Text = L"Discount:";
			// 
			// ticketQuantityLabel
			// 
			this->ticketQuantityLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ticketQuantityLabel->Location = System::Drawing::Point(781, 312);
			this->ticketQuantityLabel->Name = L"ticketQuantityLabel";
			this->ticketQuantityLabel->Size = System::Drawing::Size(402, 37);
			this->ticketQuantityLabel->TabIndex = 9;
			this->ticketQuantityLabel->Text = L"Tickets:";
			// 
			// ticketPriceLabel
			// 
			this->ticketPriceLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ticketPriceLabel->Location = System::Drawing::Point(781, 258);
			this->ticketPriceLabel->Name = L"ticketPriceLabel";
			this->ticketPriceLabel->Size = System::Drawing::Size(402, 37);
			this->ticketPriceLabel->TabIndex = 8;
			this->ticketPriceLabel->Text = L"Ticket Price:";
			// 
			// submitPayment
			// 
			this->submitPayment->Location = System::Drawing::Point(781, 782);
			this->submitPayment->Name = L"submitPayment";
			this->submitPayment->Size = System::Drawing::Size(402, 99);
			this->submitPayment->TabIndex = 7;
			this->submitPayment->Text = L"Pay Now";
			this->submitPayment->UseVisualStyleBackColor = true;
			// 
			// cvvLabel
			// 
			this->cvvLabel->Location = System::Drawing::Point(1046, 653);
			this->cvvLabel->Name = L"cvvLabel";
			this->cvvLabel->Size = System::Drawing::Size(137, 39);
			this->cvvLabel->TabIndex = 6;
			this->cvvLabel->Text = L"CVV";
			// 
			// cvvField
			// 
			this->cvvField->AllowPromptAsInput = false;
			this->cvvField->Location = System::Drawing::Point(1046, 695);
			this->cvvField->Mask = L"000";
			this->cvvField->Name = L"cvvField";
			this->cvvField->Size = System::Drawing::Size(137, 38);
			this->cvvField->TabIndex = 5;
			this->cvvField->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->cvvField->ValidatingType = System::DateTime::typeid;
			// 
			// expDateLabel
			// 
			this->expDateLabel->Location = System::Drawing::Point(781, 653);
			this->expDateLabel->Name = L"expDateLabel";
			this->expDateLabel->Size = System::Drawing::Size(240, 39);
			this->expDateLabel->TabIndex = 4;
			this->expDateLabel->Text = L"Expiration Date";
			// 
			// cardNumberLabel
			// 
			this->cardNumberLabel->Location = System::Drawing::Point(781, 547);
			this->cardNumberLabel->Name = L"cardNumberLabel";
			this->cardNumberLabel->Size = System::Drawing::Size(402, 39);
			this->cardNumberLabel->TabIndex = 3;
			this->cardNumberLabel->Text = L"Card Number";
			// 
			// expDateField
			// 
			this->expDateField->AllowPromptAsInput = false;
			this->expDateField->Location = System::Drawing::Point(781, 695);
			this->expDateField->Mask = L"00 / 00";
			this->expDateField->Name = L"expDateField";
			this->expDateField->Size = System::Drawing::Size(240, 38);
			this->expDateField->TabIndex = 2;
			this->expDateField->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->expDateField->ValidatingType = System::DateTime::typeid;
			// 
			// cardNumberField
			// 
			this->cardNumberField->AllowPromptAsInput = false;
			this->cardNumberField->Location = System::Drawing::Point(781, 589);
			this->cardNumberField->Mask = L"0000 0000 0000 0000";
			this->cardNumberField->Name = L"cardNumberField";
			this->cardNumberField->Size = System::Drawing::Size(402, 38);
			this->cardNumberField->TabIndex = 1;
			this->cardNumberField->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// planeTable
			// 
			this->planeTable->AutoScroll = true;
			this->planeTable->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->planeTable->ColumnCount = 7;
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->planeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->planeTable->Location = System::Drawing::Point(6, 3);
			this->planeTable->Name = L"planeTable";
			this->planeTable->RowCount = 2;
			this->planeTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->planeTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->planeTable->Size = System::Drawing::Size(683, 1211);
			this->planeTable->TabIndex = 0;
			// 
			// manageTab
			// 
			this->manageTab->Controls->Add(this->managerCreateAccount);
			this->manageTab->Controls->Add(this->manageModifyFlight);
			this->manageTab->Controls->Add(this->manageSearchFlights);
			this->manageTab->Location = System::Drawing::Point(4, 43);
			this->manageTab->Name = L"manageTab";
			this->manageTab->Size = System::Drawing::Size(2526, 1245);
			this->manageTab->TabIndex = 2;
			this->manageTab->Text = L"Manage";
			this->manageTab->UseVisualStyleBackColor = true;
			// 
			// managerCreateAccount
			// 
			this->managerCreateAccount->Controls->Add(this->h_divider3);
			this->managerCreateAccount->Controls->Add(this->accountTypeLabel);
			this->managerCreateAccount->Controls->Add(this->managerRadio);
			this->managerCreateAccount->Controls->Add(this->employeeRadio);
			this->managerCreateAccount->Controls->Add(this->customerRadio);
			this->managerCreateAccount->Controls->Add(this->manageFirstField);
			this->managerCreateAccount->Controls->Add(this->manageFirstLabel);
			this->managerCreateAccount->Controls->Add(this->manageSubmitAccount);
			this->managerCreateAccount->Controls->Add(this->manageEmailField);
			this->managerCreateAccount->Controls->Add(this->managePassField);
			this->managerCreateAccount->Controls->Add(this->manageCreateStatus);
			this->managerCreateAccount->Controls->Add(this->manageLastLabel);
			this->managerCreateAccount->Controls->Add(this->manageLastField);
			this->managerCreateAccount->Controls->Add(this->manageEmailLabel);
			this->managerCreateAccount->Controls->Add(this->managePassLabel);
			this->managerCreateAccount->Dock = System::Windows::Forms::DockStyle::Left;
			this->managerCreateAccount->Location = System::Drawing::Point(0, 0);
			this->managerCreateAccount->Margin = System::Windows::Forms::Padding(0);
			this->managerCreateAccount->Name = L"managerCreateAccount";
			this->managerCreateAccount->Padding = System::Windows::Forms::Padding(40, 38, 40, 38);
			this->managerCreateAccount->Size = System::Drawing::Size(781, 1245);
			this->managerCreateAccount->TabIndex = 8;
			// 
			// h_divider3
			// 
			this->h_divider3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->h_divider3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->h_divider3->Location = System::Drawing::Point(776, -18);
			this->h_divider3->Margin = System::Windows::Forms::Padding(0);
			this->h_divider3->MaximumSize = System::Drawing::Size(2, 4000);
			this->h_divider3->Name = L"h_divider3";
			this->h_divider3->Size = System::Drawing::Size(2, 1240);
			this->h_divider3->TabIndex = 21;
			// 
			// accountTypeLabel
			// 
			this->accountTypeLabel->Location = System::Drawing::Point(230, 48);
			this->accountTypeLabel->Name = L"accountTypeLabel";
			this->accountTypeLabel->Size = System::Drawing::Size(344, 40);
			this->accountTypeLabel->TabIndex = 20;
			this->accountTypeLabel->Text = L"Account Type";
			this->accountTypeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// managerRadio
			// 
			this->managerRadio->AutoSize = true;
			this->managerRadio->Location = System::Drawing::Point(561, 117);
			this->managerRadio->Name = L"managerRadio";
			this->managerRadio->Size = System::Drawing::Size(151, 35);
			this->managerRadio->TabIndex = 19;
			this->managerRadio->Text = L"Manager";
			this->managerRadio->UseVisualStyleBackColor = true;
			// 
			// employeeRadio
			// 
			this->employeeRadio->AutoSize = true;
			this->employeeRadio->Location = System::Drawing::Point(313, 117);
			this->employeeRadio->Name = L"employeeRadio";
			this->employeeRadio->Size = System::Drawing::Size(165, 35);
			this->employeeRadio->TabIndex = 18;
			this->employeeRadio->Text = L"Employee";
			this->employeeRadio->UseVisualStyleBackColor = true;
			// 
			// customerRadio
			// 
			this->customerRadio->AutoSize = true;
			this->customerRadio->Checked = true;
			this->customerRadio->Location = System::Drawing::Point(75, 117);
			this->customerRadio->Name = L"customerRadio";
			this->customerRadio->Size = System::Drawing::Size(163, 35);
			this->customerRadio->TabIndex = 17;
			this->customerRadio->TabStop = true;
			this->customerRadio->Text = L"Customer";
			this->customerRadio->UseVisualStyleBackColor = true;
			// 
			// manageFirstField
			// 
			this->manageFirstField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageFirstField->Location = System::Drawing::Point(87, 428);
			this->manageFirstField->Margin = System::Windows::Forms::Padding(4);
			this->manageFirstField->Name = L"manageFirstField";
			this->manageFirstField->Size = System::Drawing::Size(604, 38);
			this->manageFirstField->TabIndex = 5;
			// 
			// manageFirstLabel
			// 
			this->manageFirstLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageFirstLabel->Location = System::Drawing::Point(87, 380);
			this->manageFirstLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->manageFirstLabel->Name = L"manageFirstLabel";
			this->manageFirstLabel->Size = System::Drawing::Size(604, 44);
			this->manageFirstLabel->TabIndex = 14;
			this->manageFirstLabel->Text = L"First Name";
			// 
			// manageSubmitAccount
			// 
			this->manageSubmitAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageSubmitAccount->Location = System::Drawing::Point(229, 858);
			this->manageSubmitAccount->Margin = System::Windows::Forms::Padding(4);
			this->manageSubmitAccount->Name = L"manageSubmitAccount";
			this->manageSubmitAccount->Size = System::Drawing::Size(304, 54);
			this->manageSubmitAccount->TabIndex = 9;
			this->manageSubmitAccount->Text = L"Create Account";
			this->manageSubmitAccount->UseVisualStyleBackColor = true;
			this->manageSubmitAccount->Click += gcnew System::EventHandler(this, &Main::manageSubmitAccount_Click);
			// 
			// manageEmailField
			// 
			this->manageEmailField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageEmailField->Location = System::Drawing::Point(87, 649);
			this->manageEmailField->Margin = System::Windows::Forms::Padding(4);
			this->manageEmailField->Name = L"manageEmailField";
			this->manageEmailField->Size = System::Drawing::Size(604, 38);
			this->manageEmailField->TabIndex = 7;
			// 
			// managePassField
			// 
			this->managePassField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->managePassField->Location = System::Drawing::Point(87, 759);
			this->managePassField->Margin = System::Windows::Forms::Padding(4);
			this->managePassField->Name = L"managePassField";
			this->managePassField->PasswordChar = '*';
			this->managePassField->Size = System::Drawing::Size(604, 38);
			this->managePassField->TabIndex = 8;
			// 
			// manageCreateStatus
			// 
			this->manageCreateStatus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageCreateStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manageCreateStatus->Location = System::Drawing::Point(87, 916);
			this->manageCreateStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->manageCreateStatus->Name = L"manageCreateStatus";
			this->manageCreateStatus->Size = System::Drawing::Size(604, 98);
			this->manageCreateStatus->TabIndex = 11;
			this->manageCreateStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// manageLastLabel
			// 
			this->manageLastLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageLastLabel->Location = System::Drawing::Point(87, 489);
			this->manageLastLabel->Margin = System::Windows::Forms::Padding(4, 19, 4, 0);
			this->manageLastLabel->Name = L"manageLastLabel";
			this->manageLastLabel->Size = System::Drawing::Size(604, 44);
			this->manageLastLabel->TabIndex = 15;
			this->manageLastLabel->Text = L"Last Name";
			// 
			// manageLastField
			// 
			this->manageLastField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageLastField->Location = System::Drawing::Point(87, 538);
			this->manageLastField->Margin = System::Windows::Forms::Padding(4);
			this->manageLastField->Name = L"manageLastField";
			this->manageLastField->Size = System::Drawing::Size(604, 38);
			this->manageLastField->TabIndex = 6;
			// 
			// manageEmailLabel
			// 
			this->manageEmailLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->manageEmailLabel->Location = System::Drawing::Point(87, 601);
			this->manageEmailLabel->Margin = System::Windows::Forms::Padding(4, 19, 4, 0);
			this->manageEmailLabel->Name = L"manageEmailLabel";
			this->manageEmailLabel->Size = System::Drawing::Size(214, 44);
			this->manageEmailLabel->TabIndex = 9;
			this->manageEmailLabel->Text = L"Email";
			// 
			// managePassLabel
			// 
			this->managePassLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->managePassLabel->Location = System::Drawing::Point(87, 711);
			this->managePassLabel->Margin = System::Windows::Forms::Padding(4, 19, 4, 0);
			this->managePassLabel->Name = L"managePassLabel";
			this->managePassLabel->Size = System::Drawing::Size(214, 44);
			this->managePassLabel->TabIndex = 10;
			this->managePassLabel->Text = L"Password";
			// 
			// manageModifyFlight
			// 
			this->manageModifyFlight->Controls->Add(this->modifyPriceField);
			this->manageModifyFlight->Controls->Add(this->modifyPriceLabel);
			this->manageModifyFlight->Controls->Add(this->modifyColumnsField);
			this->manageModifyFlight->Controls->Add(this->modifyRowsField);
			this->manageModifyFlight->Controls->Add(this->modifyColumnsLabel);
			this->manageModifyFlight->Controls->Add(this->modifyRowsLabel);
			this->manageModifyFlight->Controls->Add(this->modifyCreate);
			this->manageModifyFlight->Controls->Add(this->modifyDelete);
			this->manageModifyFlight->Controls->Add(this->modifyUpdate);
			this->manageModifyFlight->Controls->Add(this->modifyDepartureField);
			this->manageModifyFlight->Controls->Add(this->modifyDepartureLabel);
			this->manageModifyFlight->Controls->Add(this->h_divider4);
			this->manageModifyFlight->Controls->Add(this->modifyDestinationField);
			this->manageModifyFlight->Controls->Add(this->modifyDestinationLabel);
			this->manageModifyFlight->Controls->Add(this->modifyIdField);
			this->manageModifyFlight->Controls->Add(this->modifyIdLabel);
			this->manageModifyFlight->Location = System::Drawing::Point(784, 3);
			this->manageModifyFlight->Name = L"manageModifyFlight";
			this->manageModifyFlight->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->manageModifyFlight->Size = System::Drawing::Size(445, 1246);
			this->manageModifyFlight->TabIndex = 14;
			// 
			// modifyPriceField
			// 
			this->modifyPriceField->Location = System::Drawing::Point(190, 419);
			this->modifyPriceField->Name = L"modifyPriceField";
			this->modifyPriceField->Size = System::Drawing::Size(242, 38);
			this->modifyPriceField->TabIndex = 33;
			// 
			// modifyPriceLabel
			// 
			this->modifyPriceLabel->Location = System::Drawing::Point(10, 419);
			this->modifyPriceLabel->Margin = System::Windows::Forms::Padding(10, 20, 3, 0);
			this->modifyPriceLabel->Name = L"modifyPriceLabel";
			this->modifyPriceLabel->Size = System::Drawing::Size(174, 37);
			this->modifyPriceLabel->TabIndex = 32;
			this->modifyPriceLabel->Text = L"Price          $";
			// 
			// modifyColumnsField
			// 
			this->modifyColumnsField->Location = System::Drawing::Point(279, 358);
			this->modifyColumnsField->Name = L"modifyColumnsField";
			this->modifyColumnsField->Size = System::Drawing::Size(67, 38);
			this->modifyColumnsField->TabIndex = 31;
			// 
			// modifyRowsField
			// 
			this->modifyRowsField->Location = System::Drawing::Point(96, 358);
			this->modifyRowsField->Name = L"modifyRowsField";
			this->modifyRowsField->Size = System::Drawing::Size(67, 38);
			this->modifyRowsField->TabIndex = 30;
			// 
			// modifyColumnsLabel
			// 
			this->modifyColumnsLabel->Location = System::Drawing::Point(241, 314);
			this->modifyColumnsLabel->Name = L"modifyColumnsLabel";
			this->modifyColumnsLabel->Size = System::Drawing::Size(146, 41);
			this->modifyColumnsLabel->TabIndex = 29;
			this->modifyColumnsLabel->Text = L"Columns";
			this->modifyColumnsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// modifyRowsLabel
			// 
			this->modifyRowsLabel->Location = System::Drawing::Point(77, 314);
			this->modifyRowsLabel->Name = L"modifyRowsLabel";
			this->modifyRowsLabel->Size = System::Drawing::Size(107, 41);
			this->modifyRowsLabel->TabIndex = 28;
			this->modifyRowsLabel->Text = L"Rows";
			this->modifyRowsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// modifyCreate
			// 
			this->modifyCreate->Location = System::Drawing::Point(117, 508);
			this->modifyCreate->Name = L"modifyCreate";
			this->modifyCreate->Size = System::Drawing::Size(211, 48);
			this->modifyCreate->TabIndex = 27;
			this->modifyCreate->Text = L"Create";
			this->modifyCreate->UseVisualStyleBackColor = true;
			this->modifyCreate->Click += gcnew System::EventHandler(this, &Main::modifyCreate_Click);
			// 
			// modifyDelete
			// 
			this->modifyDelete->Location = System::Drawing::Point(117, 663);
			this->modifyDelete->Name = L"modifyDelete";
			this->modifyDelete->Size = System::Drawing::Size(211, 48);
			this->modifyDelete->TabIndex = 26;
			this->modifyDelete->Text = L"Delete";
			this->modifyDelete->UseVisualStyleBackColor = true;
			this->modifyDelete->Click += gcnew System::EventHandler(this, &Main::managerDeleteFlight_Click);
			// 
			// modifyUpdate
			// 
			this->modifyUpdate->Location = System::Drawing::Point(117, 584);
			this->modifyUpdate->Name = L"modifyUpdate";
			this->modifyUpdate->Size = System::Drawing::Size(211, 48);
			this->modifyUpdate->TabIndex = 25;
			this->modifyUpdate->Text = L"Update";
			this->modifyUpdate->UseVisualStyleBackColor = true;
			this->modifyUpdate->Click += gcnew System::EventHandler(this, &Main::managerUpdateFlight_Click);
			// 
			// modifyDepartureField
			// 
			this->modifyDepartureField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->modifyDepartureField->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->modifyDepartureField->Location = System::Drawing::Point(190, 258);
			this->modifyDepartureField->Margin = System::Windows::Forms::Padding(4);
			this->modifyDepartureField->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->modifyDepartureField->Name = L"modifyDepartureField";
			this->modifyDepartureField->Size = System::Drawing::Size(242, 38);
			this->modifyDepartureField->TabIndex = 24;
			// 
			// modifyDepartureLabel
			// 
			this->modifyDepartureLabel->Location = System::Drawing::Point(10, 258);
			this->modifyDepartureLabel->Margin = System::Windows::Forms::Padding(10, 20, 3, 0);
			this->modifyDepartureLabel->Name = L"modifyDepartureLabel";
			this->modifyDepartureLabel->Size = System::Drawing::Size(174, 37);
			this->modifyDepartureLabel->TabIndex = 23;
			this->modifyDepartureLabel->Text = L"Departure";
			// 
			// h_divider4
			// 
			this->h_divider4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->h_divider4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->h_divider4->Location = System::Drawing::Point(441, 3);
			this->h_divider4->Margin = System::Windows::Forms::Padding(0);
			this->h_divider4->MaximumSize = System::Drawing::Size(2, 4000);
			this->h_divider4->Name = L"h_divider4";
			this->h_divider4->Size = System::Drawing::Size(2, 1240);
			this->h_divider4->TabIndex = 22;
			// 
			// modifyDestinationField
			// 
			this->modifyDestinationField->Location = System::Drawing::Point(190, 201);
			this->modifyDestinationField->Name = L"modifyDestinationField";
			this->modifyDestinationField->Size = System::Drawing::Size(242, 38);
			this->modifyDestinationField->TabIndex = 3;
			// 
			// modifyDestinationLabel
			// 
			this->modifyDestinationLabel->Location = System::Drawing::Point(10, 201);
			this->modifyDestinationLabel->Margin = System::Windows::Forms::Padding(10, 20, 3, 0);
			this->modifyDestinationLabel->Name = L"modifyDestinationLabel";
			this->modifyDestinationLabel->Size = System::Drawing::Size(174, 37);
			this->modifyDestinationLabel->TabIndex = 2;
			this->modifyDestinationLabel->Text = L"Destination";
			// 
			// modifyIdField
			// 
			this->modifyIdField->Location = System::Drawing::Point(197, 144);
			this->modifyIdField->Margin = System::Windows::Forms::Padding(10, 0, 3, 0);
			this->modifyIdField->Name = L"modifyIdField";
			this->modifyIdField->Size = System::Drawing::Size(235, 37);
			this->modifyIdField->TabIndex = 1;
			this->modifyIdField->Text = L"0";
			// 
			// modifyIdLabel
			// 
			this->modifyIdLabel->Location = System::Drawing::Point(10, 144);
			this->modifyIdLabel->Margin = System::Windows::Forms::Padding(10, 0, 3, 0);
			this->modifyIdLabel->Name = L"modifyIdLabel";
			this->modifyIdLabel->Size = System::Drawing::Size(174, 37);
			this->modifyIdLabel->TabIndex = 0;
			this->modifyIdLabel->Text = L"Flight ID";
			// 
			// manageSearchFlights
			// 
			this->manageSearchFlights->Controls->Add(this->label3);
			this->manageSearchFlights->Controls->Add(this->label4);
			this->manageSearchFlights->Controls->Add(this->manageMaxTime);
			this->manageSearchFlights->Controls->Add(this->label5);
			this->manageSearchFlights->Controls->Add(this->manageMinTime);
			this->manageSearchFlights->Controls->Add(this->label6);
			this->manageSearchFlights->Controls->Add(this->label7);
			this->manageSearchFlights->Controls->Add(this->label8);
			this->manageSearchFlights->Controls->Add(this->label9);
			this->manageSearchFlights->Controls->Add(this->label10);
			this->manageSearchFlights->Controls->Add(this->label11);
			this->manageSearchFlights->Controls->Add(this->label12);
			this->manageSearchFlights->Controls->Add(this->manageSearchFlightsButton);
			this->manageSearchFlights->Controls->Add(this->manageDestinationField);
			this->manageSearchFlights->Controls->Add(this->manageFlightsList);
			this->manageSearchFlights->Dock = System::Windows::Forms::DockStyle::Right;
			this->manageSearchFlights->Location = System::Drawing::Point(1221, 0);
			this->manageSearchFlights->Name = L"manageSearchFlights";
			this->manageSearchFlights->Size = System::Drawing::Size(1305, 1245);
			this->manageSearchFlights->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->Location = System::Drawing::Point(147, 0);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 37);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Destination";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(51, 191);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->MaximumSize = System::Drawing::Size(4000, 2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1200, 2);
			this->label4->TabIndex = 11;
			// 
			// manageMaxTime
			// 
			this->manageMaxTime->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->manageMaxTime->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->manageMaxTime->Location = System::Drawing::Point(821, 87);
			this->manageMaxTime->Margin = System::Windows::Forms::Padding(4);
			this->manageMaxTime->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->manageMaxTime->Name = L"manageMaxTime";
			this->manageMaxTime->Size = System::Drawing::Size(260, 38);
			this->manageMaxTime->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->Location = System::Drawing::Point(51, 144);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 46);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Flight ID";
			// 
			// manageMinTime
			// 
			this->manageMinTime->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->manageMinTime->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->manageMinTime->Location = System::Drawing::Point(517, 87);
			this->manageMinTime->Margin = System::Windows::Forms::Padding(4);
			this->manageMinTime->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->manageMinTime->Name = L"manageMinTime";
			this->manageMinTime->Size = System::Drawing::Size(260, 38);
			this->manageMinTime->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->Location = System::Drawing::Point(643, 144);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 46);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Departure Time";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->Location = System::Drawing::Point(517, 44);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(260, 37);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Earliest Date:";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->Location = System::Drawing::Point(233, 144);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(410, 46);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Destination";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->Location = System::Drawing::Point(821, 44);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(260, 37);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Latest Date:";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->Location = System::Drawing::Point(879, 144);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 46);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Occupancy";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->Location = System::Drawing::Point(627, 0);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(368, 37);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Departure Time Window";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->Location = System::Drawing::Point(1046, 144);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(147, 46);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Price";
			// 
			// manageSearchFlightsButton
			// 
			this->manageSearchFlightsButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->manageSearchFlightsButton->Location = System::Drawing::Point(1119, 87);
			this->manageSearchFlightsButton->Margin = System::Windows::Forms::Padding(4);
			this->manageSearchFlightsButton->Name = L"manageSearchFlightsButton";
			this->manageSearchFlightsButton->Size = System::Drawing::Size(132, 46);
			this->manageSearchFlightsButton->TabIndex = 8;
			this->manageSearchFlightsButton->Text = L"Search";
			this->manageSearchFlightsButton->UseVisualStyleBackColor = true;
			this->manageSearchFlightsButton->Click += gcnew System::EventHandler(this, &Main::managerSearchFlightsButton_Click);
			// 
			// manageDestinationField
			// 
			this->manageDestinationField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->manageDestinationField->FormattingEnabled = true;
			this->manageDestinationField->Items->AddRange(gcnew cli::array< System::Object^  >(22) {
				L"New York City", L"Los Angeles",
					L"Chicago", L"Houston", L"Phoenix", L"Philadelphia", L"San Diego", L"Dallas", L"Austin", L"Erie", L"Washington DC", L"Boston",
					L"Las Vegas", L"Detroit", L"Baltimore", L"Kansas City", L"Atlanta", L"Miami", L"Milwaukee", L"Portland", L"Seattle", L"Indianapolis"
			});
			this->manageDestinationField->Location = System::Drawing::Point(51, 85);
			this->manageDestinationField->Margin = System::Windows::Forms::Padding(4);
			this->manageDestinationField->Name = L"manageDestinationField";
			this->manageDestinationField->Size = System::Drawing::Size(394, 39);
			this->manageDestinationField->TabIndex = 10;
			// 
			// manageFlightsList
			// 
			this->manageFlightsList->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->manageFlightsList->AutoScroll = true;
			this->manageFlightsList->AutoSize = true;
			this->manageFlightsList->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->manageFlightsList->ColumnCount = 6;
			this->manageFlightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->manageFlightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->manageFlightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->manageFlightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->manageFlightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->manageFlightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->manageFlightsList->Location = System::Drawing::Point(51, 197);
			this->manageFlightsList->Margin = System::Windows::Forms::Padding(4);
			this->manageFlightsList->MinimumSize = System::Drawing::Size(1200, 283);
			this->manageFlightsList->Name = L"manageFlightsList";
			this->manageFlightsList->RowCount = 1;
			this->manageFlightsList->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->manageFlightsList->Size = System::Drawing::Size(1200, 1017);
			this->manageFlightsList->TabIndex = 9;
			// 
			// companyLogo
			// 
			this->companyLogo->BackColor = System::Drawing::SystemColors::HotTrack;
			this->companyLogo->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->companyLogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->companyLogo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->companyLogo->Location = System::Drawing::Point(0, 31);
			this->companyLogo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->companyLogo->Name = L"companyLogo";
			this->companyLogo->Size = System::Drawing::Size(2534, 69);
			this->companyLogo->TabIndex = 8;
			this->companyLogo->Text = L"Air-Books";
			this->companyLogo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// logoutButton
			// 
			this->logoutButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->logoutButton->Location = System::Drawing::Point(2352, 37);
			this->logoutButton->Margin = System::Windows::Forms::Padding(4);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(178, 60);
			this->logoutButton->TabIndex = 9;
			this->logoutButton->Text = L"Logout";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &Main::logoutButton_Click);
			// 
			// mainview
			// 
			this->mainview->Controls->Add(this->tabControl);
			this->mainview->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainview->Location = System::Drawing::Point(0, 0);
			this->mainview->Margin = System::Windows::Forms::Padding(6);
			this->mainview->Name = L"mainview";
			this->mainview->Padding = System::Windows::Forms::Padding(0, 0, 0, 77);
			this->mainview->Size = System::Drawing::Size(2534, 1369);
			this->mainview->TabIndex = 10;
			// 
			// bottomBar
			// 
			this->bottomBar->Controls->Add(this->logoutButton);
			this->bottomBar->Controls->Add(this->companyLogo);
			this->bottomBar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottomBar->Location = System::Drawing::Point(0, 1269);
			this->bottomBar->Margin = System::Windows::Forms::Padding(4);
			this->bottomBar->Name = L"bottomBar";
			this->bottomBar->Size = System::Drawing::Size(2534, 100);
			this->bottomBar->TabIndex = 8;
			// 
			// manageTabBuffer
			// 
			this->manageTabBuffer->Location = System::Drawing::Point(-100, -100);
			this->manageTabBuffer->Name = L"manageTabBuffer";
			this->manageTabBuffer->SelectedIndex = 0;
			this->manageTabBuffer->Size = System::Drawing::Size(0, 0);
			this->manageTabBuffer->TabIndex = 8;
			this->manageTabBuffer->Visible = false;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2534, 1369);
			this->Controls->Add(this->bottomBar);
			this->Controls->Add(this->mainview);
			this->Controls->Add(this->manageTabBuffer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(2560, 1440);
			this->MinimumSize = System::Drawing::Size(2560, 1440);
			this->Name = L"Main";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Login";
			this->tabControl->ResumeLayout(false);
			this->accountTab->ResumeLayout(false);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->createAccountPanel->ResumeLayout(false);
			this->createAccountPanel->PerformLayout();
			this->accountPanel->ResumeLayout(false);
			this->accountOverview->ResumeLayout(false);
			this->accountOverview->PerformLayout();
			this->accountTickets->ResumeLayout(false);
			this->ticketsHeader->ResumeLayout(false);
			this->ticketsHeader->PerformLayout();
			this->flightsTab->ResumeLayout(false);
			this->noAccount->ResumeLayout(false);
			this->flights->ResumeLayout(false);
			this->flights->PerformLayout();
			this->purchaseTicket->ResumeLayout(false);
			this->purchaseTicket->PerformLayout();
			this->manageTab->ResumeLayout(false);
			this->managerCreateAccount->ResumeLayout(false);
			this->managerCreateAccount->PerformLayout();
			this->manageModifyFlight->ResumeLayout(false);
			this->manageModifyFlight->PerformLayout();
			this->manageSearchFlights->ResumeLayout(false);
			this->manageSearchFlights->PerformLayout();
			this->mainview->ResumeLayout(false);
			this->bottomBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		User^ user;
		AirBooksDBHandler::DBHandler dbHandler;
		AirBooksDBHandler::Account^ account;
		double discount = 0.0;

		public: System::Void closeManageTab() {
			manageTab->Parent = manageTabBuffer;
		}

		private: System::Void openManageTab() {
			manageTab->Parent = tabControl;
		}


		private: System::Void logout() {
			if (user) {
				delete user;
			}
			showLogin();
			tabControl->SelectTab("accountTab");
			// hide flights and manage pages
			noAccount->Show();
			closeManageTab();
			// clear data
			destinationField->Text = "";
			minTimeField->Value = DateTime::Now;
			maxTimeField->Value = DateTime::Now;
			clearFlights();
		}
		
		//
		// Account navigators
		//
		// login navigation
		private: System::Void showLogin() {
			createAccountPanel->Hide();
			accountPanel->Hide();

			ln_emailField->Clear();
			ln_passwordField->Clear();
			loginStatus->Text = "";
			loginPanel->Show();
		}
		
		// create navigation
		private: System::Void showCreate() {
			loginPanel->Hide();
			accountPanel->Hide();

			ca_firstNameField->Clear();
			ca_lastNameField->Clear();
			ca_emailField->Clear();
			ca_passwordField->Clear();
			createAccountPanel->Show();
		}
		
		// account navigation
		private: System::Void showAccount() {
			loginPanel->Hide();
			createAccountPanel->Hide();

			firstNameNew->Clear();
			lastNameNew->Clear();
			emailNew->Clear();
			passwordNew->Clear();
			accountPanel->Show();
		}


		//
		// Bottom Bar
		//
		// user clicks logout
		private: System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
			logout();
		}


		//
		// Login Page
		// 
		// user clicks login button
		private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (ln_emailField->Text == "") {
				loginStatus->Text = "Error";
				return;
			}
			user = gcnew User(ln_emailField->Text, ln_passwordField->Text);
			if (user->authenticate()) {
				// success, login and switch to account view
				account = user->getAccount();

				if (account->accountType == 'c') {
					discount = 0.0;
				}
				else if (account->accountType == 'e') {
					discount = 0.1;
				}
				else if (account->accountType == 'm') {
					discount = 0.15;
				}

				if (account->accountType == 'm') {
					openManageTab();
				}
				firstNameCurrent->Text = "First Name: " + user->getName(1);
				lastNameCurrent->Text = "Last Name: " + user->getName(2);
				emailCurrent->Text = "Email: " + user->getEmail();
				showAccount();
				// unhide flights and tickets pages
				noAccount->Hide();
			}
			else {
				loginStatus->Text = "Error";
			}
		}
		// user clicks create new account link
		private: System::Void switchToCreate_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			showCreate();
		}


		//
		// Create Account Page
		//
		// user clicks create account button
		private: System::Void createAccountButton_Click(System::Object^ sender, System::EventArgs^ e) {
			user = gcnew User(ca_firstNameField->Text, ca_lastNameField->Text, ca_emailField->Text, ca_passwordField->Text, 'c');
			if (user->validateEmail()) {
				if (user->createUser()) {
					showLogin();
				}
				else {
					createAccountStatus->Text = "Error";
				}
			}
			else {
				createAccountStatus->Text = "Email in use";
			}
			
		}
		// user clicks login link
		private: System::Void switchToLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			showLogin();
		}


		//
		// Account Page
		//
		// user clicks update firstName
		private: System::Void firstNameUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
			user->setFirstName(firstNameNew->Text);
		}
		// user clicks update lastName
		private: System::Void lastNameUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
			user->setLastName(lastNameNew->Text);
		}
		// user clicks update email
		private: System::Void emailUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
			user->setEmail(emailNew->Text);
		}
		// user clicks update password
		private: System::Void passwordUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
			user->setPassword(passwordNew->Text);
		}
		// user clicks logout
		private: System::Void logoutButtonAux_Click(System::Object^ sender, System::EventArgs^ e) {
			logout();
		}
		
		private: System::Void postTicket(System::String^ ticketId, System::String^ seat, System::String^ destination, System::String^ departure) {
			System::Windows::Forms::Label^ idLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ stLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dsLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dpLabel = gcnew System::Windows::Forms::Label();


			idLabel->Text = ticketId;
			stLabel->Text = seat;
			dsLabel->Text = destination;
			dpLabel->Text = departure;


			idLabel->Dock = DockStyle::Top;
			stLabel->Dock = DockStyle::Top;
			dsLabel->Dock = DockStyle::Top;
			dpLabel->Dock = DockStyle::Top;

			ticketList->RowCount++;
			ticketList->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30.0));
			ticketList->Controls->Add(idLabel, 0, ticketList->RowCount - 1);
			ticketList->Controls->Add(stLabel, 1, ticketList->RowCount - 1);
			ticketList->Controls->Add(dsLabel, 2, ticketList->RowCount - 1);
			ticketList->Controls->Add(dpLabel, 3, ticketList->RowCount - 1);
		}

		private: System::Void clearTickets() {
			ticketList->Controls->Clear();
			ticketList->RowCount = 1;
		}

		// user enters account page
		private: System::Void accountTab_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (!user) {
				return;
			}
			// for each ticket, call the postTicket() function-
			// postTicket() returns nothing and takes in four managed strings (System::String^) as parameters.
			// The order of these parameters is ticketId, seat, destination, departureTime
			// postTicket() will take these arguments and post a new ticket entry on the ticket list.

			// wipes the list first
			clearTickets();

			AirBooksDBHandler::Ticket ticket;
			AirBooksDBHandler::Flight flight;
			System::String^ fID;
			System::String^ sID;

			// find all tickets for this user
			for (int i = 0; i < 1000; i++) {
				//Query database
				ticket = dbHandler.getTicket(user->getEmail(), i);

				if (ticket.flightID == -1) {
					return;
				}

				flight = dbHandler.getFlight(ticket.flightID);

				fID = marshal_as<System::String^>(std::to_string(ticket.flightID));
				sID = marshal_as<System::String^>(std::to_string(ticket.seatID));

				postTicket(fID, sID, flight.destination, flight.time.ToString());
			}
		}
		

		//
		// Flights Page
		//
		int currentSeatsSelected = 0;
		// user selects a seat
		private: System::Void selectSeat_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::CheckBox^ checkBox = (System::Windows::Forms::CheckBox^)sender;
			if (checkBox->Checked) {
				currentSeatsSelected++;
			}
			else {
				currentSeatsSelected--;
				if (currentSeatsSelected < 0) {
					currentSeatsSelected = 0;
				}
			}

			double price = std::stod(marshal_as<std::string>(ticketPriceLabel->Text));
			double total = price * currentSeatsSelected;
			total -= (total * discount);

			totalPriceLabel->Text = marshal_as<System::String^>(std::to_string(total));
			ticketQuantityLabel->Text = marshal_as<System::String^>(std::to_string(currentSeatsSelected));
		}

		private: System::Void postSeat(int col, int row, bool occupied) {
			System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();

			checkBox->Enabled = !occupied;
			checkBox->Click += gcnew System::EventHandler(this, &Main::selectSeat_Click);

			planeTable->Controls->Add(checkBox, col, row);
		}
		
		// user selects a flight
		private: System::Void selectFlight_Click(System::Object^ sender, System::EventArgs^ e) {
			clearSeats();

			System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^)sender;
			int flightId = (int)button->Tag;
			AirBooksDBHandler::Flight flight = dbHandler.getFlight(flightId);

			ticketQuantityLabel->Text = "0";
			ticketPriceLabel->Text = marshal_as<System::String^>(std::to_string(flight.price));
			discountLabel->Text = marshal_as<System::String^>(std::to_string((int)(100 * discount)) + "%");

			AirBooksDBHandler::Ticket ticket;

			int maxSize = flight.columns * flight.rows;
			int* occupiedSeats = new int[maxSize];
			int size = 0;

			// layout rows and columns
			planeTable->ColumnCount = flight.columns;
			planeTable->RowCount = flight.rows;

			TableLayoutColumnStyleCollection^ cols = planeTable->ColumnStyles;
			bool skip = true;
			for each (ColumnStyle^ col in cols) {
				if (skip) {
					skip = false;
					continue;
				}
				col->SizeType = SizeType::Percent;
				col->Width = 100.0 / (double)flight.columns;
			}
			TableLayoutRowStyleCollection^ rows = flightsList->RowStyles;
			skip = true;
			for each (RowStyle ^ row in rows) {
				if (skip) {
					skip = false;
					continue;
				}
				row->SizeType = SizeType::Percent;
				row->Height = 100.0 / (double)flight.rows;
			}

			// find all tickets for this flight
			for (int i = 0; i < 1000; i++) {
				ticket = dbHandler.getTicket(flightId, i);

				if (ticket.flightID == -1) {
					continue;
				}

				occupiedSeats[size] = ticket.seatID;
				size++;
				if (size >= maxSize) {
					break;
				}
			}

			// O(n^2) n == max seating
			// postSeat() for each seat on the flight
			TableLayoutControlCollection^ controls = planeTable->Controls;
			for (int c = 1; c < flight.columns; c++) {
				for (int r = 1; r < flight.rows; r++) {
					int cell = ((r - 1) * flight.columns) + c;

					bool occupied = false;
					for (int i = 0; i < size; i++) {
						if (occupiedSeats[i] == cell) {
							occupied = true;
							break;
						}
					}

					postSeat(c, r, occupied);
				}
			}
		}
		
		private: System::Void clearSeats() {
			planeTable->Controls->Clear();
		}

		private: System::Void postFlight(int flightId, System::String^ destination, System::String^ departure, System::String^ occupancy, double price) {
			if (flightId == -1) {
				return;
			}

			System::Windows::Forms::Label^ idLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dsLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dpLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ ocLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ prLabel = gcnew System::Windows::Forms::Label();

			System::Windows::Forms::Button^ selectButton = gcnew System::Windows::Forms::Button();

			std::stringstream stream;
			stream.precision(4);
			stream << price;

			System::String^ flightIdString = marshal_as<System::String^>(std::to_string(flightId));

			idLabel->Dock = DockStyle::Top;
			dsLabel->Dock = DockStyle::Top;
			dpLabel->Dock = DockStyle::Top;
			ocLabel->Dock = DockStyle::Top;
			prLabel->Dock = DockStyle::Top;
			selectButton->Dock = DockStyle::Top;

			idLabel->Text = flightIdString;
			dsLabel->Text = destination;
			dpLabel->Text = departure;
			ocLabel->Text = occupancy;
			prLabel->Text = marshal_as<System::String^>('$' + stream.str());
			selectButton->Text = "";

			idLabel->AutoEllipsis = true;
			dsLabel->AutoEllipsis = true;
			dpLabel->AutoEllipsis = true;
			ocLabel->AutoEllipsis = true;
			prLabel->AutoEllipsis = true;

			selectButton->Tag = flightId;
			selectButton->Click += gcnew System::EventHandler(this, &Main::selectFlight_Click);

			flightsList->RowCount++;
			flightsList->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 28.0));
			flightsList->Controls->Add(idLabel, 0, flightsList->RowCount - 1);
			flightsList->Controls->Add(dsLabel, 1, flightsList->RowCount - 1);
			flightsList->Controls->Add(dpLabel, 2, flightsList->RowCount - 1);
			flightsList->Controls->Add(ocLabel, 3, flightsList->RowCount - 1);
			flightsList->Controls->Add(prLabel, 4, flightsList->RowCount - 1);
			flightsList->Controls->Add(selectButton, 5, flightsList->RowCount - 1);
		}

		private: System::Void clearFlights() {
			flightsList->Controls->Clear();
			flightsList->RowCount = 1;
		}

		// user clicks search button
		private: System::Void searchFlightsButton_Click(System::Object^ sender, System::EventArgs^ e) {
			// wipes the list first
			clearFlights();
			TableLayoutRowStyleCollection^ rows = flightsList->RowStyles;
			for each (RowStyle^ row in rows) {
				row->Height = 0;
			}

			// user-defined search criteria
			System::String^ destination = destinationField->Text;
			System::DateTime minDate = minTimeField->Value;
			System::DateTime maxDate = maxTimeField->Value;

			// for each flight, call the postFlight() function-
			// postFlight() returns nothing and takes in one int, three managed strings (System::String^), and one double as parameters.
			// The order of these parameters is flightId, destination, departureDate, availableSeating, pricePerTicket
			// postFlight() will take these arguments and post a new flight entry on the flight list.

			// in the event you need to convert an unmanaged string (std::string) into a managed string (System::String^)
			// for use in the postFlight() function, here is how you would do so:
			// System::String^ managed = marshal_as<System::String^>(unmanaged);
			// where (unmanaged) is the std::string to be converted.
	
			for (int i = 0; i < 1000; i++) {
				AirBooksDBHandler::Flight flight;

				//Query database for flight
				flight = dbHandler.getFlight(destination, minDate, maxDate, i);
				if (flight.flightID == -1) {
					return;
				}

				//Query database for number of tickets currently booked in flight
				int booked = dbHandler.getOccupancy(flight.flightID);
				int seats = (flight.columns * flight.rows) - booked;
				
				postFlight(flight.flightID, flight.destination, flight.time.ToString(), booked.ToString(), double(flight.price));
			}
		}

		// user returns to login screen
		private: System::Void f_returnToAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			logout();
		}

		//
		// Manager Page
		//
		// manager creates new flight
		private: System::Void modifyCreate_Click(System::Object^ sender, System::EventArgs^ e) {
			int flightId = dbHandler.findNewFlightID();
			System::DateTime time = modifyDepartureField->Value;
			System::String^ destination = modifyDestinationField->Text;
			int rows = std::stoi(marshal_as<std::string>(modifyRowsField->Text));
			int cols = std::stoi(marshal_as<std::string>(modifyColumnsField->Text));
			double price = std::stod(marshal_as<std::string>(modifyPriceField->Text));
			AirBooksDBHandler::Flight^ flight = gcnew AirBooksDBHandler::Flight(flightId, time, destination, rows, cols, price, 0.0, 0.0);

			if (dbHandler.addFlight((AirBooksDBHandler::Flight)flight)) {
				modifyIdField->Text = marshal_as<System::String^>(std::to_string(flightId));
			}
			else {
				modifyIdField->Text = "ERROR";
			}
		}

		// manager updates flight
		private: System::Void managerUpdateFlight_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^)sender;
			int flightId = (int)button->Tag;
			AirBooksDBHandler::Flight flight = dbHandler.getFlight(flightId);

			flight.destination = modifyDestinationField->Text;
			flight.time = modifyDepartureField->Value;
			flight.rows = std::stoi(marshal_as<std::string>(modifyRowsField->Text));
			flight.columns = std::stoi(marshal_as<std::string>(modifyColumnsField->Text));
			flight.price = std::stod(marshal_as<std::string>(modifyPriceField->Text));

			dbHandler.cancelFlight(flightId);
			dbHandler.addFlight(flight);

			managerSearchFlightsButton_Click(sender, e);
		}

		// manager cancels a flight
		private: System::Void managerDeleteFlight_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^)sender;
			int flightId = (int)button->Tag;

			dbHandler.cancelFlight(flightId);

			modifyIdLabel->Text = "0";
			modifyDestinationLabel->Text = "";

			managerSearchFlightsButton_Click(sender, e);
		}

		// manager selects a flight
		private: System::Void managerSelectFlight_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^)sender;
			int flightId = (int)button->Tag;
			AirBooksDBHandler::Flight flight = dbHandler.getFlight(flightId);

			modifyIdLabel->Text = marshal_as<System::String^>(std::to_string(flightId));
			modifyDestinationLabel->Text = flight.destination;
			modifyDepartureField->Value = flight.time;

			modifyUpdate->Tag = flightId;
			modifyDelete->Tag = flightId;
		}
		private: System::Void managerPostFlight(int flightId, System::String^ destination, System::String^ departure, System::String^ occupancy, double price) {
			if (flightId == -1) {
				return;
			}

			System::Windows::Forms::Label^ idLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dsLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dpLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ ocLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ prLabel = gcnew System::Windows::Forms::Label();

			System::Windows::Forms::Button^ selectButton = gcnew System::Windows::Forms::Button();

			std::stringstream stream;
			stream.precision(4);
			stream << price;

			System::String^ flightIdString = marshal_as<System::String^>(std::to_string(flightId));
			/*
			idLabel->Dock = DockStyle::Top;
			dsLabel->Dock = DockStyle::Top;
			dpLabel->Dock = DockStyle::Top;
			ocLabel->Dock = DockStyle::Top;
			prLabel->Dock = DockStyle::Top;
			selectButton->Dock = DockStyle::Top;*/

			idLabel->Text = flightIdString;
			dsLabel->Text = destination;
			dpLabel->Text = departure;
			ocLabel->Text = occupancy;
			prLabel->Text = marshal_as<System::String^>('$' + stream.str());
			selectButton->Text = "";

			idLabel->AutoEllipsis = true;
			dsLabel->AutoEllipsis = true;
			dpLabel->AutoEllipsis = true;
			ocLabel->AutoEllipsis = true;
			prLabel->AutoEllipsis = true;

			selectButton->Tag = flightId;
			selectButton->Click += gcnew System::EventHandler(this, &Main::managerSelectFlight_Click);

			manageFlightsList->RowCount++;
			manageFlightsList->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 28.0));
			manageFlightsList->Controls->Add(idLabel, 0, manageFlightsList->RowCount - 1);
			manageFlightsList->Controls->Add(dsLabel, 1, manageFlightsList->RowCount - 1);
			manageFlightsList->Controls->Add(dpLabel, 2, manageFlightsList->RowCount - 1);
			manageFlightsList->Controls->Add(ocLabel, 3, manageFlightsList->RowCount - 1);
			manageFlightsList->Controls->Add(prLabel, 4, manageFlightsList->RowCount - 1);
			manageFlightsList->Controls->Add(selectButton, 5, manageFlightsList->RowCount - 1);
		}

		private: System::Void managerClearFlights() {
			manageFlightsList->Controls->Clear();
			manageFlightsList->RowCount = 1;
		}

		// manager clicks search button
		private: System::Void managerSearchFlightsButton_Click(System::Object^ sender, System::EventArgs^ e) {
			// wipes the list first
			managerClearFlights();
			TableLayoutRowStyleCollection^ rows = manageFlightsList->RowStyles;
			for each (RowStyle ^ row in rows) {
				row->Height = 0;
			}

			// user-defined search criteria
			System::String^ destination = manageDestinationField->Text;
			System::DateTime minDate = manageMinTime->Value;
			System::DateTime maxDate = manageMaxTime->Value;

			// for each flight, call the postFlight() function-
			// postFlight() returns nothing and takes in one int, three managed strings (System::String^), and one double as parameters.
			// The order of these parameters is flightId, destination, departureDate, availableSeating, pricePerTicket
			// postFlight() will take these arguments and post a new flight entry on the flight list.

			// in the event you need to convert an unmanaged string (std::string) into a managed string (System::String^)
			// for use in the postFlight() function, here is how you would do so:
			// System::String^ managed = marshal_as<System::String^>(unmanaged);
			// where (unmanaged) is the std::string to be converted.

			for (int i = 0; i < 10; i++) {
				AirBooksDBHandler::Flight flight;

				//Query database for flight
				flight = dbHandler.getFlight(destination, minDate, maxDate, i);

				if (flight.flightID == -1) {
					System::Console::WriteLine("End of list");
					return;
				}

				//Query database for number of tickets currently booked in flight
				int booked = dbHandler.getOccupancy(flight.flightID);
				int seats = (flight.columns * flight.rows) - booked;
			
				managerPostFlight(flight.flightID, flight.destination, flight.time.ToString(), booked.ToString(), double(flight.price));
			}
		}

		// manager creates new account
		private: System::Void manageSubmitAccount_Click(System::Object^ sender, System::EventArgs^ e) {
			char accType;
			if (customerRadio->Checked) {
				accType = 'c';
			}
			else if (employeeRadio->Checked) {
				accType = 'e';
			}
			else if (managerRadio->Checked) {
				accType = 'm';
			}

			User^ newUser = gcnew User(manageFirstField->Text, manageLastField->Text, manageEmailField->Text, managePassField->Text, accType);
			if (newUser->validateEmail()) {
				if (newUser->createUser()) {
					manageCreateStatus->Text = "Success";
				}
				else {
					manageCreateStatus->Text = "Error";
				}				
			}
			else {
				manageCreateStatus->Text = "Email in use";
			}
		}

};
}
