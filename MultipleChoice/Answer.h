#pragma once
#include <iostream>
class Answer
{
public:
	Answer();
	Answer(std::string a, bool _isCorrect);
	~Answer();
	bool IsCorrect() { return isCorrect; }
	std::string GetAnswer() { return answer; }
	void PrintAnswer();
private:
	std::string answer;
	bool isCorrect;
};

