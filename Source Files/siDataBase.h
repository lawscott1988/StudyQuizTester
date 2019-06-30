/*
 * siDataBase.h
 *
 *  Created on: 29 May 2019
 *      Author: Scotts Laptop
 */

#ifndef SOURCE_FILES_SIDATABASE_H_
#define SOURCE_FILES_SIDATABASE_H_

#include<vector>
#include<algorithm>
#include"studyitem.h"
#include"IFileWriterReader.h"

class siDataBase : public IFileWriterReader {
	std::vector<StudyItem> studyRatingList;


public:
	siDataBase() = default;

	siDataBase(const StudyItem& si) :
		studyRatingList(std::vector<StudyItem>{si})
	{}

	void writeToFile();
	void readFromFile();
};



#endif /* SOURCE_FILES_SIDATABASE_H_ */
