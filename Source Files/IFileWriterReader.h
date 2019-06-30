/*
 * IFileWriterReader.h
 *
 *  Created on: 1 Jun 2019
 *      Author: Scotts Laptop
 */

#ifndef SOURCE_FILES_IFILEWRITERREADER_H_
#define SOURCE_FILES_IFILEWRITERREADER_H_

#include<fstream>
#include<iostream>

class IFileWriterReader {
public:
	IFileWriterReader(){}
	virtual ~IFileWriterReader(){};

	virtual void writeToFile() = 0;
	virtual void readFromFile() = 0;

};



#endif /* SOURCE_FILES_IFILEWRITERREADER_H_ */
