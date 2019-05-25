#pragma once

#include <string>

class Question {
	std::string question;

public:

	Question() = default;

	Question(std::string q) :
		question(q)
	{}

	const std::string& getQuestion() const;
	void changeQuestion(const std::string& input);
};
