#pragma once
#include <math.h>
#include <iostream>
#include <fstream>
#include "popup.h"
#include "LoadQuestion.h"
namespace M15Namespace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BonusLevelOne
	/// </summary>
	public ref class BonusLevelOne : public System::Windows::Forms::Form
	{
	public:
		BonusLevelOne(void)
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
		~BonusLevelOne()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelBonusLevel;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblMessage1;
	private: System::Windows::Forms::PictureBox^ pbGeneralMilitary;

	private: System::Windows::Forms::Timer^ TargetTimer;
	private: System::Windows::Forms::Timer^ Transition2;
	private: System::Windows::Forms::Timer^ Transition1;
	private: System::Windows::Forms::ProgressBar^ countdownBar;

	private: System::Windows::Forms::Timer^ countdown;





	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BonusLevelOne::typeid));
			this->panelBonusLevel = (gcnew System::Windows::Forms::Panel());
			this->countdownBar = (gcnew System::Windows::Forms::ProgressBar());
			this->lblMessage1 = (gcnew System::Windows::Forms::Label());
			this->pbGeneralMilitary = (gcnew System::Windows::Forms::PictureBox());
			this->TargetTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Transition2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Transition1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->countdown = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelBonusLevel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGeneralMilitary))->BeginInit();
			this->SuspendLayout();
			// 
			// panelBonusLevel
			// 
			this->panelBonusLevel->BackColor = System::Drawing::Color::Transparent;
			this->panelBonusLevel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelBonusLevel.BackgroundImage")));
			this->panelBonusLevel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelBonusLevel->Controls->Add(this->countdownBar);
			this->panelBonusLevel->Controls->Add(this->lblMessage1);
			this->panelBonusLevel->Controls->Add(this->pbGeneralMilitary);
			this->panelBonusLevel->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->panelBonusLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->panelBonusLevel->ForeColor = System::Drawing::Color::White;
			this->panelBonusLevel->Location = System::Drawing::Point(-8, -20);
			this->panelBonusLevel->Name = L"panelBonusLevel";
			this->panelBonusLevel->Size = System::Drawing::Size(1200, 731);
			this->panelBonusLevel->TabIndex = 13;
			this->panelBonusLevel->Click += gcnew System::EventHandler(this, &BonusLevelOne::panelLogin_Click);
			this->panelBonusLevel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BonusLevelOne::panelBonusLevel_Paint);
			// 
			// countdownBar
			// 
			this->countdownBar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->countdownBar->ForeColor = System::Drawing::Color::Red;
			this->countdownBar->Location = System::Drawing::Point(350, 61);
			this->countdownBar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->countdownBar->Name = L"countdownBar";
			this->countdownBar->Size = System::Drawing::Size(472, 37);
			this->countdownBar->TabIndex = 12;
			this->countdownBar->Click += gcnew System::EventHandler(this, &BonusLevelOne::countdownBar_Click);
			// 
			// lblMessage1
			// 
			this->lblMessage1->AutoSize = true;
			this->lblMessage1->Font = (gcnew System::Drawing::Font(L"Courier New", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMessage1->Location = System::Drawing::Point(248, 731);
			this->lblMessage1->Name = L"lblMessage1";
			this->lblMessage1->Size = System::Drawing::Size(0, 41);
			this->lblMessage1->TabIndex = 1;
			this->lblMessage1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pbGeneralMilitary
			// 
			this->pbGeneralMilitary->BackColor = System::Drawing::Color::Transparent;
			this->pbGeneralMilitary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pbGeneralMilitary->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbGeneralMilitary.Image")));
			this->pbGeneralMilitary->Location = System::Drawing::Point(-244, 234);
			this->pbGeneralMilitary->Margin = System::Windows::Forms::Padding(0);
			this->pbGeneralMilitary->Name = L"pbGeneralMilitary";
			this->pbGeneralMilitary->Size = System::Drawing::Size(278, 455);
			this->pbGeneralMilitary->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbGeneralMilitary->TabIndex = 11;
			this->pbGeneralMilitary->TabStop = false;
			// 
			// TargetTimer
			// 
			this->TargetTimer->Interval = 1;
			this->TargetTimer->Tick += gcnew System::EventHandler(this, &BonusLevelOne::TargetTimer_Tick);
			// 
			// Transition2
			// 
			this->Transition2->Interval = 1;
			this->Transition2->Tick += gcnew System::EventHandler(this, &BonusLevelOne::Transition2_Tick);
			// 
			// Transition1
			// 
			this->Transition1->Interval = 1;
			this->Transition1->Tick += gcnew System::EventHandler(this, &BonusLevelOne::Transition1_Tick);
			// 
			// countdown
			// 
			this->countdown->Interval = 650;
			this->countdown->Tick += gcnew System::EventHandler(this, &BonusLevelOne::countdown_Tick);
			// 
			// BonusLevelOne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 691);
			this->Controls->Add(this->panelBonusLevel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"BonusLevelOne";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BonusLevelOne";
			this->Load += gcnew System::EventHandler(this, &BonusLevelOne::BonusLevelOne_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &BonusLevelOne::BonusLevelOne_KeyDown);
			this->panelBonusLevel->ResumeLayout(false);
			this->panelBonusLevel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGeneralMilitary))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void panelLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		
		}
	
		static int countTotal = 0;
		//@aveshr	   
		ref class definedButton : public Button {
		public:
			definedButton()
			{
				this->Size = System::Drawing::Size(100, 100);
			}
			definedButton(Panel^ panelBonusLevel)
			{
				this->Size = System::Drawing::Size(100, 100);
				this->Parent = panelBonusLevel;
				this->Visible = false;
				this->Click += gcnew System::EventHandler(this, &definedButton::button_Click);
				this->BackgroundImage = System::Drawing::Image::FromFile("assets/PlayerMove/idle.gif");
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			}

			void setLocation(int x, int y) {
				this->Location = System::Drawing::Point(x, y);
			}



			void setVisible(bool visible) {
				this->Visible = visible;
			}

		//private:
			bool operator ==(definedButton^ b1) {
				if (this->Bounds.IntersectsWith(b1->Bounds))
				{
					return true;
				}
				return false;
			}



			void button_Click(System::Object^ sender, System::EventArgs^ e) {
				this->Hide();
				countClick++;
				countTotal++;
			}
			
			int numClicks()
			{
				return countClick;
			}

			int countClick = 0;
		};

		//@aveshr
		array<definedButton^>^ buttons = gcnew array<definedButton^>(20);
		private: System::Void BonusLevelOne_Load(System::Object^ sender, System::EventArgs^ e) {
			Bitmap^ backgroundImage = gcnew Bitmap("assets/newpngggg.png");

			// Set the background image of the panel
			panelBonusLevel->BackgroundImage = backgroundImage;
			//Image^ backimage = Image::FromFile("assets/Lvl1.png");
			//panelBonusLevel->BackgroundImage = backimage;
			int x_pos;
			int y_pos;
			srand(time(0));
			for (int i = 0; i < buttons->Length; i++) {
				delete buttons[i];
				buttons[i] = gcnew definedButton(panelBonusLevel);

				
				x_pos = rand() % 1050 + 10;
				y_pos = rand() % 420 + 180;
				buttons[i]->setLocation(x_pos, y_pos);

				buttons[i]->Text = i.ToString() + "h";
				buttons[i]->ForeColor = System::Drawing::Color::White;
				buttons[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

				
				
			}

			for (int i = 0; i < buttons->Length; i++) {


				if (i > 0) {
					int j = i - 1;
					while (j >= 0) {
						if (buttons[i]==buttons[j])
						{
							x_pos = rand() % 1050 + 10;
							y_pos = rand() % 420 + 180;
							buttons[i]->setLocation(x_pos, y_pos);
							j = i - 1;
						}
						else{
							j--;
						}
					}
				}
			}

			lblMessage1->Text = "Welcome to the first bonus level\nHint: Use your mouse";
			Transition1->Start();
			
		}
		
		//@aveshr
		int targetNum = 0;
		private: System::Void TargetTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			buttons[targetNum]->setVisible(true);
			if (targetNum == buttons->Length-1) {
				TargetTimer->Stop();
			}
			targetNum++;
		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
//@aveshr
private: System::Void Transition2_Tick(System::Object^ sender, System::EventArgs^ e) {
	Point p1 = pbGeneralMilitary->Location;
	Point p2 = lblMessage1->Location;

	int x = p1.X, y1 = p2.Y;

	if (x >= -325)
	{
		x -= 15;
	}
	if (y1 <= 900)
	{
		y1 += 15;
	}

	// ensuring all stuff leaves screen before showing the player
	if (!(x >= -325) && !(y1 <= 900))
	{
		countdown->Start();
		TargetTimer->Start();
		Transition2->Enabled = false;
	}
	pbGeneralMilitary->Location = Point(x, 230);
	lblMessage1->Location = Point(395, y1);
}
//@aveshr
private: System::Void Transition1_Tick(System::Object^ sender, System::EventArgs^ e) {

	Point p1 = pbGeneralMilitary->Location;
	Point p2 = lblMessage1->Location;
	int x = p1.X, y1 = p2.Y;

	if (x <= 40)
	{
		x += 10;
	}
	if (y1 >= 400)
	{
		y1 -= 10;
	}

	pbGeneralMilitary->Location = Point(x, 230);
	lblMessage1->Location = Point(395, y1);
}
//@aveshr
private: System::Void BonusLevelOne_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		Transition1->Stop();
		Transition2->Start();
	}
}
//@aveshr
private: System::Void countdown_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (countTotal ==1) {
		countdownBar->Value = 100;
	}

	if (countdownBar->Value < 100) {
		if (countdownBar->Value + 6.5 > 100)
		{
			countdownBar->Value += (100 - countdownBar->Value);
		}
		else
		{
			countdownBar->Value = countdownBar->Value + 6.5;
		}
		
	}
	else {
		TargetTimer->Stop();
		countdown->Stop();
		
		int  currScore;
		for (int i = 0; i < buttons->Length; i++)
		{
			buttons[i]->Enabled = false;
			//countTotal += buttons[i]->numClicks();

		}

		std::vector<std::string> lines;
		
		std::ifstream file("textfiles/PlayerInfo.txt");
		std::string line;
		if (file.is_open())
		{
			while (getline(file, line))
			{
				lines.push_back(line);
			}
		}
		file.close();

		currScore = stoi(lines[1]);

		if (countTotal == 1) {
			
			lines[1] = std::to_string(stoi(lines[1]) + 5);

			std::ofstream outputFile("textfiles/PlayerInfo.txt");
			outputFile << lines[0] << std::endl;
			outputFile << lines[1] << std::endl;
			outputFile << lines[2] << std::endl;

			outputFile.close();

			std::string windowPrompt = "\nBonus Level One Feedback\n\n\nTargets destroyed: " + std::to_string(countTotal) +"\nPrevious Score: " + std::to_string(currScore)+"\nNew Score: " + lines[1] + "\n\nWell done, " + lines[0] + "!";
			String^ unwrapped = gcnew String(windowPrompt.c_str());
			popup^ window = gcnew popup(unwrapped, 0, 0, "assets/newpngnew.png");
			window->Visible = false;
			this->Hide();
			window->ShowDialog();

			this->Close();
		}
		else
		{ 
			std::string windowPrompt = "\n\nBonus Level One Feedback\n\n\nTargets destroyed: " + std::to_string(countTotal) + "\nPrevious Score: " + std::to_string(currScore) + "\nNew Score: " + std::to_string(currScore) + "\n\nBetter luck next time, " + lines[0] + ".";
			String^ unwrapped = gcnew String(windowPrompt.c_str());
			popup^ window = gcnew popup(unwrapped, 0, 0, "assets/newpngnew.png");
			
			window->Visible = false;
			this->Hide();
			window->ShowDialog();

			this->Close();
		}

		
	}
	

}
private: System::Void countdownBar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelBonusLevel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};


}
