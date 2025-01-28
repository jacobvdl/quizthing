#include "Question.h"
#include "Answer.h"

Question::Question()
{
	question = "No question provided";
}

Question::~Question()
{
}

Question::Question(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, bool c1, bool c2, bool c3, bool c4)
{
	question = q;
	Answer A1(a1, c1);
	Answer A2(a2, c2);
	Answer A3(a3, c3);
	Answer A4(a4, c4);
	answers.push_back(A1);
	answers.push_back(A2);
	answers.push_back(A3);
	answers.push_back(A4);
	totalAnswers = 4;
}

void Question::PromptQuestion()
{
	system("cls");
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "============================================\n";
	std::cout << question << "\n\n";
	for (int i = 0; i < totalAnswers; i++) {
		std::cout << "[" << i+1 << "] ";
		answers[i].PrintAnswer();
		std::cout << std::endl;
	}
	/*for (int i = 0; i < 4; i++) {
		std::cout << "[" << i + 1 << "] ";
		answers[i].PrintAnswer();
		std::cout << std::endl;
	}*/
	std::cout << "============================================\n";
	std::cout << "\n\n";
	std::cin >> chosenAnswer;
	if (chosenAnswer <= totalAnswers && chosenAnswer > 0) {
		chosenAnswer--;
		if (answers[chosenAnswer].IsCorrect()) {
			std::cout << "\nYou chose the correct answer!\n\n";
			correct = true;
		}
		else {
			
			std::cout << "\nYou chose the incorrect answer.\n\n";

		}
	}
	else {
		std::cout << "\nIncorrect input. Try again!\n";
		PromptQuestion();
	}
}

void Question::setQuestion(std::string q)
{
	question = q;
}

void Question::addAnswer(std::string a, bool isCorrect)
{
	Answer newans(a, isCorrect);
	answers.push_back(newans);
	totalAnswers++;
}
