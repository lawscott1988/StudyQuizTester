#include"question.h"

const std::string& Question::getQuestion() const{
	return question;
}

void Question::changeQuestion(const std::string& input) {
	question = input;
}
