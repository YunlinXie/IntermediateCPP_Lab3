/******************************************************************
CIS 22B
    Author: [Yunlin Xie]
    Date:[10/25/2018]
*******************************************************************/

#include "Question.h"
#include <iostream>
#include <string>
using namespace std;


void print(string, string, string, string, string);
void compareAnswer(unsigned short int, unsigned short int);


int main()
{
    Question TriviaGame[] = {Question("Question#1: In what place was Christmas once illegal?",
                                          "Brazil",
                                          "Russia",
                                          "France",
                                          "England",
                                          4),
                                 Question("Question#2: Coulrophobia means fear of what?",
                                          "Clowns",
                                          "Old People",
                                          "Sacred Things",
                                          "Jews",
                                          1),
                                 Question("Question#3: How many dimples are there on a regular golf ball?",
                                          "337",
                                          "418",
                                          "336",
                                          "294",
                                          3),
                                 Question("Question#4: Which of the following is the longest running American"
                                          "animated TV show?",
                                          "Rugrats",
                                          "Simpsons",
                                          "Pokemon",
                                          "TV Funhouse",
                                          2),
                                 Question("Question#5: Every year, over 8800 people injure themselves with what"
                                          "apparently harmless, tiny object?",
                                          "Knife",
                                          "Pencil",
                                          "Baseball bat",
                                          "Toothpick",
                                          4),
                                 Question("Question#6: How many pounds of pressure do you need to rip off your ear?",
                                          "7 pounds",
                                          "2 pounds",
                                          "17 pounds",
                                          "11 pounds",
                                          1),
                                 Question("Question#7: At what temperature are Fahrenheit and Celsius the same?",
                                          "0",
                                          "-40",
                                          "50",
                                          "92",
                                          2),
                                 Question("Question#8: What are the odds of being killed by space debris?",
                                          "1 in 5 million",
                                          "1 in 1 trillion",
                                          "1 in 10 billion",
                                          "1 in 5 billion",
                                          4),
                                 Question("Question#9: What percentage of Japanese citizens are cremated?",
                                          "26",
                                          "5",
                                          "98",
                                          "11",
                                          3),
                                 Question("Question#10: In what key do most American car-horns honk?",
                                          "C",
                                          "E",
                                          "F",
                                          "G",
                                          3),};

    int choice;

    while(true)
    {
        cout << "This is a ten questions trivia game. To answer each question, please choose the number before";
        cout << " the answer that you think is correct. You can enter '0' to quit the game at anytime." << endl;
        cout << "Now, press '1' to star the game, or press '0' to quit:  ";

        int temp;
        cin >> temp;
        if(temp == 0)
        {
            cout << "Good Bye !!!!" << endl;
            return 0;
        }

        if(temp != 0)
        {
            for(int i = 0; i < 10; i++)
            {
                print(TriviaGame[i].getQuestion(), TriviaGame[i].getAnswer1(), TriviaGame[i].getAnswer2(),
                      TriviaGame[i].getAnswer3(), TriviaGame[i].getAnswer4());
                cin >> choice;
                compareAnswer(choice, TriviaGame[i].getCorrectAnswer());
            }

            cout << "Do you want to play this game again? Press '1' to play or press '0' to quit: ";
            cin >> temp;
            if(temp == 0)
            {
                cout << "Good Bye  !!!!" << endl;
                return 0;
            }
        }
    }
}

/******************************************************************
This function accepts four string parameters and print them out in
a certain format. It works as a function to print out questions and
answer choices.
*******************************************************************/
void print(string Q, string A1, string A2, string A3, string A4)
{
    cout << endl;
    cout << Q << endl;
    cout << "1.  " << A1 << endl;
    cout << "2.  " << A2 << endl;
    cout << "3.  " << A3 << endl;
    cout << "4.  " << A4 << endl;
    cout << "Please enter your choice, choose one of the leading number or '0' to quit: ";
}

/******************************************************************
This function accepts two parameters: user's choice and the correct
answer. Then it will tell user whether his choice is correct or not,
and also show the correct answer if it is not.
*******************************************************************/
void compareAnswer(unsigned short int choice, unsigned short int CorrectAnswer)
{
    if(choice == 0)
    {
        cout << "Good Bye !!!!" << endl;
        return 0;
    }
    else if(choice == CorrectAnswer)
    {
        cout << "Congratulation! Your answer is correct!" << endl;
    }
    else if((choice != CorrectAnswer) && (choice > 0) && (choice < 5))
    {
        cout << "Wrong answer, the correct answer is:   Answer #" << CorrectAnswer << endl;
    }
    else
    {
        cout << "Please renter a valid choice between 1-4:";
        cin >> choice;
        compareAnswer(choice, CorrectAnswer);
    }
}
