#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "processInput.h"
#include "calculator.h"

int main(){  //For more information on the calculator, check out the manual!\
    
    cout << "Welcome to the magic calculator!" << endl;
    cout << "Please input your selection: " << endl;
    int progress = 0;
    while(true){
        
        cout << "> " << flush;
        string input;
        getline(cin, input);
        
        int res = processInput(input, progress); //ensures that input is actually an algebraic expression
                                            //sometimes has undefined behaviour if given specific prompts, need to further test
        if(!res) { //if  processInnput returns a non-zero exit code, run the calculator
            stringstream lineStream(input);
            calc(lineStream);
        //ask it "what do you do?"
        }
    }
    cout << "Thank you for using the magic calculator \n" <<
            "Have a nice day!" << endl;
    return 0;
}
