#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "processInput.h"
#include "calculator.h"

int main(){  //For more information on the calculator, check out the manual!\
   
    cout << "Welcome to the magic calculator!" << endl;
    cout << "Please input your selection: " << endl;
    while(true){
        stringstream lineStream;
        cout << "> ";
        string input;
        getline(cin, input);
        lineStream << input;
        if(lineStream.eof()) break;
        int res = processInput(lineStream); //ensures that input is actually an algebraic expression
                                            //sometimes has undefined behaviour, need to further test
        if(!res) calc(lineStream);
        //ask it "what do you do?"
    }
    cout << "Thank you for using the magic calculator \n" <<
            "Have a nice day!" << endl;
            return;
}
