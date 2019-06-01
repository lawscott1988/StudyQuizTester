/*
 * siDataBase.h
 *
 *  Created on: 29 May 2019
 *      Author: Scotts Laptop
 */

#ifndef SOURCE_FILES_SIDATABASE_H_
#define SOURCE_FILES_SIDATABASE_H_

#include<vector>
#include"studyitem.h"

static class StudyItemDataBase {
	std::vector<StudyItem> studyRatingList;
public:
	StudyItemDataBase() = default;

	StudyItemDataBase(const StudyItem& si) :
		studyRatingList(si)
	{}

};



#endif /* SOURCE_FILES_SIDATABASE_H_ */
