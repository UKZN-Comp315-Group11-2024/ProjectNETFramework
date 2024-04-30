#pragma once
#include "PlayerInfo.h"
#include <iostream>
#include <windows.h>
#include <vector>
#include <fstream>
#include "popup.h"
#include <set>
#include <cstdlib>
#include "customAlgs.h"
#include "LevelMethods.h"
#include "Destructible.h"
#include "PictureBox.h"
#include "MusicAndSFX.h"

namespace M15Namespace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		/// <summary>
		/// Summary for lvl1Form
		/// </summary>
		public ref class lvl1Form : public System::Windows::Forms::Form
		{
			public:
				LevelMethods^ LvlMethods;


				//PictureBox Array
				array<definedPictureBox^>^ pictureBoxArray;
				definedPictureBox^ gif;

				//creating music class objects
				MusicAndSFX* soundAnswer =new MusicAndSFX();
				MusicAndSFX* soundImpact = new MusicAndSFX();
				MusicAndSFX* ambience = new MusicAndSFX();
				MusicAndSFX* music = new MusicAndSFX();

		private: System::Windows::Forms::Timer^ BulletTimer;



		private: System::Windows::Forms::Timer^ QuestionTransitionTimerShow;

		private: System::Windows::Forms::TextBox^ ResultTextBox;
		private: System::Windows::Forms::Timer^ QuestionTransitionTimerHide;
		private: System::Windows::Forms::PictureBox^ playerlevel1;
		private: System::Windows::Forms::PictureBox^ Barrier;








		public:
			Destructible^ des = gcnew Destructible;
			Destructible::DestroyFunction^ destroyFunc = gcnew Destructible::DestroyFunction(this, &lvl1Form::printFunc);
			Destructible::DestroyFunction^ destroyFuncA = gcnew Destructible::DestroyFunction(this, &lvl1Form::destroyA);
			Destructible::DestroyFunction^ destroyFuncB = gcnew Destructible::DestroyFunction(this, &lvl1Form::destroyB);
			Destructible::DestroyFunction^ destroyFuncC = gcnew Destructible::DestroyFunction(this, &lvl1Form::destroyC);
			Destructible::DestroyFunction^ destroyFuncD = gcnew Destructible::DestroyFunction(this, &lvl1Form::destroyD);
			Destructible::DestroyFunction^ destroyFuncTF1 = gcnew Destructible::DestroyFunction(this, &lvl1Form::destroyTF1);
		private: System::Windows::Forms::Label^ textBoxA;
		private: System::Windows::Forms::Label^ textBoxB;
		private: System::Windows::Forms::Label^ textBoxD;
		private: System::Windows::Forms::Label^ textBoxC;
		private: System::Windows::Forms::Label^ textBoxTFB;


		private: System::Windows::Forms::Label^ textBoxTFA;
		private: System::Windows::Forms::Label^ textBoxQuestion;
		private: System::Windows::Forms::Panel^ panelQuestion;
		private: System::Windows::Forms::Timer^ DelayEnd;



		public:

		public:
			Destructible::DestroyFunction^ destroyFuncTF2 = gcnew Destructible::DestroyFunction(this, &lvl1Form::destroyTF2);
				lvl1Form()
				{	
					InitializeComponent();
					//
					//TODO: Add the constructor code here
					
				//@Daniel
				//des->SetQuestionTransitionTimer(QuestionTransitionTimerShow);

				//@Daniel: need this to be true or listeners dont work
				this->KeyPreview = true;
					
					this->LvlMethods = gcnew LevelMethods(1);
					this->LvlMethods->SetQuestionComponents(textBoxQuestion, textBoxA, textBoxB, textBoxC, textBoxD, textBoxTFA, textBoxTFB);
					this->LvlMethods->SetPlayerComponent(playerlevel1);
					this->LvlMethods->SetProgressBarComponent(progressBarLevel1);
					this->LvlMethods->SetProgressBarTimerComponent(timerProgress);
					this->LvlMethods->SetPanelComponant(panelLogin);
					this->LvlMethods->SetLevelFormInstance(this);
					
					this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			
					/*std::ifstream file("textfiles/PlayerInfo.txt");
					std::string line;
					System::Collections::Generic::List<System::String^> v;
					if (file.is_open())
					{
						while (getline(file, line))
						{
							v.push_back(line);
						}
			
					}
					playerInfo^ p = gcnew playerInfo();
					for (int i = 0; i < 3; i++) {
						System::String^ s = v[i];
						if (i == 0) {
							p->username = s;
					
						}
				
						else if (i == 1) {
							p->score = std::stoi(s);
						}
						else {
							p->timeTaken = std::stoi(s);
						}
				
					}

					this->player = p;*/


				}

			protected:
				/// <summary>
				/// Clean up any resources being used.
				/// </summary>
				~lvl1Form()
				{
					if (components)
					{
						delete components;
					}
				}

			protected:


			private: System::ComponentModel::IContainer^ components;



			private: System::Windows::Forms::Timer^ Transition1;


			private: System::Windows::Forms::PictureBox^ pbGeneralMilitary;
			private: System::Windows::Forms::Panel^ panelLogin;
			private: System::Windows::Forms::Timer^ Transition2;
			private: System::Windows::Forms::Label^ lblMessage1;
			private: System::Windows::Forms::ProgressBar^ progressBarLevel1;
			private: System::Windows::Forms::Button^ beginButton;
			private: System::Windows::Forms::Timer^ timerProgress;
			private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
			private: System::Windows::Forms::Timer^ movePlayerTimer;
			private: System::Windows::Forms::Timer^ timeranimation;
		private: System::Windows::Forms::PictureBox^ wasd;
		private: System::Windows::Forms::PictureBox^ space;
		private: System::Windows::Forms::Timer^ shootTimer;





















private: System::Windows::Forms::Button^ ContinueNxtLvlButton;




















			protected:
		
			private:
				/// <summary>
				/// Required designer variable.
				/// </summary>
				playerInfo^ player;
		


		#pragma region Windows Form Designer generated code
				/// <summary>
				/// Required method for Designer support - do not modify
				/// the contents of this method with the code editor.
				/// </summary>
				void InitializeComponent(void)
				{
					this->components = (gcnew System::ComponentModel::Container());
					System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(lvl1Form::typeid));
					this->lblMessage1 = (gcnew System::Windows::Forms::Label());
					this->Transition1 = (gcnew System::Windows::Forms::Timer(this->components));
					this->pbGeneralMilitary = (gcnew System::Windows::Forms::PictureBox());
					this->panelLogin = (gcnew System::Windows::Forms::Panel());
					this->panelQuestion = (gcnew System::Windows::Forms::Panel());
					this->textBoxQuestion = (gcnew System::Windows::Forms::Label());
					this->textBoxTFB = (gcnew System::Windows::Forms::Label());
					this->textBoxTFA = (gcnew System::Windows::Forms::Label());
					this->textBoxD = (gcnew System::Windows::Forms::Label());
					this->textBoxC = (gcnew System::Windows::Forms::Label());
					this->textBoxB = (gcnew System::Windows::Forms::Label());
					this->textBoxA = (gcnew System::Windows::Forms::Label());
					this->playerlevel1 = (gcnew System::Windows::Forms::PictureBox());
					this->ResultTextBox = (gcnew System::Windows::Forms::TextBox());
					this->ContinueNxtLvlButton = (gcnew System::Windows::Forms::Button());
					this->space = (gcnew System::Windows::Forms::PictureBox());
					this->wasd = (gcnew System::Windows::Forms::PictureBox());
					this->beginButton = (gcnew System::Windows::Forms::Button());
					this->progressBarLevel1 = (gcnew System::Windows::Forms::ProgressBar());
					this->Barrier = (gcnew System::Windows::Forms::PictureBox());
					this->Transition2 = (gcnew System::Windows::Forms::Timer(this->components));
					this->timerProgress = (gcnew System::Windows::Forms::Timer(this->components));
					this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
					this->movePlayerTimer = (gcnew System::Windows::Forms::Timer(this->components));
					this->timeranimation = (gcnew System::Windows::Forms::Timer(this->components));
					this->shootTimer = (gcnew System::Windows::Forms::Timer(this->components));
					this->BulletTimer = (gcnew System::Windows::Forms::Timer(this->components));
					this->QuestionTransitionTimerShow = (gcnew System::Windows::Forms::Timer(this->components));
					this->QuestionTransitionTimerHide = (gcnew System::Windows::Forms::Timer(this->components));
					this->DelayEnd = (gcnew System::Windows::Forms::Timer(this->components));
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGeneralMilitary))->BeginInit();
					this->panelLogin->SuspendLayout();
					this->panelQuestion->SuspendLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerlevel1))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->space))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wasd))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Barrier))->BeginInit();
					this->SuspendLayout();
					// 
					// lblMessage1
					// 
					this->lblMessage1->AutoSize = true;
					this->lblMessage1->Font = (gcnew System::Drawing::Font(L"Courier New", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->lblMessage1->Location = System::Drawing::Point(396, 1080);
					this->lblMessage1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
					this->lblMessage1->Name = L"lblMessage1";
					this->lblMessage1->Size = System::Drawing::Size(0, 110);
					this->lblMessage1->TabIndex = 1;
					this->lblMessage1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// Transition1
					// 
					this->Transition1->Interval = 1;
					this->Transition1->Tick += gcnew System::EventHandler(this, &lvl1Form::Transition1_Tick);
					// 
					// pbGeneralMilitary
					// 
					this->pbGeneralMilitary->BackColor = System::Drawing::Color::Transparent;
					this->pbGeneralMilitary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
					this->pbGeneralMilitary->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbGeneralMilitary.Image")));
					this->pbGeneralMilitary->Location = System::Drawing::Point(-390, 345);
					this->pbGeneralMilitary->Margin = System::Windows::Forms::Padding(0);
					this->pbGeneralMilitary->Name = L"pbGeneralMilitary";
					this->pbGeneralMilitary->Size = System::Drawing::Size(446, 672);
					this->pbGeneralMilitary->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					this->pbGeneralMilitary->TabIndex = 11;
					this->pbGeneralMilitary->TabStop = false;
					// 
					// panelLogin
					// 
					this->panelLogin->BackColor = System::Drawing::Color::Transparent;
					this->panelLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLogin.BackgroundImage")));
					this->panelLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
					this->panelLogin->Controls->Add(this->panelQuestion);
					this->panelLogin->Controls->Add(this->textBoxTFB);
					this->panelLogin->Controls->Add(this->textBoxTFA);
					this->panelLogin->Controls->Add(this->textBoxD);
					this->panelLogin->Controls->Add(this->textBoxC);
					this->panelLogin->Controls->Add(this->textBoxB);
					this->panelLogin->Controls->Add(this->textBoxA);
					this->panelLogin->Controls->Add(this->playerlevel1);
					this->panelLogin->Controls->Add(this->ResultTextBox);
					this->panelLogin->Controls->Add(this->ContinueNxtLvlButton);
					this->panelLogin->Controls->Add(this->space);
					this->panelLogin->Controls->Add(this->wasd);
					this->panelLogin->Controls->Add(this->beginButton);
					this->panelLogin->Controls->Add(this->progressBarLevel1);
					this->panelLogin->Controls->Add(this->lblMessage1);
					this->panelLogin->Controls->Add(this->pbGeneralMilitary);
					this->panelLogin->Controls->Add(this->Barrier);
					this->panelLogin->ForeColor = System::Drawing::Color::White;
					this->panelLogin->Location = System::Drawing::Point(-4, -30);
					this->panelLogin->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->panelLogin->Name = L"panelLogin";
					this->panelLogin->Size = System::Drawing::Size(1924, 1062);
					this->panelLogin->TabIndex = 12;
					this->panelLogin->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &lvl1Form::panelLogin_Paint_1);
					// 
					// panelQuestion
					// 
					this->panelQuestion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelQuestion.BackgroundImage")));
					this->panelQuestion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
					this->panelQuestion->Controls->Add(this->textBoxQuestion);
					this->panelQuestion->Location = System::Drawing::Point(108, 50);
					this->panelQuestion->Name = L"panelQuestion";
					this->panelQuestion->Size = System::Drawing::Size(900, 177);
					this->panelQuestion->TabIndex = 44;
					this->panelQuestion->Visible = false;
					// 
					// textBoxQuestion
					// 
					this->textBoxQuestion->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->textBoxQuestion->ForeColor = System::Drawing::Color::Black;
					this->textBoxQuestion->Location = System::Drawing::Point(75, 24);
					this->textBoxQuestion->Name = L"textBoxQuestion";
					this->textBoxQuestion->Size = System::Drawing::Size(760, 126);
					this->textBoxQuestion->TabIndex = 43;
					this->textBoxQuestion->Text = L"label1";
					// 
					// textBoxTFB
					// 
					this->textBoxTFB->Location = System::Drawing::Point(1527, 801);
					this->textBoxTFB->Name = L"textBoxTFB";
					this->textBoxTFB->Size = System::Drawing::Size(120, 27);
					this->textBoxTFB->TabIndex = 42;
					this->textBoxTFB->Text = L"TF2";
					// 
					// textBoxTFA
					// 
					this->textBoxTFA->Location = System::Drawing::Point(1527, 392);
					this->textBoxTFA->Name = L"textBoxTFA";
					this->textBoxTFA->Size = System::Drawing::Size(333, 75);
					this->textBoxTFA->TabIndex = 41;
					this->textBoxTFA->Text = L"TF1";
					// 
					// textBoxD
					// 
					this->textBoxD->Location = System::Drawing::Point(1527, 896);
					this->textBoxD->Name = L"textBoxD";
					this->textBoxD->Size = System::Drawing::Size(321, 87);
					this->textBoxD->TabIndex = 40;
					this->textBoxD->Text = L"Option D";
					// 
					// textBoxC
					// 
					this->textBoxC->Location = System::Drawing::Point(1522, 680);
					this->textBoxC->Name = L"textBoxC";
					this->textBoxC->Size = System::Drawing::Size(328, 76);
					this->textBoxC->TabIndex = 39;
					this->textBoxC->Text = L"Option C";
					// 
					// textBoxB
					// 
					this->textBoxB->Location = System::Drawing::Point(1527, 489);
					this->textBoxB->Name = L"textBoxB";
					this->textBoxB->Size = System::Drawing::Size(333, 94);
					this->textBoxB->TabIndex = 38;
					this->textBoxB->Text = L"Option B";
					// 
					// textBoxA
					// 
					this->textBoxA->Location = System::Drawing::Point(1522, 297);
					this->textBoxA->Name = L"textBoxA";
					this->textBoxA->Size = System::Drawing::Size(336, 76);
					this->textBoxA->TabIndex = 37;
					this->textBoxA->Text = L"Option A";
					// 
					// playerlevel1
					// 
					this->playerlevel1->ImageLocation = L"assets/PlayerMove/idle.gif";
					this->playerlevel1->Location = System::Drawing::Point(156, 592);
					this->playerlevel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->playerlevel1->Name = L"playerlevel1";
					this->playerlevel1->Size = System::Drawing::Size(225, 126);
					this->playerlevel1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->playerlevel1->TabIndex = 35;
					this->playerlevel1->TabStop = false;
					this->playerlevel1->Visible = false;
					// 
					// ResultTextBox
					// 
					this->ResultTextBox->Location = System::Drawing::Point(0, 0);
					this->ResultTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->ResultTextBox->Name = L"ResultTextBox";
					this->ResultTextBox->Size = System::Drawing::Size(148, 26);
					this->ResultTextBox->TabIndex = 34;
					this->ResultTextBox->Visible = false;
					// 
					// ContinueNxtLvlButton
					// 
					this->ContinueNxtLvlButton->Location = System::Drawing::Point(860, 840);
					this->ContinueNxtLvlButton->Name = L"ContinueNxtLvlButton";
					this->ContinueNxtLvlButton->Size = System::Drawing::Size(180, 87);
					this->ContinueNxtLvlButton->TabIndex = 30;
					this->ContinueNxtLvlButton->Text = L"Continue";
					this->ContinueNxtLvlButton->UseVisualStyleBackColor = true;
					this->ContinueNxtLvlButton->Visible = false;
					// 
					// space
					// 
					this->space->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"space.Image")));
					this->space->Location = System::Drawing::Point(930, 958);
					this->space->Name = L"space";
					this->space->Size = System::Drawing::Size(46, 58);
					this->space->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->space->TabIndex = 16;
					this->space->TabStop = false;
					this->space->Visible = false;
					// 
					// wasd
					// 
					this->wasd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wasd.Image")));
					this->wasd->Location = System::Drawing::Point(782, 932);
					this->wasd->Name = L"wasd";
					this->wasd->Size = System::Drawing::Size(144, 108);
					this->wasd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->wasd->TabIndex = 15;
					this->wasd->TabStop = false;
					this->wasd->Visible = false;
					// 
					// beginButton
					// 
					this->beginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->beginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->beginButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					this->beginButton->Location = System::Drawing::Point(735, 1200);
					this->beginButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->beginButton->Name = L"beginButton";
					this->beginButton->Size = System::Drawing::Size(292, 75);
					this->beginButton->TabIndex = 13;
					this->beginButton->Text = L"Begin";
					this->beginButton->UseVisualStyleBackColor = false;
					this->beginButton->Click += gcnew System::EventHandler(this, &lvl1Form::beginButton_Click);
					// 
					// progressBarLevel1
					// 
					this->progressBarLevel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
						| System::Windows::Forms::AnchorStyles::Right));
					this->progressBarLevel1->BackColor = System::Drawing::Color::Black;
					this->progressBarLevel1->ForeColor = System::Drawing::Color::Chartreuse;
					this->progressBarLevel1->Location = System::Drawing::Point(1083, 60);
					this->progressBarLevel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->progressBarLevel1->Maximum = 2000;
					this->progressBarLevel1->Name = L"progressBarLevel1";
					this->progressBarLevel1->Size = System::Drawing::Size(675, 74);
					this->progressBarLevel1->TabIndex = 12;
					this->progressBarLevel1->Visible = false;
					// 
					// Barrier
					// 
					this->Barrier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Barrier.Image")));
					this->Barrier->Location = System::Drawing::Point(418, 284);
					this->Barrier->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->Barrier->Name = L"Barrier";
					this->Barrier->Size = System::Drawing::Size(30, 1090);
					this->Barrier->TabIndex = 36;
					this->Barrier->TabStop = false;
					this->Barrier->Visible = false;
					this->Barrier->Click += gcnew System::EventHandler(this, &lvl1Form::pictureBox2_Click);
					// 
					// Transition2
					// 
					this->Transition2->Interval = 1;
					this->Transition2->Tick += gcnew System::EventHandler(this, &lvl1Form::Transition2_Tick);
					// 
					// timerProgress
					// 
					this->timerProgress->Interval = 1;
					this->timerProgress->Tick += gcnew System::EventHandler(this, &lvl1Form::timerProgress_Tick);
					// 
					// movePlayerTimer
					// 
					this->movePlayerTimer->Enabled = true;
					this->movePlayerTimer->Interval = 1;
					this->movePlayerTimer->Tick += gcnew System::EventHandler(this, &lvl1Form::movePlayerTimer_Tick);
					// 
					// timeranimation
					// 
					this->timeranimation->Enabled = true;
					this->timeranimation->Interval = 1;
					// 
					// shootTimer
					// 
					this->shootTimer->Interval = 200;
					this->shootTimer->Tick += gcnew System::EventHandler(this, &lvl1Form::shootTimer_Tick);
					// 
					// BulletTimer
					// 
					this->BulletTimer->Interval = 1;
					this->BulletTimer->Tick += gcnew System::EventHandler(this, &lvl1Form::BulletTimer_Tick);
					// 
					// QuestionTransitionTimerShow
					// 
					this->QuestionTransitionTimerShow->Interval = 1;
					this->QuestionTransitionTimerShow->Tick += gcnew System::EventHandler(this, &lvl1Form::QuestionTransitionTimerShow_Tick);
					// 
					// QuestionTransitionTimerHide
					// 
					this->QuestionTransitionTimerHide->Interval = 1000;
					this->QuestionTransitionTimerHide->Tick += gcnew System::EventHandler(this, &lvl1Form::QuestionTransitionTimerHide_Tick);
					// 
					// DelayEnd
					// 
					this->DelayEnd->Interval = 4000;
					this->DelayEnd->Tick += gcnew System::EventHandler(this, &lvl1Form::DelayEnd_Tick);
					// 
					// lvl1Form
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
					this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
					this->ClientSize = System::Drawing::Size(1896, 1022);
					this->Controls->Add(this->panelLogin);
					this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
					this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
					this->MaximizeBox = false;
					this->Name = L"lvl1Form";
					this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					this->Text = L"Level 1";
					this->Activated += gcnew System::EventHandler(this, &lvl1Form::lvl1Form_Activated);
					this->Load += gcnew System::EventHandler(this, &lvl1Form::lvl1Form_Load);
					this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &lvl1Form::lvl1Form_KeyDown);
					this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &lvl1Form::lvl1Form_KeyUp);
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGeneralMilitary))->EndInit();
					this->panelLogin->ResumeLayout(false);
					this->panelLogin->PerformLayout();
					this->panelQuestion->ResumeLayout(false);
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerlevel1))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->space))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wasd))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Barrier))->EndInit();
					this->ResumeLayout(false);

				}

		#pragma endregion

				
				
				
				
				System::Windows::Forms::PictureBox^ bullet;

				public: void printFunc() { 
					bullet = gcnew System::Windows::Forms::PictureBox;
					bullet->Size = System::Drawing::Size(75, 50);
					bullet->Parent = panelLogin;
					bullet->Location = System::Drawing::Point(playerlevel1->Location.X, playerlevel1->Location.Y);
					bullet->Image = Image::FromFile("assets/PlayerMove/idle.gif");
					bullet->BringToFront();
					bullet->Hide();
				}
					definedPictureBox^ pictureBoxA;
					definedPictureBox^ pictureBoxB;
					definedPictureBox^ pictureBoxC;
					definedPictureBox^ pictureBoxD;
					definedPictureBox^ pictureBoxTF1;
					definedPictureBox^ pictureBoxTF2;

					void displayEndLvlScreen()
					{
						std::string windowPrompt = "Level 1 feedback (Office)\n\nTime Taken: " + std::to_string(LvlMethods->PlayerStats->timeTaken) + "\nNumber of correct answers: " + std::to_string(LvlMethods->PlayerStats->CorrectAnswers) + "\nScore: " + std::to_string(LvlMethods->PlayerStats->score);
						String^ unwrapped = gcnew String(windowPrompt.c_str());
						popup^ window = gcnew popup(unwrapped, 0, 0, "assets/Backgrounds/PurpleOfficeBackgroundDark.png");

						window->Visible = false;
						this->Hide();
						this->shootTimer->Enabled = false;
						this->timeranimation->Enabled = false;
						this->timerProgress->Enabled = false;
						this->movePlayerTimer->Enabled = false;
						this->QuestionTransitionTimerHide->Enabled = false;
						this->QuestionTransitionTimerShow->Enabled = false;
						this->Transition1->Enabled = false;
						this->Transition2->Enabled = false;
						this->BulletTimer->Enabled = false;
						this->DelayEnd->Stop();

						window->ShowDialog();

						//this->~lvl1Form();
						this->Close();
						//LvlMethods->QuestionsCompleted--;
					}

					void destroyTF1()
					{
						std::cout << "T des" << std::endl;
						//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();

						openedDoor = gcnew definedPictureBox(panelLogin, 100 + 60, 240, 855, 195, "assets/Doors/opened_door.png", false);
						openedDoor->setVisible(true);

						pictureBoxTF1 = gcnew definedPictureBox(panelLogin, 150, 240, 855, 195, "assets/Doors/closed_door.png", false);

						des->addObject(pictureBoxTF1, destroyFuncTF1);

						LvlMethods->QuestionAnswered(0);
						if (LvlMethods->QuestionsCompleted == 10)
						{
							DelayEnd->Start();
						}
						
							QuestionTransitionTimerShow->Start();
						
						std::cout << LvlMethods->QuestionsCompleted << std::endl;
					}
					void destroyTF2()
					{
						std::cout << "F des" << std::endl;
						//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();

						openedDoor = gcnew definedPictureBox(panelLogin, 100 + 60, 240, 855, 435, "assets/Doors/opened_door.png", false);
						openedDoor->setVisible(true);

						pictureBoxTF2 = gcnew definedPictureBox(panelLogin, 150, 240, 855, 435, "assets/Doors/closed_door.png", false);

						des->addObject(pictureBoxTF2, destroyFuncTF2);

						LvlMethods->QuestionAnswered(1);
						if (LvlMethods->QuestionsCompleted == 10)
						{
							DelayEnd->Start();
						}
						
							QuestionTransitionTimerShow->Start();
						
					}
					void destroyA()
					{
						//remove
						std::cout << "A des" << std::endl;
						//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
						openedDoor = gcnew definedPictureBox(panelLogin, 100 + 30, 120, 850, 195, "assets/Doors/opened_door.png", false);
						openedDoor->setVisible(true);

						
						pictureBoxA = gcnew definedPictureBox(panelLogin, 100, 120, 850, 195, "assets/Doors/closed_door.png", false);

						des->addObject(pictureBoxA, destroyFuncA);
						
						
						//remove
						//AddDoors();
						LvlMethods->QuestionAnswered(0);
						if (LvlMethods->QuestionsCompleted == 10)
						{
							DelayEnd->Start();
						}
						
							QuestionTransitionTimerShow->Start();
						
					}
					void destroyB()
					{
						//remove
						std::cout << "B des" << std::endl;
						//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();

						openedDoor = gcnew definedPictureBox(panelLogin, 100 + 30, 120, 850, 315, "assets/Doors/opened_door.png", false);
						openedDoor->setVisible(true);

						pictureBoxB = gcnew definedPictureBox(panelLogin, 100, 120, 850, 315, "assets/Doors/closed_door.png", false);
						
						des->addObject(pictureBoxB, destroyFuncB);
						//remove
						//AddDoors();
						LvlMethods->QuestionAnswered(1);

						if (LvlMethods->QuestionsCompleted == 10)
						{
							DelayEnd->Start();
						}
						
							QuestionTransitionTimerShow->Start();
						
					}
					void destroyC()
					{
						//remove
						std::cout << "C des" << std::endl;
						//Moving bullet logic to it's own method, and calling it on shoot
							//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
							//bullet->Hide();

						openedDoor = gcnew definedPictureBox(panelLogin, 100 + 30, 120, 850, 435, "assets/Doors/opened_door.png", false);
						openedDoor->setVisible(true);
						
						pictureBoxC = gcnew definedPictureBox(panelLogin, 100, 120, 850, 435, "assets/Doors/closed_door.png", false);
						
						des->addObject(pictureBoxC, destroyFuncC);
						//remove
						//AddDoors();
						LvlMethods->QuestionAnswered(2);

						if (LvlMethods->QuestionsCompleted == 10)
						{
							DelayEnd->Start();
						}
						
							QuestionTransitionTimerShow->Start();
						
					}
					void destroyD()
					{
						//remove 
						std::cout << "D des" << std::endl;
						//Moving bullet logic to it's own method, and calling it on shoot
						//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
						//bullet->Hide();

						openedDoor = gcnew definedPictureBox(panelLogin, 100 + 30, 120, 850, 555, "assets/Doors/opened_door.png", false);
						openedDoor->setVisible(true);

						pictureBoxD = gcnew definedPictureBox(panelLogin, 100, 120, 850, 555, "assets/Doors/closed_door.png", false);
						
						des->addObject(pictureBoxD, destroyFuncD);
						//remove
						//AddDoors();
						LvlMethods->QuestionAnswered(3);

						if (LvlMethods->QuestionsCompleted == 10)
						{
							DelayEnd->Start();
						}
						
							QuestionTransitionTimerShow->Start();
						
					}

			String^ projectDirectory = Application::StartupPath;
			String^ imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\idle.gif");
			//@avesh: text and timer

			definedPictureBox^ openedDoor;

			private: System::Void lvl1Form_Load(System::Object^ sender, System::EventArgs^ e) {

				std::ifstream file("textfiles/PlayerInfo.txt");
				std::string line;
				std::vector<std::string> v;
				if (file.is_open())
				{
					while (getline(file, line))
					{
						v.push_back(line);
					}

				}
				playerInfo^ p = gcnew playerInfo;
				for (int i = 0; i < 3; i++) {
					std::string s = v[i];
					if (i == 0) {
						p->username = gcnew String(s.c_str());

					}

					else if (i == 1) {
						p->score = std::stoi(s);
					}
					else {
						p->timeTaken = std::stoi(s);
					}

				}

				this->player = p;


				msclr::interop::marshal_context context;
				//std::string windowPrompt = "Welcome to the first level, " + context.marshal_as<std::string>(this->player->username) + ". This level takes place inside the M15 office headquarters. \nShould be a piece of cake for a top notch spy such as yourself. \nOh, and " + context.marshal_as<std::string>(this->player->username) + "... \n\nTry not to die;)";
				//String^ unwrapped = gcnew String(windowPrompt.c_str());
				//popup^ window = gcnew popup(unwrapped, 0, 0, "");
				//window->Visible = false;
				//this->Hide();
				//window->ShowDialog();

				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				System::String^ recruitname = this->player->username;
				
				Transition1->Start();

				playerlevel1->ImageLocation = "assets/PlayerMove/idle.gif";


				bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
				bullet->Hide();

				//initializing picturBoxArray
				pictureBoxArray = gcnew array<definedPictureBox^>(10);
				int pbWidth = 45;
				int pbHeight = 45;


				System::String^ imagePath = "assets/Logos/logo_default.png";
				Image^ image = Image::FromFile(imagePath);
				//poplating PicturBoxes
				for (int i = 0; i < 10; i++) {

					pictureBoxArray[i] = gcnew definedPictureBox(panelLogin, pbWidth, pbHeight, 723 + (i * pbWidth), 100, imagePath, false);

				}

				openedDoor = gcnew definedPictureBox();

				pictureBoxTF1 = gcnew definedPictureBox(panelLogin, 150, 240, 870, 195, "assets/Doors/closed_door.png", false);
				pictureBoxTF1->Hide();
				pictureBoxTF2 = gcnew definedPictureBox(panelLogin, 150, 240, 870, 435, "assets/Doors/closed_door.png", false);
				pictureBoxTF2->Hide();

				des->addObject(pictureBoxTF1, destroyFuncTF1);
				des->addObject(pictureBoxTF2, destroyFuncTF2);
				

				//Play background noise and music
				ambience->OfficeNoise();
				music->LevelOneMusic();


				
			}
			private: System::Void lvl1Form_Activated(System::Object^ sender, System::EventArgs^ e) {
		
			}

			private: System::Void panelLogin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			}
				bool isleft;
				bool canshoot = false;
		//@avesh: animation of the military general and text into screen
		//@avesh: animation of the military general and text
		//@Daniel: and button
		private: System::Void Transition1_Tick(System::Object^ sender, System::EventArgs^ e) {
			Point p1 = pbGeneralMilitary->Location;
			Point p2 = lblMessage1->Location;
			Point p3 = beginButton->Location;
			int x = p1.X, y1 = p2.Y, y2 = p3.Y;

			if (x <= 40)
			{
				x += 10;
			}
			if (y1 >= 400)
			{
				y1 -= 10;
			}
			if (y2 >= 470)
			{
				y2 -= 10;
			}
	
			pbGeneralMilitary->Location = Point(x, 230);
			lblMessage1->Location = Point(395, y1);
			beginButton->Location = Point(405, y2);
	
		}

		//@avesh: animation of the military general and text out of screen

		private: System::Void Transition2_Tick(System::Object^ sender, System::EventArgs^ e) {
			Point p1 = pbGeneralMilitary->Location;
			Point p2 = lblMessage1->Location;
			Point p3 = beginButton->Location;
	
			int x = p1.X, y1 = p2.Y, y2 = p3.Y;

			if (x >= -325)
			{
				x -= 10;
			}
			if (y1 <= 900)
			{
				y1 += 10;
			}
			if (y2 <= 1000)
			{
				y2 += 10;
			}

			// ensuring all stuff leaves screen before showing the player
			if (!(x >= -325) && !(y1 <= 900) && !(y2 <= 1000))
			{
				//Visible when game begins
				this->panelQuestion->Visible = true;
				this->progressBarLevel1->Visible = true;
				this->playerlevel1->Visible = true;
				this->playerlevel1->BringToFront();
				this->beginButton->Enabled = false;
				this->wasd->Visible = true;
				this->space->Visible = true;
				movePlayerTimer->Start();
				Transition2->Enabled = false;
				canshoot = true;

					pictureBoxA = gcnew definedPictureBox(panelLogin, 100, 120, 850, 195, "assets/Doors/closed_door.png", false);
					pictureBoxA->Show();
					pictureBoxB = gcnew definedPictureBox(panelLogin, 100, 120, 850, 315, "assets/Doors/closed_door.png", false);
					pictureBoxB->Show();
					pictureBoxC = gcnew definedPictureBox(panelLogin, 100, 120, 850, 435, "assets/Doors/closed_door.png", false);
					pictureBoxC->Show();
					pictureBoxD = gcnew definedPictureBox(panelLogin, 100, 120, 850, 555, "assets/Doors/closed_door.png", false);
					pictureBoxD->Show();

					des->addObject(pictureBoxA, destroyFuncA);
					des->addObject(pictureBoxB, destroyFuncB);
					des->addObject(pictureBoxC, destroyFuncC);
					des->addObject(pictureBoxD, destroyFuncD);

					//initializing picturBoxArray
		
					//poplating PicturBoxes
					for (int i = 0; i < 10; i++) {						
						pictureBoxArray[i]->setVisible(true);

					}
					LvlMethods->DisplayNextQuestionSet();

					gif = gcnew definedPictureBox(panelLogin, 466.5, 117, 714, 33, "assets/codelock.gif", false);
					gif->setVisible(true);

				
			}
			pbGeneralMilitary->Location = Point(x, 230);
			lblMessage1->Location = Point(395, y1);
			beginButton->Location = Point(405, y2);

			/*LvlMethods->DisplayNextQuestionSet();*/
	
		}
		private: System::Void panelLogin_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		//@Daniel: makes button and text invisible and starts the timer for each question
		private: System::Void beginButton_Click(System::Object^ sender, System::EventArgs^ e) {
			Transition1->Enabled = false;
			Transition2->Start();
			Barrier->Visible = true;
			

			this->timerProgress->Start();

			soundAnswer->MouseClick();

		}
		//@Daniel: timer for progress bar
		private: System::Void timerProgress_Tick(System::Object^ sender, System::EventArgs^ e) {
			
			this->progressBarLevel1->Increment(1);
			if (this->progressBarLevel1->Value == this->progressBarLevel1->Maximum) 
			{
				pictureBoxArray[count]->Image = Image::FromFile("assets/Logos/logo_incorrect.png");
				count++;
				gif->Image = Image::FromFile("assets/red.gif");
				LvlMethods->QuestionCompleted();
			}
			//this->progressBarLevel1->
			
		}
		private: System::Void panelLogin_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {
		}

		bool move_up = false;
		bool move_left = false;
		bool move_down = false;
		bool move_right = false;

		bool is_w_up = true;
		bool is_a_up = true;
		bool is_s_up = true;
		bool is_d_up = true;


		//@Daniel: listener for player movement
		//@avesh: Edited and redefined how the player movement works (Smooth movement)
		//@jaedon: Edited and redefined player animations
		//@avesh: Edited and redefined player movement and animations
		private: System::Void lvl1Form_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			e->SuppressKeyPress = true;
			if (LvlMethods->DisableControls != true) {
				if (e->KeyCode == Keys::W)
				{
					move_up = true;
					is_w_up = false;
				}
				if (e->KeyCode == Keys::A)
				{
					if (!isleft) {
						imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\runleft.gif");
						playerlevel1->ImageLocation = imagePath;
					}
					isleft = true;
					move_left = true;
					is_a_up = false;


				}
				if (e->KeyCode == Keys::S)
				{
					move_down = true;
					is_s_up = false;

				}
				if (e->KeyCode == Keys::D)
				{
					if (isleft) {
						imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\run.gif");
						playerlevel1->ImageLocation = imagePath;
					}
					isleft = false;
					move_right = true;
					is_d_up = false;



				}
				if (e->KeyCode == Keys::Space)
				{
					if (des->getBulletCount() == 0 && !isleft) {
						
						shootTimer->Start();
						//soundAnswer->Laser();
						soundAnswer->gunshot();
					}
				}
			}
	
		}
		//@avesh: Edited and redefined how the player movement works (Smooth movement)
		//@jaedon: Edited and redefined player animations
		//@avesh: Edited and redefined player movement and animations
		private: System::Void lvl1Form_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			e->SuppressKeyPress = true;
			
			switch (e->KeyCode)
			{
			case Keys::W:
				move_up = false;
				is_w_up = true;
		
				break;
			case Keys::A:
				move_left = false;
				is_a_up = true;
		
				break;
			case Keys::S:
				move_down = false;
				is_s_up = true;
		
				break;
			case Keys::D:
				move_right = false;
				is_d_up = true;
		
				break;

			default:
				break;
			}

			if (is_w_up && is_a_up && is_s_up && is_d_up)
			{
				if (isleft)
				{
					imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\idleleft.gif");
				} 
				else
				{
					imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\idle.gif");
				}
				playerlevel1->ImageLocation = imagePath;
			}
		}
		//@avesh: Edited and redefined how the player movement works (Smooth movement)
		//@jaedon: Edited and redefined player animations
		//@avesh: Edited and redefined player movement and animations
		String^ runAnimation = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\run.gif");
		String^ runLeftAnimation = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\runleft.gif");
		
		private: System::Void movePlayerTimer_Tick(System::Object^ sender, System::EventArgs^ e){
			Barrier->BringToFront();
			playerlevel1->SendToBack();
			if (!(is_w_up && is_a_up && is_s_up && is_d_up) && 
				(playerlevel1->ImageLocation != runAnimation &&
					playerlevel1->ImageLocation != runLeftAnimation))
			{
				
				if (isleft)
				{
					imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\runleft.gif");
				}
				else
				{
					imagePath = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\run.gif");
				}
				playerlevel1->ImageLocation = imagePath;
			}

			if (move_up && playerlevel1->Top > 190)
			{
		
				playerlevel1->Top += -5;
			}
			if (move_left && playerlevel1->Left > -35)
			{
		
				playerlevel1->Left += -5;
			}
			if (move_down && playerlevel1->Top < 600)
			{
				playerlevel1->Top += 5;
			}
			if (move_right && playerlevel1->Left < 160)
			{
				playerlevel1->Left += 5;
			}
		}

		

