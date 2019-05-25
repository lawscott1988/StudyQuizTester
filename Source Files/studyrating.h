/*
 * studyrating.h
 *
 *  Created on: 19 May 2019
 *      Author: Scotts Laptop
 */

#ifndef SOURCE_FILES_STUDYRATING_H_
#define SOURCE_FILES_STUDYRATING_H_

#include<map>
#include"studyitem.h"

class StudyRating {
	std::map<StudyItem, int> ratingMap;	//int is rating level

public:

	StudyRating() = default;

	StudyRating(StudyItem si) {
		ratingMap.insert(std::pair<StudyItem, int> (si, 0));
	}

	StudyRating(StudyItem si, const int& num) {
		ratingMap.insert(std::pair<StudyItem, int> (si, num));
	}

	StudyItem getStudyItem(const std::string& siName) const;
	void addStudyItem(const StudyItem& si);
	void addStudyItem(const StudyItem& si, const int& num);
	const std::map<StudyItem, int>& getRatingMap() const;
	bool containsStudyItem(const std::string& siName)  const;
};



#endif /* SOURCE_FILES_STUDYRATING_H_ */
