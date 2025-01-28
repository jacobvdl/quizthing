#pragma once
#include <iostream>
#include <vector>
#include "Answer.h"
class Question
{
public:
	Question();
	~Question();
	Question(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, bool c1, bool c2, bool c3, bool c4);
	void PromptQuestion();
	void setQuestion(std::string q);
	void addAnswer(std::string a, bool isCorrect);
	int AnswerCount() { return totalAnswers; }
	bool IsCorrect() { return correct; }
private:
	int totalAnswers = 0;
	std::string question;
	std::vector<Answer> answers;
	int chosenAnswer;
	bool correct = false;
};