//@avesh: shoot animation
String^ shootAnimation = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\shoot.gif");
String^ shootLeftAnimation = System::IO::Path::Combine(projectDirectory, "assets\\PlayerMove\\shootleft.gif");
int countSpace = 0;
private: System::Void shootTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	des->update();
	if (countSpace == 0) {
		if (isleft)
		{
			playerlevel1->ImageLocation = shootLeftAnimation;
		} 
		else
		{
			playerlevel1->ImageLocation = shootAnimation;
		}
		movePlayerTimer->Stop();
		countSpace++;
	}
	else {
		playerlevel1->ImageLocation = imagePath;
		movePlayerTimer->Start();		
		countSpace = 0;
		shootTimer->Stop();

		//bullet->Show();
		//bullet->BringToFront();
		addBullet(10, 0, playerlevel1->Location.X + 80, playerlevel1->Location.Y + 19);
		BulletTimer->Start();
	}
	
}
private: System::Void BulletTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	des->update();
}
	
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   int count = 0;
	//@Daniel: timer to give player feedback
		private: System::Void QuestionTransitionTimerShow_Tick(System::Object^ sender, System::EventArgs^ e) {

			LvlMethods->DisableControls = true;
				if (LvlMethods->Correct) {
					ResultTextBox->Visible = true;
					ResultTextBox->Text = "Well Done!!!";
					Point pnt = Point();
					pnt.X = 600;
					pnt.Y = 260;
					ResultTextBox->Location = pnt;
					LvlMethods->Correct = false;
					
					QuestionTransitionTimerShow->Stop();
					pictureBoxArray[count]->Image = Image::FromFile("assets/Logos/logo_correctMK3.png");
					gif->Image = Image::FromFile("assets/green.gif");
					count++;

					//correct option sound effect
					soundAnswer->CorrectAnswer();
					soundImpact->BulletImpact();


				} else {
					ResultTextBox->Visible = true;
					ResultTextBox->Text = "You Suck!!!";
					Point pnt = Point();
					pnt.X = 600;
					pnt.Y = 260;
					ResultTextBox->Location = pnt;
					LvlMethods->Correct = false;
					QuestionTransitionTimerShow->Stop();
					pictureBoxArray[count]->Image = Image::FromFile("assets/Logos/logo_incorrect.png");
					gif->Image = Image::FromFile("assets/red.gif");
					count++;

					//incorrect sound effect
					soundAnswer->IncorrectAnswer();
					soundImpact->BulletImpact();

				}

				if (LvlMethods->QuestionsAnswered != 10) {
					QuestionTransitionTimerHide->Start();
				}

			
			
		
		
}
			//@Daniel: puts everything back after the player get feeback for 3 seconds
