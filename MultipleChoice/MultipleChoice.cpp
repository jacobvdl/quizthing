#include <iostream>
#include <vector>
#include "Question.h"

int main()
{
    std::vector<Question> questions;
    questions.push_back(Question("Test question", "incorrect", "correct", "incorrect2", "incorrect", false, true, false, false));
    questions.push_back(Question("Test question2", "incorrect", "correct", "incorrect2", "also correct", false, true, false, true));

    int score = 0;
    int totalQuestions = questions.size();
    
    while (questions.size() != 0) {
        Question selected = questions.front();
        selected.PromptQuestion();
        if (selected.IsCorrect())
            score++;
        
        questions.erase(questions.begin());
    }

    std::cout << "You finished the quiz!\nYou got " << score << "/" << totalQuestions << " questions correct.";
}
