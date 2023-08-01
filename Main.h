#pragma once
#include "Account.h"
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
	private: System::Windows::Forms::TabPage^ ticketsTab;
	private: System::Windows::Forms::Label^ companyLogo;

	private: System::Windows::Forms::Panel^ loginPanel;
	private: System::Windows::Forms::Panel^ accountPanel;

	private: System::Windows::Forms::Button^ passwordUpdate;

	private: System::Windows::Forms::TextBox^ passwordNew;

	private: System::Windows::Forms::Label^ passwordCurrent;

	private: System::Windows::Forms::Button^ emailUpdate;
	private: System::Windows::Forms::TextBox^ emailNew;
	private: System::Windows::Forms::Label^ emailCurrent;
	private: System::Windows::Forms::Button^ logoutButtonAux;
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
	private: System::Windows::Forms::TableLayoutPanel^ ticketList;
	private: System::Windows::Forms::Label^ t_seatHeader;
	private: System::Windows::Forms::Label^ t_departureHeader;

	private: System::Windows::Forms::Label^ t_destinationHeader;

	private: System::Windows::Forms::Label^ t_idHeader;

	private: System::Windows::Forms::Panel^ mainview;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ bottomBar;
	private: System::Windows::Forms::Panel^ f_noAccount;
	private: System::Windows::Forms::Panel^ t_noAccount;
	private: System::Windows::Forms::LinkLabel^ f_returnToAccount;
	private: System::Windows::Forms::Label^ f_accountWarning;
	private: System::Windows::Forms::LinkLabel^ t_returnToAccount;
	private: System::Windows::Forms::Label^ t_accountWarning;
	private: System::Windows::Forms::Label^ f_priceHeader;
