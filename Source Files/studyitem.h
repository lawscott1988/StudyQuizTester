#pragma once

#include<iostream>
#include<string>
#include<vector>
#include"question.h"
#include"answer.h"

class StudyItem {
	std::string siName;
	Question question;
	Answer answer;
	std::vector <std::string> wrongAnswers;

public:

	StudyItem() :
		siName("none"),
		question("no question set"),
		answer("no answer set"),
		wrongAnswers(std::vector<std::string>{})
	{}

	StudyItem(const std::string& name, Question q, Answer a) :
		siName(name),
		question(q),
		answer(a),
		wrongAnswers(std::vector<std::string>{})
	{}

	StudyItem(const std::string name,Question q, Answer a, std::vector<std::string> wa) :
		siName(name),
		question(q),
		answer(a),
		wrongAnswers(wa)
	{}

	const std::string& getSiName() const;
	const std::string& getQuestion() const;
	const std::string& getAnswer() const;
	const std::vector<std::string>& getWrongAnswers() const;
	void changeQuestion(const std::string& input);
	void changeAnswer(const std::string& input);
	void changeSiName(const std::string& input);
	bool operator< (const StudyItem& si) const;
};

bool operator== (const StudyItem& lhs, const StudyItem& rhs);
