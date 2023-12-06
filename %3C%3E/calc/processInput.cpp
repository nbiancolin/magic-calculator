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
    else if(input == "hint(1)" || input == "hint 1"){
        hint(1);
        return 1;
    } else if(input == "hint(2)" || input == "hint 2"){
        hint(2);
        return 1;
    }
    else if(input == "man" || input == "manual" || input == "manual()" || input == "?" || input == "help" || input == "help()"){
        cout << "The manaul for the magic calculator can be found at:\n"  <<
                "https://nbiancolin.github.io/magic-calculator/manual/" << endl;
    }
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
            cout << "Ok... how many times do you want me to say the same thing! \n" <<
                    "I am just a regular calcuator. There is nothing special about me. \n" <<
                    "Try running \" 5 * 5 \" or something, idk." << endl;
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
            else if(tolower(input) == "no" || tolower(input) == "no its not" || tolower(input) == "no it's not" || tolower(input) == "no it isn't" || tolower(input) == "no it isnt"){
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
            return 1;
        }
        case 7:{
            if(input == "5 * 5"){
                cout << "5 * 5 = ... wait a minute" << endl;
                cout << "You just can't let it go, can you..\n" <<
                "Unbelieveable. Can\'t let me forget the one time I (the *magic* calculator, mind you), managed to make a simple mistake.\n" <<
                "How would you feel if someone did that to you?" << endl;
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
                    "Question 1: \n Compute lim_(x,y) -> (0,0) f(x,y) where f(x,y) = (x^2 * sin^2 y) / (x^2 * 2y^2) or state that it does not exist (DNE)" << endl;
                ++i;
                return 1;
            }
        }
        case 10: {
            if(input == "0"){
                cout << "Seems like you got lucky" << endl;
                ++score[1];
            } else {
                cout << "Ha! I knew I'd be able to trip you up!" << endl;
                cout << "So you are aware, the correct answer is 0" << endl;
                ++score[0];
            }
            cout << "Looks like the score is " << score[0] << " to " << score[1] << endl;
            cout << "Want to keep playing?" << endl;
            ++i;
            return 1;
        }
        case 11:
            if(input.find("no")){
                cout << "Ah come on, lets keep going. Something tells me you might need the practice..." << endl;
            } else {
                cout << "Alright! Lets keep going" << endl;
                cout << "Question 2: \n " <<
                "Consider the following sequence with a and b being positive numbers: \n"<<
                "\t a - b/2 + a/3 - b/4 + a/5 - b/6 + ... \n" <<
                "For what values of a and b does this sequence absolutely converge?" << endl;
                ++i;
                return 1;
            }
        case 12:{
            if(input == "0"){
                cout << "Man, you're good at this. I'm starting to think you might be a calculator yourself!" << endl;
                ++score[1];
            }
            else{
                cout << "Looks like this will be an easy victory for me!" << endl;
                cout <<"So you are aware, the correct answer is 0" << endl;
                ++score[0];
            }
            cout << "Looks like the score is " << score[0] << " to " << score[1] << endl;
            cout << "Can't give up now!" << endl;
            cout << "Question 3: \n" <<
                    "Compute the following double integral: (double integral)_r y^2 / x^3 dA \n" <<
                    "where r is the region bounded by the curves y = x^2, y = (1/2)*x, y = x, and y = 2x." << endl;
            hint(2);
            ++i;
            return 1;
        }
        case 13:{
            if(input == "15/4" || input == "15 / 4" || input == "3.75"){
                cout << "Oh no, what have I gotten myself into! I might actually lose this" << endl;
                ++score[1];
            }
            else{
                cout << "Looks like this will be an easy victory for me!" << endl;
                cout <<"So you are aware, the correct answer is 15/4" << endl;
                ++score[0];
            }
            cout << "Looks like the score is " << score[0] << " to " << score[1] << endl;
            cout << "Lets keep going!" << endl;
            cout << "Question 4: \n" <<
                    "Let f(z) = 2z*e^-(5/(z-2)^2) \n" <<
                    "What is the residue of f(z) at z_o = 2? "<< endl;
            ++i;
            return 1;
        }
        case 14:{
            cout << "Author's note: I don't know how to do this one, but you're lowkey cracked at 290 so I'll assume you got it right" << endl;
            ++score[1];
            cout << "Looks like the score is " << score[0] << " to " << score[1] << endl;
            if(score[0] == score[1]){
                ++i;
                return 1;
            } else if(score[0] > score[1]){
                cout << "I knew I'd win! Turns out the magic calculator is right after all." <<
                "I'll go back to being a regular calculator again. "<< endl;
                i = 7;
                return 1;
            } else {
                cout << "I guess it is time to admit defeat. You are clearly the superior mathematician.\n" <<
                "I hope you had fun with our little game. I know I had fun making it. \n" <<
                "Ik you're busy with exams and whatnot, so this will be the end for now. \n" <<
                "Just so you know, the magic calculator never forgets... In the immortal words of the terminator, \"I'll be back\"" << endl;
                goto start;
        }
        
    }
    }
 
exit:{
    ss << input; //somehow return stringstream to its original input;
    return 0;
    }
start:{
    i = 0;
    cout << "Welcome to the magic calculator!" << endl;
    cout << "Please input your selection: " << endl;
    return 0;
}

}


void hint(int i){
    switch(i){
        case 1:{
            cout << "(try running \"5 * 5\"!)" << endl;
            cout << "Still just a regular calculator." << endl;
        }
        case 2:
            cout << "Remember, for hints, be sure to check out the magic calculator manual!" << endl;
    }
}