private: System::Void QuestionTransitionTimerHide_Tick(System::Object^ sender, System::EventArgs^ e) {
	LvlMethods->DisplayNextQuestionSet();
	//puts everything back
	//hide message and set its location
	ResultTextBox->Visible = false;
	Point pnt = Point();
	pnt.X = 0;
	pnt.Y = 0;
	ResultTextBox->Location = pnt;
	LvlMethods->DisableControls = false;
	QuestionTransitionTimerHide->Stop();

	//openDoorTF1->Hide();
	//openDoorTF2->Hide();
	openedDoor->Hide();
	//openDoorB->Hide();
	//openDoorC->Hide();
	//openDoorD->Hide();

	if (LvlMethods->QuestionType == "0")
	{
		pictureBoxA->Show();
		pictureBoxB->Show();
		pictureBoxC->Show();
		pictureBoxD->Show();
	}
	else if (LvlMethods->QuestionType == "1")
	{
		pictureBoxA->setLocation(870, pictureBoxA->Location.Y);
		pictureBoxB->setLocation(870, pictureBoxA->Location.Y);
		pictureBoxC->setLocation(870, pictureBoxA->Location.Y);
		pictureBoxD->setLocation(870, pictureBoxA->Location.Y);
		pictureBoxA->Hide();
		pictureBoxB->Hide();
		pictureBoxC->Hide();
		pictureBoxD->Hide();

		pictureBoxTF1->setLocation(850, pictureBoxTF1->Location.Y);
		pictureBoxTF2->setLocation(850, pictureBoxTF2->Location.Y);
		pictureBoxTF1->Show();
		pictureBoxTF2->Show();
	}
	
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	//@Faran
		void addBullet(double velocityX, double velocityY, int x_pos, int y_pos) {
			bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			bullet->Show();
			des->addBullet(bullet, velocityX, velocityY, x_pos, y_pos);
		}

	//@Daniel
	void AddDoors() {
		//des->clearDoors();
		if (this->LvlMethods->QuestionType == "0") {
			//re-prints door A
			std::cout << "A des" << std::endl;
			//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
			pictureBoxA = gcnew definedPictureBox(panelLogin, 100, 120, 850, 195, "assets/Doors/door.png", false);
			des->addObject(pictureBoxA, destroyFuncA);
			this->textBoxA->Show();
			textBoxTFA->Hide();

			//re-prints door B
			std::cout << "B des" << std::endl;
			//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
			pictureBoxB = gcnew definedPictureBox(panelLogin, 100, 120, 850, 315, "assets/Doors/door.png", false);
			des->addObject(pictureBoxB, destroyFuncB);
			this->textBoxB->Show();

			//re-prints door C
			std::cout << "C des" << std::endl;
			//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
			pictureBoxC = gcnew definedPictureBox(panelLogin, 100, 120, 850, 435, "assets/Doors/door.png", false);
			des->addObject(pictureBoxC, destroyFuncC);
			this->textBoxC->Show();
			textBoxTFB->Hide();

			//re-prints door D
			std::cout << "D des" << std::endl;
			//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
			pictureBoxD = gcnew definedPictureBox(panelLogin, 100, 120, 850, 555, "assets/Doors/door.png", false);
			des->addObject(pictureBoxD, destroyFuncD);
			this->textBoxD->Show();
		}
		//for True/False
		else {
			//re-prints door A
			std::cout << "A des" << std::endl;
			//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
			pictureBoxA = gcnew definedPictureBox(panelLogin, 329, 120, 850, 95, "assets/Doors/door.png", false);
			des->addObject(pictureBoxA, destroyFuncA);
			textBoxTFA->Show();

			//re-prints door B
			std::cout << "B des" << std::endl;
			//Moving bullet logic to it's own method, and calling it on shoot
			//bullet = gcnew definedPictureBox(panelLogin, 7, 2, playerlevel1->Location.X, playerlevel1->Location.Y, "assets/Bullets/3.png", false);
			//bullet->Hide();
			pictureBoxB = gcnew definedPictureBox(panelLogin, 329, 120, 850, 395, "assets/Doors/door.png", false);
			des->addObject(pictureBoxB, destroyFuncB);
			textBoxTFB->Show();
		}

	}


private: System::Void DelayEnd_Tick(System::Object^ sender, System::EventArgs^ e) {
	displayEndLvlScreen();
}
};
}

//@Daniel: 
