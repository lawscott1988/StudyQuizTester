/*
 * main.cpp
 *
 *  Created on: 19 May 2019
 *      Author: Scotts Laptop
 */

#include<iostream>
#include<assert.h>
#include<vector>
#include<map>
#include"answer.h"
#include"question.h"
#include"studyitem.h"
#include"studyrating.h"
#include"menu.h"
#include"siDataBase.h"

int main()
{
	Question q{ "What is my hair colour?" };
	Answer a{"Blue"};

	//HAVEN'T TESTED DEFAULT CONSTRUCTORS FOR QUESTION AND ANSWER YET!!

	//test constructors for Question and Answer objects work
	//tests get member functions work
	assert(q.getQuestion() == "What is my hair colour?");
	assert(a.getAnswer() == "Blue");

	q.changeQuestion("What is your dog's name?");
	a.changeAnswer("Molly");

	//test change member functions work
	assert(q.getQuestion() == "What is your dog's name?");
	assert(a.getAnswer() == "Molly");

	StudyItem si{};

	//test default StudyItem constructor works and below member functions work
		//no longer any default constructor, member fields are set to custom default values
		//see StudyItem header for more details
	assert(si.getSiName() == "none");
	assert(si.getQuestion() == "no question set");
	assert(si.getAnswer() == "no answer set");
	assert(si.getWrongAnswers().size() == 0);

	Question q2{"What is the 2nd layer in the OSI called?"};
	Answer a2{"Data-link Layer"};
	StudyItem si2{"OSI Test 1", q2, a2};

	//test first constructor of StudyItem works, member functions below work as well
	assert(si2.getSiName() == "OSI Test 1");
	assert(si2.getQuestion() == "What is the 2nd layer in the OSI called?");
	assert(si2.getAnswer() == "Data-link Layer");
	assert(si2.getWrongAnswers().size() == 0);

	std::vector<std::string> vec1{"Physical Layer", "Application Layer", "Network Layer"};
	StudyItem si3{"OSI Test 2", q2, a2, vec1};

	//test 2nd constructor of StudyItem with vector parameter works
	assert(si3.getWrongAnswers().size() == 3);

	std::vector<std::string> testVec{"Physical Layer", "Application Layer", "Network Layer"};

	//test getWrongAnswers function works correctly
	assert(si3.getWrongAnswers() == testVec);

	si3.changeQuestion("What is the 4th layer in the OSI called?");
	si3.changeAnswer("Transport Layer");
	si3.changeSiName("OSI Test 3");

	//test changeQuestion, changeAnswer and changeSiName member functions work correctly
	assert(si3.getQuestion() == "What is the 4th layer in the OSI called?");
	assert(si3.getAnswer() == "Transport Layer");
	assert(si3.getSiName() == "OSI Test 3");

	StudyRating sr{};
	StudyRating sr2{si};
	StudyRating sr3{si2, 3};
	StudyRating sr4{si3, 4};

	//testing default constructor for StudyRating works
	assert(sr.getRatingMap().empty() == true);

	//testing two other constructors work, testing getStudyItem works
	assert(sr4.getStudyItem("OSI Test 3") == si3);

	StudyRating srNewTest{};
	StudyItem gSiReturnTester{"nullItem", Question{"nullItem"}, Answer{"nullItem"}};

	//another test for getStudyItem to see if it returns StudyItem with nullItem fields if nothing is found
	assert(srNewTest.getStudyItem("OSI Test Another") == gSiReturnTester);

	StudyItem sIcontainsSiTest{"siTester", Question{"siTesterQ"}, Answer{"siTesterA"}};
	StudyItem addSiTester1{"test1", Question{"test1"}, Answer{"test1"}};
	StudyItem addSiTester2{"test2", Question{"test2"}, Answer{"test2"}};
	StudyRating srContainsSiTest{sIcontainsSiTest, 0};
	srContainsSiTest.addStudyItem(addSiTester1);
	srContainsSiTest.addStudyItem(addSiTester2);

	//test for containsStudyItem; test for addStudyItem
	assert(srContainsSiTest.containsStudyItem("siTester") == true);
	assert(srContainsSiTest.containsStudyItem("test1") == true);
	assert(srContainsSiTest.containsStudyItem("test2") == true);

	Menu mainMenu{};
	//test menu items 1 and 2
	assert(mainMenu.item1 == "Quick Quiz Practice");
	assert(mainMenu.item2 == "Start Quiz Practice");

	StudyItem newSi1{};
	Question question1{"q1"};
	Answer answer1{"a1"};
	std::vector<std::string> vector1 {"cheese", "sandwich"};
	StudyItem newSiFull{"newName", question1, answer1, vector1, 30};
	newSi1.changeRating(20);

	assert(newSi1.getRating() == 20);
	assert(newSiFull.getSiName() == "newName");
	assert(newSiFull.getQuestion() == "q1");
	assert(newSiFull.getAnswer() == "a1");
	assert(newSiFull.getWrongAnswers().size() == 2);
	assert(newSiFull.getRating() == 30);

	siDataBase db1{newSiFull};
	//db1.writeToFile();
	siDataBase db2{};
	//db1.writeToFile();
	db2.readFromFile();

}

