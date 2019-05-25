#pragma once

#include<string>

class Answer {
	std::string answer;

public:

	Answer() = default;

	Answer(std::string input) : 
		answer(input)
	{}

	const std::string& getAnswer() const;
	void changeAnswer(const std::string& input);
};
