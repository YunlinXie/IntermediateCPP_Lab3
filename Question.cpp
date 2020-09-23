/******************************************************************
CIS 22B
    Lab3: [Implementation file for the Question class.]
    Author: [Yunlin Xie]
    Date:[10/25/2018]
*******************************************************************/


#include "Question.h"
#include <iostream>
#include <string>
using namespace std;


/******************************************************************
The constructor accepts arguments for all member variables.
*******************************************************************/
Question::Question(string question, string ans1, string ans2, string ans3, string ans4, unsigned short int correct) {
    this -> question = question;
    answer1 = ans1;
    answer2 = ans2;
    answer3 = ans3;
    answer4 = ans4;
    correctAnswer = correct;
}

/******************************************************************
setQuestion assigns its argument to the  private member question.
*******************************************************************/
void Question::setQuestion(string question) {
    this -> question = question;
}

/******************************************************************
setAnswer1 assigns its argument to the  private member answer1.
*******************************************************************/
void Question::setAnswer1(string ans) {
    answer1 = ans;
}

/******************************************************************
setAnswer2 assigns its argument to the  private member answer2.
*******************************************************************/
void Question::setAnswer2(string ans) {
    answer2 = ans;
}

/******************************************************************
setAnswer3 assigns its argument to the  private member answer3.
*******************************************************************/
void Question::setAnswer3(string ans) {
    answer3 = ans;
}

/******************************************************************
setAnswer4 assigns its argument to the  private member answer4.
*******************************************************************/
void Question::setAnswer4(string ans) {
    answer4 = ans;
}

/********************************************************************
setCorrect assigns its argument to the  private member correctAnswer.
*********************************************************************/
void Question::setCorrect(unsigned short int correct) {
    correctAnswer = correct;
}

/******************************************************************
getQuestion returns the value in the private member question.
*******************************************************************/
string Question::getQuestion() {
    return question;
}

/******************************************************************
getAnswer1 returns the value in the private member answer1.
*******************************************************************/
string Question::getAnswer1() {
    return answer1;
}

/******************************************************************
getAnswer2 returns the value in the private member answer2.
*******************************************************************/
string Question::getAnswer2() {
    return answer2;
}

/******************************************************************
getAnswer3 returns the value in the private member answer3.
*******************************************************************/
string Question::getAnswer3() {
    return answer3;
}

/******************************************************************
getAnswer4 returns the value in the private member answer4.
*******************************************************************/
string Question::getAnswer4() {
    return answer4;
}

/**********************************************************************
getCorrectAnswer returns the value in the private member correctAnswer.
***********************************************************************/
unsigned short int Question::getCorrectAnswer() {
    return correctAnswer;
}
