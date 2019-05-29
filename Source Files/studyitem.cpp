
#include"studyitem.h"

const std::string& StudyItem::getSiName() const {
	return siName;
}

const std::string& StudyItem::getQuestion() const{
	return question.getQuestion();
}

const std::string& StudyItem::getAnswer() const{
	return answer.getAnswer();
}

const std::vector<std::string>& StudyItem::getWrongAnswers() const {
	return wrongAnswers;
}

const double& StudyItem::getRating() const {
	return rating;
}

void StudyItem::changeQuestion(const std::string& input) {
	question.changeQuestion(input);
}

void StudyItem::changeAnswer(const std::string& input) {
	answer.changeAnswer(input);
}

void StudyItem::changeSiName(const std::string& input) {
	siName = input;
}

void StudyItem::changeRating(const double& r) {
	rating = r;
}

bool StudyItem::operator<(const StudyItem& si) const {
	if(si.siName < this->siName) {
		return true;
	}
	return false;
}

bool operator== (const StudyItem& lhs, const StudyItem& rhs) {
	if(	lhs.getSiName() == rhs.getSiName() &&
		lhs.getQuestion() == rhs.getQuestion() &&
		lhs.getAnswer() == rhs.getAnswer() &&
		lhs.getWrongAnswers() == rhs.getWrongAnswers()
	) {
		return true;
	}
	return false;
}
