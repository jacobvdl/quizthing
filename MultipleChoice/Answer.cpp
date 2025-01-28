#include "Answer.h"

Answer::Answer()
{
	answer = "No answer provided";
	isCorrect = false;
}

Answer::Answer(std::string a, bool _isCorrect)
{
	answer = a;
	isCorrect = _isCorrect;
}

Answer::~Answer()
{
	
}

void Answer::PrintAnswer()
{
	if (answer != "No answer provided") {
		std::cout << answer;
	}
}
