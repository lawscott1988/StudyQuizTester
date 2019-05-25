/*
 * studyrating.cpp
 *
 *  Created on: 19 May 2019
 *      Author: Scotts Laptop
 */

#include"studyrating.h"

StudyItem StudyRating::getStudyItem(const std::string& siName) const{
	for(auto& si : ratingMap) {
		if(si.first.getSiName() == siName) {
			return si.first;
		}
	}
	return StudyItem{};
}

void StudyRating::addStudyItem(const StudyItem& si) {
	ratingMap.insert(std::pair<StudyItem, int> (si, 0));
}

void StudyRating::addStudyItem(const StudyItem& si, const int& num) {
	ratingMap.insert(std::pair<StudyItem, int> (si, num));
}

const std::map<StudyItem, int>& StudyRating::getRatingMap() const {
	return ratingMap;
}
