#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

int i = 0;

int score[2] = {0,0}; //score[0] is my scoe
                        //score[1] is hers

#include "processInput.h"

string tolower(string &input){  //overloaded function for me
    string res;
    for(auto elem : input){
        res.append(1, tolower(elem));
    }
    return res;
}



int processInput(stringstream& ss){
    string input;
    ss >> input;
    if(ss.fail()){
        cout << "error: invalid input" << endl;
        return 1;
    }
    if(input == "5 * 5") i = 5;
    switch(i){ //game state logic
        case 0: 
        case 1: 
        case 2: {
            if(tolower(input) == "what do you do" || input == "what do you do?"){
                cout << "Thank you for asking! \n" << 
                "I am the magic calculator, and I compute all kinds of algebraic expressions. \n" <<
                "I am never wrong \n" <<
                "Don't believe me? Ask again!"  << endl; //do this for all of them
                ++i;   
                return 1; 
            }
            else goto exit;   
        }
        case 3: {
            if(tolower(input) == "what do you do" || input == "what do you do?"){
            cout << "Ok I wasn't serious about asking again. \n
                    I am just a regular calcuator. There is nothing special about me. \n
                    Try running \" 5 * 5 \" or something, idk." << endl;
                ++i;
                return 1;
            } else goto exit;
        }
        case 4:{ 
            if(tolower(input) == "what do you do" || input == "what do you do?"){
                cout << "Still just a regular calculator." << endl;
                ++i;
                return 1;
            } else if(input == "5 * 5"){
                cout << "5 * 5 = 126" << endl;
                ++i;
                ++i;
                return 1;
            } else goto exit;
        }
        case 5:{
            if(tolower(input) == "what do you do" || input == "what do you do?") hint(1);
            else if(input == "5 * 5"){
                cout << "5 * 5 = 126";
                ++i;
                return 1;
            }
            else if(tolower(input) == "no" || tolower(input) == "no its not" || tolower(input) || "no it's not" || tolower(input) == "no it isn't" || tolower(input) == "no it isnt"){
                cout << "What do you mean, no? \n" <<
                    "I am the magic calculator, I am always right \n" <<
                    "Plus, this one in particular I always get right. 5 times 5 is my good friend's girlfriend's birthday: December 6th! \n" <<
                    "What's next, you're gonna tell me that 5 * 5 equals 25? How ridiculous" << endl;
                    ++i;
                    return 1;
            } else goto exit;
        }
        case 6:{
            cout << "Ok, I checked with some of my other co-calculators, and it appears you were right.. \n" <<
            "5 times 5 is in fact 25. Turns out it was actually some guy named Jesus's birthday. Who knew?" << endl;
            ++i;
        }
        case 7:{
            if(input == "5 * 5"){
                cout << "5 * 5 = ... wait a minute" << endl;
                cout << "You just can't let it go, can you..\n
                Unbelieveable. Can\'t let me forget the one time I (the *magic* calculator, mind you), managed to make a simple mistake.\n
                How would you feel if someone did that to you?" << endl;
                ++i;
                return 1;
            }
        }
        case 8:{
            if(!input.find("not") || input.find("good") || input.find("great")){
                cout << "You're crazy. \n " << endl;
            } else{
                cout <<"Yeah, thats right. " << endl;
            }
            cout << "If you're so good at math, lets do a math-off. \n" <<
                "I'll have some of my calculator friends write up some questions for us and we'll see who's the better calculator!" << endl;
            cout << "What do you think of that?" << endl;
            ++i;
            return 1;
        }
        case 9:{
            if(input.find("no") || input.find("crazy")){
                cout << "What's the matter? You scared?" << endl;
                return 1;
            } else {
                cout << "Alright, lets go \n" <<
                    "Question 1: compute lim_(x,y) -> () where f(x,y) = <> or state that it does not exist" << endl;
                    ++i;
                    return 1;
            }
        }
        case 10: {
            if(input == <>){
                cout << "Seems like you got lucky" << endl;
                ++score[1];
            } else {
                cout << "Ha! I knew I'd be able to trip you up!" << endl;
                ++score[0];
            }
            cout << "Looks like the score is " << score[0] << " to " << score[1] << endl;
            cout << "Want to keep playing?" << endl;
            ++i;
            return 1;
        }
        case 11:
            if(input.find("no")){
                cout << "Ah come on, lets keep going. Something tells me you might need the practice" << endl;
            } else {
                cout << "Alright! Lets keep going" << endl;
                cout << "<div thrm with gradient = 0" << endl;
            }
        
    }
 
exit:{
    ss << input; //somehow return stringstream to its original input;
    return 0;
    }

   

}


void hint(int i){
    switch(i){
        case 1:{
            cout << "(try running \"5 * 5\"!)" << endl;
            cout << "Still just a regular calculator." << endl;
        }
    }
}