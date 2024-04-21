#pragma once
#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <set>
#include <cstdlib>
#include <queue>

class LoadQuestion {   // outer class
public:
	LoadQuestion();
	~LoadQuestion();



	struct Question { // inner struct


		std::string QuestionType = "";
		std::string question = "";
		std::string OptionA = "";
		std::string OptionB = "";
		std::string OptionC = "";
		std::string OptionD = "";
		std::string CorrectOption = "";







	};

private:
	std::queue<Question> QuestionQueue;


};