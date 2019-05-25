#include"answer.h"

const std::string& Answer::getAnswer() const{
	return answer;
}

void Answer::changeAnswer(const std::string& input) {
	answer = input;
}