private: System::Windows::Forms::Label^ f_divider;
private: System::Windows::Forms::Label^ t_divider;


	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->accountTab = (gcnew System::Windows::Forms::TabPage());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ln_emailField = (gcnew System::Windows::Forms::TextBox());
			this->switchToCreate = (gcnew System::Windows::Forms::LinkLabel());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->ln_passwordField = (gcnew System::Windows::Forms::TextBox());
			this->loginStatus = (gcnew System::Windows::Forms::Label());
			this->ln_email = (gcnew System::Windows::Forms::Label());
			this->ln_password = (gcnew System::Windows::Forms::Label());
			this->createAccountPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ca_firstNameField = (gcnew System::Windows::Forms::TextBox());
			this->switchToLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->createAccountButton = (gcnew System::Windows::Forms::Button());
			this->ca_passwordField = (gcnew System::Windows::Forms::TextBox());
			this->ca_lastName = (gcnew System::Windows::Forms::Label());
			this->ca_email = (gcnew System::Windows::Forms::Label());
			this->ca_firstName = (gcnew System::Windows::Forms::Label());
			this->ca_password = (gcnew System::Windows::Forms::Label());
			this->ca_lastNameField = (gcnew System::Windows::Forms::TextBox());
			this->createAccountStatus = (gcnew System::Windows::Forms::Label());
			this->ca_emailField = (gcnew System::Windows::Forms::TextBox());
			this->accountPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->firstNameCurrent = (gcnew System::Windows::Forms::Label());
			this->emailCurrent = (gcnew System::Windows::Forms::Label());
			this->lastNameUpdate = (gcnew System::Windows::Forms::Button());
			this->emailNew = (gcnew System::Windows::Forms::TextBox());
			this->lastNameNew = (gcnew System::Windows::Forms::TextBox());
			this->emailUpdate = (gcnew System::Windows::Forms::Button());
			this->lastNameCurrent = (gcnew System::Windows::Forms::Label());
			this->passwordCurrent = (gcnew System::Windows::Forms::Label());
			this->firstNameUpdate = (gcnew System::Windows::Forms::Button());
			this->passwordNew = (gcnew System::Windows::Forms::TextBox());
			this->firstNameNew = (gcnew System::Windows::Forms::TextBox());
			this->passwordUpdate = (gcnew System::Windows::Forms::Button());
			this->logoutButtonAux = (gcnew System::Windows::Forms::Button());
			this->flightsTab = (gcnew System::Windows::Forms::TabPage());
			this->f_divider = (gcnew System::Windows::Forms::Label());
			this->f_idHeader = (gcnew System::Windows::Forms::Label());
			this->f_departureHeader = (gcnew System::Windows::Forms::Label());
			this->f_destinationHeader = (gcnew System::Windows::Forms::Label());
			this->f_occupancyHeader = (gcnew System::Windows::Forms::Label());
			this->f_priceHeader = (gcnew System::Windows::Forms::Label());
			this->destinationField = (gcnew System::Windows::Forms::ComboBox());
			this->flightsList = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchFlightsButton = (gcnew System::Windows::Forms::Button());
			this->destinationLabel = (gcnew System::Windows::Forms::Label());
			this->departureTimeLabel = (gcnew System::Windows::Forms::Label());
			this->maxTimeLabel = (gcnew System::Windows::Forms::Label());
			this->minTimeLabel = (gcnew System::Windows::Forms::Label());
			this->minTimeField = (gcnew System::Windows::Forms::DateTimePicker());
			this->maxTimeField = (gcnew System::Windows::Forms::DateTimePicker());
			this->ticketsTab = (gcnew System::Windows::Forms::TabPage());
			this->f_noAccount = (gcnew System::Windows::Forms::Panel());
			this->f_returnToAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->f_accountWarning = (gcnew System::Windows::Forms::Label());
			this->t_noAccount = (gcnew System::Windows::Forms::Panel());
			this->t_returnToAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->t_accountWarning = (gcnew System::Windows::Forms::Label());
			this->ticketList = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->t_seatHeader = (gcnew System::Windows::Forms::Label());
			this->t_departureHeader = (gcnew System::Windows::Forms::Label());
			this->t_destinationHeader = (gcnew System::Windows::Forms::Label());
			this->t_idHeader = (gcnew System::Windows::Forms::Label());
			this->companyLogo = (gcnew System::Windows::Forms::Label());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->mainview = (gcnew System::Windows::Forms::Panel());
			this->bottomBar = (gcnew System::Windows::Forms::Panel());
			this->t_divider = (gcnew System::Windows::Forms::Label());
			this->tabControl->SuspendLayout();
			this->accountTab->SuspendLayout();
			this->loginPanel->SuspendLayout();
			this->panel3->SuspendLayout();
			this->createAccountPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->accountPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->flightsTab->SuspendLayout();
			this->ticketsTab->SuspendLayout();
			this->f_noAccount->SuspendLayout();
			this->t_noAccount->SuspendLayout();
			this->mainview->SuspendLayout();
			this->bottomBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl->Controls->Add(this->accountTab);
			this->tabControl->Controls->Add(this->flightsTab);
			this->tabControl->Controls->Add(this->ticketsTab);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Margin = System::Windows::Forms::Padding(0, 0, 0, 192);
			this->tabControl->Name = L"tabControl";
			this->tabControl->Padding = System::Drawing::Point(30, 3);
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1254, 932);
			this->tabControl->TabIndex = 7;
			// 
			// accountTab
			// 
			this->accountTab->Controls->Add(this->loginPanel);
			this->accountTab->Controls->Add(this->createAccountPanel);
			this->accountTab->Controls->Add(this->accountPanel);
			this->accountTab->Location = System::Drawing::Point(4, 43);
			this->accountTab->Margin = System::Windows::Forms::Padding(8);
			this->accountTab->Name = L"accountTab";
			this->accountTab->Padding = System::Windows::Forms::Padding(16, 15, 16, 15);
			this->accountTab->Size = System::Drawing::Size(1246, 885);
			this->accountTab->TabIndex = 0;
			this->accountTab->Text = L"Account";
			this->accountTab->UseVisualStyleBackColor = true;
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->panel3);
			this->loginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginPanel->Location = System::Drawing::Point(16, 15);
			this->loginPanel->Margin = System::Windows::Forms::Padding(4);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Padding = System::Windows::Forms::Padding(40, 38, 40, 38);
			this->loginPanel->Size = System::Drawing::Size(1214, 855);
			this->loginPanel->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->ln_emailField);
			this->panel3->Controls->Add(this->switchToCreate);
			this->panel3->Controls->Add(this->loginButton);
			this->panel3->Controls->Add(this->ln_passwordField);
			this->panel3->Controls->Add(this->loginStatus);
			this->panel3->Controls->Add(this->ln_email);
			this->panel3->Controls->Add(this->ln_password);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(40, 38);
			this->panel3->Margin = System::Windows::Forms::Padding(6);
			this->panel3->Name = L"panel3";
			this->panel3->Padding = System::Windows::Forms::Padding(800, 192, 800, 0);
			this->panel3->Size = System::Drawing::Size(1134, 779);
			this->panel3->TabIndex = 8;
			// 
			// ln_emailField
			// 
			this->ln_emailField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_emailField->Location = System::Drawing::Point(269, 169);
			this->ln_emailField->Margin = System::Windows::Forms::Padding(4);
			this->ln_emailField->MinimumSize = System::Drawing::Size(400, 23);
			this->ln_emailField->Name = L"ln_emailField";
			this->ln_emailField->Size = System::Drawing::Size(596, 38);
			this->ln_emailField->TabIndex = 0;
			// 
			// switchToCreate
			// 
			this->switchToCreate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->switchToCreate->Location = System::Drawing::Point(369, 455);
			this->switchToCreate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->switchToCreate->Name = L"switchToCreate";
			this->switchToCreate->Size = System::Drawing::Size(404, 52);
			this->switchToCreate->TabIndex = 7;
			this->switchToCreate->TabStop = true;
			this->switchToCreate->Text = L"I don\'t have an account";
			this->switchToCreate->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->switchToCreate->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::switchToCreate_LinkClicked);
			// 
			// loginButton
			// 
			this->loginButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loginButton->Location = System::Drawing::Point(369, 517);
			this->loginButton->Margin = System::Windows::Forms::Padding(4);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(396, 100);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &Main::loginButton_Click);
			// 
			// ln_passwordField
			// 
			this->ln_passwordField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_passwordField->Location = System::Drawing::Point(269, 318);
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
			this->loginStatus->Location = System::Drawing::Point(369, 649);
			this->loginStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->loginStatus->Name = L"loginStatus";
			this->loginStatus->Size = System::Drawing::Size(396, 98);
			this->loginStatus->TabIndex = 6;
			this->loginStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ln_email
			// 
			this->ln_email->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_email->Location = System::Drawing::Point(269, 121);
			this->ln_email->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ln_email->Name = L"ln_email";
			this->ln_email->Size = System::Drawing::Size(174, 44);
			this->ln_email->TabIndex = 4;
			this->ln_email->Text = L"Email";
			// 
			// ln_password
			// 
			this->ln_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln_password->Location = System::Drawing::Point(269, 270);
			this->ln_password->Margin = System::Windows::Forms::Padding(4, 38, 4, 0);
			this->ln_password->Name = L"ln_password";
			this->ln_password->Size = System::Drawing::Size(174, 44);
			this->ln_password->TabIndex = 5;
			this->ln_password->Text = L"Password";
			// 
			// createAccountPanel
			// 
			this->createAccountPanel->Controls->Add(this->panel2);
			this->createAccountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createAccountPanel->Location = System::Drawing::Point(16, 15);
			this->createAccountPanel->Margin = System::Windows::Forms::Padding(4);
			this->createAccountPanel->Name = L"createAccountPanel";
			this->createAccountPanel->Padding = System::Windows::Forms::Padding(40, 38, 40, 38);
			this->createAccountPanel->Size = System::Drawing::Size(1214, 855);
			this->createAccountPanel->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ca_firstNameField);
			this->panel2->Controls->Add(this->switchToLogin);
			this->panel2->Controls->Add(this->createAccountButton);
			this->panel2->Controls->Add(this->ca_passwordField);
			this->panel2->Controls->Add(this->ca_lastName);
			this->panel2->Controls->Add(this->ca_email);
			this->panel2->Controls->Add(this->ca_firstName);
			this->panel2->Controls->Add(this->ca_password);
			this->panel2->Controls->Add(this->ca_lastNameField);
			this->panel2->Controls->Add(this->createAccountStatus);
			this->panel2->Controls->Add(this->ca_emailField);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(40, 38);
			this->panel2->Margin = System::Windows::Forms::Padding(6);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(800, 120, 800, 0);
			this->panel2->Size = System::Drawing::Size(1134, 779);
			this->panel2->TabIndex = 17;
			// 
			// ca_firstNameField
			// 
			this->ca_firstNameField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_firstNameField->Location = System::Drawing::Point(265, 85);
			this->ca_firstNameField->Margin = System::Windows::Forms::Padding(4);
			this->ca_firstNameField->Name = L"ca_firstNameField";
			this->ca_firstNameField->Size = System::Drawing::Size(604, 38);
			this->ca_firstNameField->TabIndex = 12;
			// 
			// switchToLogin
			// 
			this->switchToLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->switchToLogin->Location = System::Drawing::Point(265, 548);
			this->switchToLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 19);
			this->switchToLogin->Name = L"switchToLogin";
			this->switchToLogin->Size = System::Drawing::Size(604, 37);
			this->switchToLogin->TabIndex = 16;
			this->switchToLogin->TabStop = true;
			this->switchToLogin->Text = L"I already have an account";
			this->switchToLogin->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->switchToLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::switchToLogin_LinkClicked);
			// 
			// createAccountButton
			// 
			this->createAccountButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->createAccountButton->Location = System::Drawing::Point(415, 608);
			this->createAccountButton->Margin = System::Windows::Forms::Padding(4);
			this->createAccountButton->Name = L"createAccountButton";
			this->createAccountButton->Size = System::Drawing::Size(304, 54);
			this->createAccountButton->TabIndex = 3;
			this->createAccountButton->Text = L"Create Account";
			this->createAccountButton->UseVisualStyleBackColor = true;
			this->createAccountButton->Click += gcnew System::EventHandler(this, &Main::createAccountButton_Click);
			// 
			// ca_passwordField
			// 
			this->ca_passwordField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_passwordField->Location = System::Drawing::Point(265, 415);
			this->ca_passwordField->Margin = System::Windows::Forms::Padding(4);
			this->ca_passwordField->Name = L"ca_passwordField";
			this->ca_passwordField->PasswordChar = '*';
			this->ca_passwordField->Size = System::Drawing::Size(604, 38);
			this->ca_passwordField->TabIndex = 8;
			// 
			// ca_lastName
			// 
			this->ca_lastName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_lastName->Location = System::Drawing::Point(265, 147);
			this->ca_lastName->Margin = System::Windows::Forms::Padding(4, 20, 4, 0);
			this->ca_lastName->Name = L"ca_lastName";
			this->ca_lastName->Size = System::Drawing::Size(604, 44);
			this->ca_lastName->TabIndex = 15;
			this->ca_lastName->Text = L"Last Name";
			// 
			// ca_email
			// 
			this->ca_email->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_email->Location = System::Drawing::Point(265, 257);
			this->ca_email->Margin = System::Windows::Forms::Padding(4, 20, 4, 0);
			this->ca_email->Name = L"ca_email";
			this->ca_email->Size = System::Drawing::Size(214, 44);
			this->ca_email->TabIndex = 9;
			this->ca_email->Text = L"Email";
			// 
			// ca_firstName
			// 
			this->ca_firstName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_firstName->Location = System::Drawing::Point(265, 37);
			this->ca_firstName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ca_firstName->Name = L"ca_firstName";
			this->ca_firstName->Size = System::Drawing::Size(604, 44);
			this->ca_firstName->TabIndex = 14;
			this->ca_firstName->Text = L"First Name";
			// 
			// ca_password
			// 
			this->ca_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_password->Location = System::Drawing::Point(265, 367);
			this->ca_password->Margin = System::Windows::Forms::Padding(4, 20, 4, 0);
			this->ca_password->Name = L"ca_password";
			this->ca_password->Size = System::Drawing::Size(214, 44);
			this->ca_password->TabIndex = 10;
			this->ca_password->Text = L"Password";
			// 
			// ca_lastNameField
			// 
			this->ca_lastNameField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_lastNameField->Location = System::Drawing::Point(265, 195);
			this->ca_lastNameField->Margin = System::Windows::Forms::Padding(4);
			this->ca_lastNameField->Name = L"ca_lastNameField";
			this->ca_lastNameField->Size = System::Drawing::Size(604, 38);
			this->ca_lastNameField->TabIndex = 13;
			// 
			// createAccountStatus
			// 
			this->createAccountStatus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->createAccountStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createAccountStatus->Location = System::Drawing::Point(265, 675);
			this->createAccountStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createAccountStatus->Name = L"createAccountStatus";
			this->createAccountStatus->Size = System::Drawing::Size(604, 98);
			this->createAccountStatus->TabIndex = 11;
			this->createAccountStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ca_emailField
			// 
			this->ca_emailField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ca_emailField->Location = System::Drawing::Point(265, 305);
			this->ca_emailField->Margin = System::Windows::Forms::Padding(4);
			this->ca_emailField->Name = L"ca_emailField";
			this->ca_emailField->Size = System::Drawing::Size(604, 38);
			this->ca_emailField->TabIndex = 7;
			// 
			// accountPanel
			// 
			this->accountPanel->Controls->Add(this->panel1);
			this->accountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accountPanel->Location = System::Drawing::Point(16, 15);
			this->accountPanel->Margin = System::Windows::Forms::Padding(4);
			this->accountPanel->Name = L"accountPanel";
			this->accountPanel->Padding = System::Windows::Forms::Padding(40, 38, 40, 38);
			this->accountPanel->Size = System::Drawing::Size(1214, 855);
			this->accountPanel->TabIndex = 7;
			this->accountPanel->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->firstNameCurrent);
			this->panel1->Controls->Add(this->emailCurrent);
			this->panel1->Controls->Add(this->lastNameUpdate);
			this->panel1->Controls->Add(this->emailNew);
			this->panel1->Controls->Add(this->lastNameNew);
			this->panel1->Controls->Add(this->emailUpdate);
			this->panel1->Controls->Add(this->lastNameCurrent);
			this->panel1->Controls->Add(this->passwordCurrent);
			this->panel1->Controls->Add(this->firstNameUpdate);
			this->panel1->Controls->Add(this->passwordNew);
			this->panel1->Controls->Add(this->firstNameNew);
			this->panel1->Controls->Add(this->passwordUpdate);
			this->panel1->Controls->Add(this->logoutButtonAux);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(40, 38);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(800, 100, 800, 0);
			this->panel1->Size = System::Drawing::Size(1134, 779);
			this->panel1->TabIndex = 17;
			// 
			// firstNameCurrent
			// 
			this->firstNameCurrent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->firstNameCurrent->AutoEllipsis = true;
			this->firstNameCurrent->Location = System::Drawing::Point(265, 17);
			this->firstNameCurrent->Margin = System::Windows::Forms::Padding(4);
			this->firstNameCurrent->Name = L"firstNameCurrent";
			this->firstNameCurrent->Size = System::Drawing::Size(604, 44);
			this->firstNameCurrent->TabIndex = 9;
			this->firstNameCurrent->Text = L"First Name: John";
			// 
			// emailCurrent
			// 
			this->emailCurrent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->emailCurrent->AutoEllipsis = true;
			this->emailCurrent->Location = System::Drawing::Point(265, 265);
			this->emailCurrent->Margin = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->emailCurrent->Name = L"emailCurrent";
			this->emailCurrent->Size = System::Drawing::Size(604, 44);
			this->emailCurrent->TabIndex = 0;
			this->emailCurrent->Text = L"Email: exampleuser@domain.com";
			// 
			// lastNameUpdate
			// 
			this->lastNameUpdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lastNameUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameUpdate->Location = System::Drawing::Point(913, 182);
			this->lastNameUpdate->Margin = System::Windows::Forms::Padding(4);
			this->lastNameUpdate->Name = L"lastNameUpdate";
			this->lastNameUpdate->Size = System::Drawing::Size(122, 38);
			this->lastNameUpdate->TabIndex = 15;
			this->lastNameUpdate->Text = L"Update";
			this->lastNameUpdate->UseVisualStyleBackColor = true;
			this->lastNameUpdate->Click += gcnew System::EventHandler(this, &Main::lastNameUpdate_Click);
			// 
			// emailNew
			// 
			this->emailNew->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->emailNew->Location = System::Drawing::Point(265, 313);
			this->emailNew->Margin = System::Windows::Forms::Padding(4);
			this->emailNew->Name = L"emailNew";
			this->emailNew->Size = System::Drawing::Size(604, 38);
			this->emailNew->TabIndex = 1;
			// 
			// lastNameNew
			// 
			this->lastNameNew->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lastNameNew->Location = System::Drawing::Point(265, 182);
			this->lastNameNew->Margin = System::Windows::Forms::Padding(4);
			this->lastNameNew->MinimumSize = System::Drawing::Size(400, 4);
			this->lastNameNew->Name = L"lastNameNew";
			this->lastNameNew->Size = System::Drawing::Size(604, 38);
			this->lastNameNew->TabIndex = 14;
			// 
			// emailUpdate
			// 
			this->emailUpdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->emailUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailUpdate->Location = System::Drawing::Point(913, 313);
			this->emailUpdate->Margin = System::Windows::Forms::Padding(4);
			this->emailUpdate->Name = L"emailUpdate";
			this->emailUpdate->Size = System::Drawing::Size(122, 38);
			this->emailUpdate->TabIndex = 2;
			this->emailUpdate->Text = L"Update";
			this->emailUpdate->UseVisualStyleBackColor = true;
			this->emailUpdate->Click += gcnew System::EventHandler(this, &Main::emailUpdate_Click);
			// 
			// lastNameCurrent
			// 
			this->lastNameCurrent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lastNameCurrent->AutoEllipsis = true;
			this->lastNameCurrent->Location = System::Drawing::Point(265, 134);
			this->lastNameCurrent->Margin = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->lastNameCurrent->Name = L"lastNameCurrent";
			this->lastNameCurrent->Size = System::Drawing::Size(604, 44);
			this->lastNameCurrent->TabIndex = 13;
			this->lastNameCurrent->Text = L"Last Name: Smith";
			// 
			// passwordCurrent
			// 
			this->passwordCurrent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passwordCurrent->AutoEllipsis = true;
			this->passwordCurrent->Location = System::Drawing::Point(265, 390);
			this->passwordCurrent->Margin = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->passwordCurrent->Name = L"passwordCurrent";
			this->passwordCurrent->Size = System::Drawing::Size(604, 44);
			this->passwordCurrent->TabIndex = 4;
			this->passwordCurrent->Text = L"Password";
			// 
			// firstNameUpdate
			// 
			this->firstNameUpdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->firstNameUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->firstNameUpdate->Location = System::Drawing::Point(913, 65);
			this->firstNameUpdate->Margin = System::Windows::Forms::Padding(16, 15, 16, 15);
			this->firstNameUpdate->Name = L"firstNameUpdate";
			this->firstNameUpdate->Size = System::Drawing::Size(122, 38);
			this->firstNameUpdate->TabIndex = 11;
			this->firstNameUpdate->Text = L"Update";
			this->firstNameUpdate->UseVisualStyleBackColor = true;
			this->firstNameUpdate->Click += gcnew System::EventHandler(this, &Main::firstNameUpdate_Click);
			// 
			// passwordNew
			// 
			this->passwordNew->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passwordNew->Location = System::Drawing::Point(265, 438);
			this->passwordNew->Margin = System::Windows::Forms::Padding(4);
			this->passwordNew->Name = L"passwordNew";
			this->passwordNew->PasswordChar = '*';
			this->passwordNew->Size = System::Drawing::Size(604, 38);
			this->passwordNew->TabIndex = 5;
			// 
			// firstNameNew
			// 
			this->firstNameNew->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->firstNameNew->Location = System::Drawing::Point(265, 63);
			this->firstNameNew->Margin = System::Windows::Forms::Padding(480, 115, 480, 0);
			this->firstNameNew->MinimumSize = System::Drawing::Size(400, 23);
			this->firstNameNew->Name = L"firstNameNew";
			this->firstNameNew->Size = System::Drawing::Size(604, 38);
			this->firstNameNew->TabIndex = 10;
			// 
			// passwordUpdate
			// 
			this->passwordUpdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passwordUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordUpdate->Location = System::Drawing::Point(913, 438);
			this->passwordUpdate->Margin = System::Windows::Forms::Padding(4);
			this->passwordUpdate->Name = L"passwordUpdate";
			this->passwordUpdate->Size = System::Drawing::Size(122, 38);
			this->passwordUpdate->TabIndex = 6;
			this->passwordUpdate->Text = L"Update";
			this->passwordUpdate->UseVisualStyleBackColor = true;
			this->passwordUpdate->Click += gcnew System::EventHandler(this, &Main::passwordUpdate_Click);
			// 
			// logoutButtonAux
			// 
			this->logoutButtonAux->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logoutButtonAux->Location = System::Drawing::Point(425, 606);
			this->logoutButtonAux->Margin = System::Windows::Forms::Padding(600, 77, 600, 154);
			this->logoutButtonAux->Name = L"logoutButtonAux";
			this->logoutButtonAux->Size = System::Drawing::Size(284, 54);
			this->logoutButtonAux->TabIndex = 8;
			this->logoutButtonAux->Text = L"Logout";
			this->logoutButtonAux->UseVisualStyleBackColor = true;
			this->logoutButtonAux->Click += gcnew System::EventHandler(this, &Main::logoutButtonAux_Click);
			// 
			// flightsTab
			// 
			this->flightsTab->Controls->Add(this->f_noAccount);
			this->flightsTab->Controls->Add(this->f_divider);
			this->flightsTab->Controls->Add(this->f_idHeader);
			this->flightsTab->Controls->Add(this->f_departureHeader);
			this->flightsTab->Controls->Add(this->f_destinationHeader);
			this->flightsTab->Controls->Add(this->f_occupancyHeader);
			this->flightsTab->Controls->Add(this->f_priceHeader);
			this->flightsTab->Controls->Add(this->destinationField);
			this->flightsTab->Controls->Add(this->flightsList);
			this->flightsTab->Controls->Add(this->searchFlightsButton);
			this->flightsTab->Controls->Add(this->destinationLabel);
			this->flightsTab->Controls->Add(this->departureTimeLabel);
			this->flightsTab->Controls->Add(this->maxTimeLabel);
			this->flightsTab->Controls->Add(this->minTimeLabel);
			this->flightsTab->Controls->Add(this->minTimeField);
			this->flightsTab->Controls->Add(this->maxTimeField);
			this->flightsTab->Location = System::Drawing::Point(4, 43);
			this->flightsTab->Margin = System::Windows::Forms::Padding(4);
			this->flightsTab->Name = L"flightsTab";
			this->flightsTab->Padding = System::Windows::Forms::Padding(4);
			this->flightsTab->Size = System::Drawing::Size(1246, 885);
			this->flightsTab->TabIndex = 1;
			this->flightsTab->Text = L"Flights";
			this->flightsTab->UseVisualStyleBackColor = true;
			// 
			// f_divider
			// 
			this->f_divider->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_divider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f_divider->Location = System::Drawing::Point(23, 211);
			this->f_divider->MaximumSize = System::Drawing::Size(4000, 2);
			this->f_divider->Name = L"f_divider";
			this->f_divider->Size = System::Drawing::Size(1200, 2);
			this->f_divider->TabIndex = 11;
			// 
			// f_idHeader
			// 
			this->f_idHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_idHeader->Location = System::Drawing::Point(23, 165);
			this->f_idHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_idHeader->Name = L"f_idHeader";
			this->f_idHeader->Size = System::Drawing::Size(183, 46);
			this->f_idHeader->TabIndex = 0;
			this->f_idHeader->Text = L"Flight ID";
			// 
			// f_departureHeader
			// 
			this->f_departureHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_departureHeader->Location = System::Drawing::Point(616, 165);
			this->f_departureHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_departureHeader->Name = L"f_departureHeader";
			this->f_departureHeader->Size = System::Drawing::Size(236, 46);
			this->f_departureHeader->TabIndex = 2;
			this->f_departureHeader->Text = L"Departure Time";
			// 
			// f_destinationHeader
			// 
			this->f_destinationHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_destinationHeader->Location = System::Drawing::Point(206, 165);
			this->f_destinationHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_destinationHeader->Name = L"f_destinationHeader";
			this->f_destinationHeader->Size = System::Drawing::Size(410, 46);
			this->f_destinationHeader->TabIndex = 1;
			this->f_destinationHeader->Text = L"Destination";
			// 
			// f_occupancyHeader
			// 
			this->f_occupancyHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_occupancyHeader->Location = System::Drawing::Point(861, 165);
			this->f_occupancyHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_occupancyHeader->Name = L"f_occupancyHeader";
			this->f_occupancyHeader->Size = System::Drawing::Size(182, 46);
			this->f_occupancyHeader->TabIndex = 3;
			this->f_occupancyHeader->Text = L"Occupancy";
			// 
			// f_priceHeader
			// 
			this->f_priceHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_priceHeader->Location = System::Drawing::Point(1043, 165);
			this->f_priceHeader->Margin = System::Windows::Forms::Padding(0);
			this->f_priceHeader->Name = L"f_priceHeader";
			this->f_priceHeader->Size = System::Drawing::Size(180, 46);
			this->f_priceHeader->TabIndex = 4;
			this->f_priceHeader->Text = L"Price";
			// 
			// destinationField
			// 
			this->destinationField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->destinationField->FormattingEnabled = true;
			this->destinationField->Location = System::Drawing::Point(23, 106);
			this->destinationField->Margin = System::Windows::Forms::Padding(4);
			this->destinationField->Name = L"destinationField";
			this->destinationField->Size = System::Drawing::Size(394, 39);
			this->destinationField->TabIndex = 10;
			// 
			// flightsList
			// 
			this->flightsList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->flightsList->AutoScroll = true;
			this->flightsList->AutoSize = true;
			this->flightsList->ColumnCount = 5;
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->flightsList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->flightsList->Location = System::Drawing::Point(23, 217);
			this->flightsList->Margin = System::Windows::Forms::Padding(4);
			this->flightsList->MinimumSize = System::Drawing::Size(1200, 282);
			this->flightsList->Name = L"flightsList";
			this->flightsList->RowCount = 1;
			this->flightsList->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 0)));
			this->flightsList->Size = System::Drawing::Size(1200, 642);
			this->flightsList->TabIndex = 9;
			// 
			// searchFlightsButton
			// 
			this->searchFlightsButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->searchFlightsButton->Location = System::Drawing::Point(1092, 107);
			this->searchFlightsButton->Margin = System::Windows::Forms::Padding(4);
			this->searchFlightsButton->Name = L"searchFlightsButton";
			this->searchFlightsButton->Size = System::Drawing::Size(131, 46);
			this->searchFlightsButton->TabIndex = 8;
			this->searchFlightsButton->Text = L"Search";
			this->searchFlightsButton->UseVisualStyleBackColor = true;
			this->searchFlightsButton->Click += gcnew System::EventHandler(this, &Main::searchFlightsButton_Click);
			// 
			// destinationLabel
			// 
			this->destinationLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->destinationLabel->Location = System::Drawing::Point(119, 21);
			this->destinationLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->destinationLabel->Name = L"destinationLabel";
			this->destinationLabel->Size = System::Drawing::Size(192, 37);
			this->destinationLabel->TabIndex = 6;
			this->destinationLabel->Text = L"Destination";
			this->destinationLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// departureTimeLabel
			// 
			this->departureTimeLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->departureTimeLabel->Location = System::Drawing::Point(600, 21);
			this->departureTimeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->departureTimeLabel->Name = L"departureTimeLabel";
			this->departureTimeLabel->Size = System::Drawing::Size(368, 37);
			this->departureTimeLabel->TabIndex = 5;
			this->departureTimeLabel->Text = L"Departure Time Window";
			this->departureTimeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// maxTimeLabel
			// 
			this->maxTimeLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->maxTimeLabel->Location = System::Drawing::Point(794, 65);
			this->maxTimeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->maxTimeLabel->Name = L"maxTimeLabel";
			this->maxTimeLabel->Size = System::Drawing::Size(260, 37);
			this->maxTimeLabel->TabIndex = 4;
			this->maxTimeLabel->Text = L"Before Date:";
			// 
			// minTimeLabel
			// 
			this->minTimeLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->minTimeLabel->Location = System::Drawing::Point(490, 66);
			this->minTimeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minTimeLabel->Name = L"minTimeLabel";
			this->minTimeLabel->Size = System::Drawing::Size(260, 37);
			this->minTimeLabel->TabIndex = 3;
			this->minTimeLabel->Text = L"After Date:";
			// 
			// minTimeField
			// 
			this->minTimeField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->minTimeField->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->minTimeField->Location = System::Drawing::Point(490, 107);
			this->minTimeField->Margin = System::Windows::Forms::Padding(4);
			this->minTimeField->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->minTimeField->Name = L"minTimeField";
			this->minTimeField->Size = System::Drawing::Size(260, 38);
			this->minTimeField->TabIndex = 2;
			// 
			// maxTimeField
			// 
			this->maxTimeField->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->maxTimeField->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->maxTimeField->Location = System::Drawing::Point(794, 107);
			this->maxTimeField->Margin = System::Windows::Forms::Padding(4);
			this->maxTimeField->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->maxTimeField->Name = L"maxTimeField";
			this->maxTimeField->Size = System::Drawing::Size(260, 38);
			this->maxTimeField->TabIndex = 1;
			// 
			// ticketsTab
			// 
			this->ticketsTab->Controls->Add(this->t_noAccount);
			this->ticketsTab->Controls->Add(this->t_divider);
			this->ticketsTab->Controls->Add(this->t_departureHeader);
			this->ticketsTab->Controls->Add(this->t_seatHeader);
			this->ticketsTab->Controls->Add(this->t_destinationHeader);
			this->ticketsTab->Controls->Add(this->ticketList);
			this->ticketsTab->Controls->Add(this->t_idHeader);
			this->ticketsTab->Location = System::Drawing::Point(4, 43);
			this->ticketsTab->Margin = System::Windows::Forms::Padding(4);
			this->ticketsTab->Name = L"ticketsTab";
			this->ticketsTab->Padding = System::Windows::Forms::Padding(4);
			this->ticketsTab->Size = System::Drawing::Size(1246, 885);
			this->ticketsTab->TabIndex = 2;
			this->ticketsTab->Text = L"Tickets";
			this->ticketsTab->UseVisualStyleBackColor = true;
			// 
			// f_noAccount
			// 
			this->f_noAccount->Controls->Add(this->f_returnToAccount);
			this->f_noAccount->Controls->Add(this->f_accountWarning);
			this->f_noAccount->Dock = System::Windows::Forms::DockStyle::Fill;
			this->f_noAccount->Location = System::Drawing::Point(4, 4);
			this->f_noAccount->Margin = System::Windows::Forms::Padding(0);
			this->f_noAccount->Name = L"f_noAccount";
			this->f_noAccount->Size = System::Drawing::Size(1238, 877);
			this->f_noAccount->TabIndex = 11;
			// 
			// f_returnToAccount
			// 
			this->f_returnToAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->f_returnToAccount->BackColor = System::Drawing::Color::Transparent;
			this->f_returnToAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_returnToAccount->Location = System::Drawing::Point(268, 472);
			this->f_returnToAccount->Name = L"f_returnToAccount";
			this->f_returnToAccount->Size = System::Drawing::Size(691, 75);
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
			this->f_accountWarning->Name = L"f_accountWarning";
			this->f_accountWarning->Size = System::Drawing::Size(1238, 877);
			this->f_accountWarning->TabIndex = 0;
			this->f_accountWarning->Text = L"You must login to view this page.";
			this->f_accountWarning->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// t_noAccount
			// 
			this->t_noAccount->Controls->Add(this->t_returnToAccount);
			this->t_noAccount->Controls->Add(this->t_accountWarning);
			this->t_noAccount->Dock = System::Windows::Forms::DockStyle::Fill;
			this->t_noAccount->Location = System::Drawing::Point(4, 4);
			this->t_noAccount->Margin = System::Windows::Forms::Padding(0);
			this->t_noAccount->Name = L"t_noAccount";
			this->t_noAccount->Size = System::Drawing::Size(1238, 877);
			this->t_noAccount->TabIndex = 12;
			// 
			// t_returnToAccount
			// 
			this->t_returnToAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->t_returnToAccount->BackColor = System::Drawing::Color::Transparent;
			this->t_returnToAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_returnToAccount->Location = System::Drawing::Point(268, 472);
			this->t_returnToAccount->Name = L"t_returnToAccount";
			this->t_returnToAccount->Size = System::Drawing::Size(691, 75);
			this->t_returnToAccount->TabIndex = 3;
			this->t_returnToAccount->TabStop = true;
			this->t_returnToAccount->Text = L"Login";
			this->t_returnToAccount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->t_returnToAccount->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::t_returnToAccount_LinkClicked);
			// 
			// t_accountWarning
			// 
			this->t_accountWarning->Dock = System::Windows::Forms::DockStyle::Fill;
			this->t_accountWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_accountWarning->Location = System::Drawing::Point(0, 0);
			this->t_accountWarning->Name = L"t_accountWarning";
			this->t_accountWarning->Size = System::Drawing::Size(1238, 877);
			this->t_accountWarning->TabIndex = 2;
			this->t_accountWarning->Text = L"You must login to view this page.";
			this->t_accountWarning->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ticketList
			// 
			this->ticketList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->ticketList->AutoScroll = true;
			this->ticketList->AutoSize = true;
			this->ticketList->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ticketList->ColumnCount = 4;
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->ticketList->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->ticketList->Location = System::Drawing::Point(23, 59);
			this->ticketList->Margin = System::Windows::Forms::Padding(4);
			this->ticketList->MaximumSize = System::Drawing::Size(1200, 4000);
			this->ticketList->MinimumSize = System::Drawing::Size(1200, 440);
			this->ticketList->Name = L"ticketList";
			this->ticketList->RowCount = 1;
			this->ticketList->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->ticketList->Size = System::Drawing::Size(1200, 800);
			this->ticketList->TabIndex = 10;
			// 
			// t_seatHeader
			// 
			this->t_seatHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->t_seatHeader->Location = System::Drawing::Point(205, 9);
			this->t_seatHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_seatHeader->Name = L"t_seatHeader";
			this->t_seatHeader->Size = System::Drawing::Size(182, 46);
			this->t_seatHeader->TabIndex = 3;
			this->t_seatHeader->Text = L"Seat";
			// 
			// t_departureHeader
			// 
			this->t_departureHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->t_departureHeader->Location = System::Drawing::Point(802, 9);
			this->t_departureHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_departureHeader->Name = L"t_departureHeader";
			this->t_departureHeader->Size = System::Drawing::Size(421, 46);
			this->t_departureHeader->TabIndex = 2;
			this->t_departureHeader->Text = L"Departure Time";
			// 
			// t_destinationHeader
			// 
			this->t_destinationHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->t_destinationHeader->Location = System::Drawing::Point(386, 9);
			this->t_destinationHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_destinationHeader->Name = L"t_destinationHeader";
			this->t_destinationHeader->Size = System::Drawing::Size(416, 46);
			this->t_destinationHeader->TabIndex = 1;
			this->t_destinationHeader->Text = L"Destination";
			// 
			// t_idHeader
			// 
			this->t_idHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->t_idHeader->Location = System::Drawing::Point(23, 9);
			this->t_idHeader->Margin = System::Windows::Forms::Padding(0);
			this->t_idHeader->Name = L"t_idHeader";
			this->t_idHeader->Size = System::Drawing::Size(176, 46);
			this->t_idHeader->TabIndex = 0;
			this->t_idHeader->Text = L"Ticket ID";
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
			this->companyLogo->Size = System::Drawing::Size(1254, 69);
			this->companyLogo->TabIndex = 8;
			this->companyLogo->Text = L"Air-Books";
			this->companyLogo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// logoutButton
			// 
			this->logoutButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->logoutButton->Location = System::Drawing::Point(1072, 37);
			this->logoutButton->Margin = System::Windows::Forms::Padding(4);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(178, 59);
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
			this->mainview->Size = System::Drawing::Size(1254, 1009);
			this->mainview->TabIndex = 10;
			// 
			// bottomBar
			// 
			this->bottomBar->Controls->Add(this->logoutButton);
			this->bottomBar->Controls->Add(this->companyLogo);
			this->bottomBar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottomBar->Location = System::Drawing::Point(0, 909);
			this->bottomBar->Name = L"bottomBar";
			this->bottomBar->Size = System::Drawing::Size(1254, 100);
			this->bottomBar->TabIndex = 8;
			// 
			// t_divider
			// 
			this->t_divider->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->t_divider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->t_divider->Location = System::Drawing::Point(23, 53);
			this->t_divider->MaximumSize = System::Drawing::Size(4000, 2);
			this->t_divider->Name = L"t_divider";
			this->t_divider->Size = System::Drawing::Size(1200, 2);
			this->t_divider->TabIndex = 12;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1254, 1009);
			this->Controls->Add(this->bottomBar);
			this->Controls->Add(this->mainview);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1280, 1080);
			this->Name = L"Login";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Login";
			this->tabControl->ResumeLayout(false);
			this->accountTab->ResumeLayout(false);
			this->loginPanel->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->createAccountPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->accountPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->flightsTab->ResumeLayout(false);
			this->flightsTab->PerformLayout();
			this->ticketsTab->ResumeLayout(false);
			this->ticketsTab->PerformLayout();
			this->f_noAccount->ResumeLayout(false);
			this->t_noAccount->ResumeLayout(false);
			this->mainview->ResumeLayout(false);
			this->bottomBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Account^ user;


		private: System::Void logout() {
			if (user) {
				delete user;
			}
			showLogin();
			tabControl->SelectTab("accountTab");
			// hide flights and ticket pages
			f_noAccount->Show();
			t_noAccount->Show();
			// clear data
			destinationField->Text = "";
			minTimeField->Value = DateTime::Now;
			maxTimeField->Value = DateTime::Now;
			clearFlights();
		}
		

		private: System::Void showLogin() {
			createAccountPanel->Hide();
			accountPanel->Hide();

			ln_emailField->Clear();
			ln_passwordField->Clear();
			loginStatus->Text = "";
			loginPanel->Show();
		}

		private: System::Void showCreate() {
			loginPanel->Hide();
			accountPanel->Hide();

			ca_firstNameField->Clear();
			ca_lastNameField->Clear();
			ca_emailField->Clear();
			ca_passwordField->Clear();
			createAccountPanel->Show();
		}
		
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
			user = gcnew Account(ln_emailField->Text, ln_passwordField->Text);
			if (user->authenticate()) {
				// success, login and switch to account view
				firstNameCurrent->Text = "First Name: " + user->getName(1);
				lastNameCurrent->Text = "Last Name: " + user->getName(2);
				emailCurrent->Text = "Email: " + user->getEmail();
				showAccount();
				// unhide flights and tickets pages
				f_noAccount->Hide();
				t_noAccount->Hide();
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
			user = gcnew Account(ca_firstNameField->Text, ca_lastNameField->Text, ca_emailField->Text, ca_passwordField->Text);
			if (user->validateEmail()) {
				user->createAccount();
				showLogin();
			}
			else {
				createAccountStatus->Text = "Error";
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
		

		private: System::Void postFlight(System::String^ flightId, System::String^ destination, System::String^ departure, System::String^ occupancy, float price) {
			System::Windows::Forms::Label^ idLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dsLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ dpLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ ocLabel = gcnew System::Windows::Forms::Label();
			System::Windows::Forms::Label^ prLabel = gcnew System::Windows::Forms::Label();

			std::stringstream stream;
			stream.precision(4);
			stream << price;			

			idLabel->Text = flightId;
			dsLabel->Text = destination;
			dpLabel->Text = departure;
			ocLabel->Text = occupancy;
			prLabel->Text = marshal_as<System::String^>('$' + stream.str());

			idLabel->Dock = DockStyle::Top;
			dsLabel->Dock = DockStyle::Top;
			dpLabel->Dock = DockStyle::Top;
			ocLabel->Dock = DockStyle::Top;
			prLabel->Dock = DockStyle::Top;

			flightsList->RowCount++;
			flightsList->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30.0));
			flightsList->Controls->Add(idLabel, 0, flightsList->RowCount-1);
			flightsList->Controls->Add(dsLabel, 1, flightsList->RowCount-1);
			flightsList->Controls->Add(dpLabel, 2, flightsList->RowCount-1);
			flightsList->Controls->Add(ocLabel, 3, flightsList->RowCount-1);
			flightsList->Controls->Add(prLabel, 4, flightsList->RowCount - 1);
		}

		private: System::Void clearFlights() {
			flightsList->Controls->Clear();
			flightsList->RowCount = 1;
		}

		//
		// Flights Page
		//
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

			// !!! TODO !!!:
			// use parameters declared above to query the database and retrieve all matching flights
			// 
			// for each flight, call the postFlight() function-
			// postFlight() returns nothing and takes in four managed strings (System::String^) and one float as parameters.
			// The order of these parameters is flightId, destination, departureDate, availableSeating, pricePerTicket
			// postFlight() will take these arguments and post a new flight entry on the flight list.

			// in the event you need to convert an unmanaged string (std::string) into a managed string (System::String^)
			// for use in the postFlight() function, here is how you would do so:
			// System::String^ managed = marshal_as<System::String^>(unmanaged);
			// where (unmanaged) is the std::string to be converted.
		}

		// user returns to login screen
		private: System::Void f_returnToAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			logout();
		}

		//
		// Tickets Page
		//
		// user returns to login screen
		private: System::Void t_returnToAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			logout();
		}
};
}
