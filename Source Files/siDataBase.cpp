/*
 * siDataBase.cpp
 *
 *  Created on: 29 May 2019
 *      Author: Scotts Laptop
 */

#include"siDataBase.h"

void siDataBase::writeToFile() {
	std::string output;
	std::cout << "Please name file to save to: ";
	std::cin >> output;
	output += ".txt";
	std::ofstream outfile(output);

	for(auto si : studyRatingList) {
		std::vector<std::string> vec = si.getWrongAnswers();

		outfile << si.getSiName() << ";"
				<< si.getQuestion() << ";"
				<< si.getAnswer() << ";"
				<< si.getRating() << ";";

		for(std::string s : vec) {
			outfile << s << ",";
		}

		outfile << "!"
				<< "\n";
	}

	outfile.close();
}

//STILL NEED TO WORK ON THIS BELOW, NOT WORKING HOW IT NEEDS TO BE
void siDataBase::readFromFile() {
	std::string output;
	std::ifstream infile;
	infile.open("testFile1.txt");

	while(!infile.eof()) {

		getline(infile, output);
		std::string line = output;
		std::cout << "Full Line: " << line << "\n";
		int first = 0;
		int second = 0;
		int count = 0;

		//This will get the Study Item name, Question, Answer and Rating
		//from the text file
		while(count < 4) {

			second = line.find(";", first);
			int subLength = second - first;
			std::string sub = line.substr(first, subLength);
			std::cout << sub << "\n";
			first = second + 1;

			//helper method to add these to studyitem database

			count++;
		}

		//gets wrong answer portion of study item in stored text file line
		first = line.find_last_of(";");
		second = line.find("!");
		int subLength = (second - 1) - first;
		std::string sub = line.substr(first + 1, subLength);

		//https://stackoverflow.com/questions/1894886/parsing-a-comma-delimited-stdstring
		//URL contains potential solution for splitting string into vector

	}
	infile.close();
}


