#ifndef processInput_h
#define processInput_h

std::string tolower(string &str);

class magicCalculator{
private:
    int progress;
    int hintsRemain;
    int score[2];
    Calculator* device;
public:
    magicCalculator();
    magicCalculator(int p);
    magicCalculator(int p, int scorea, int scoreb);
    ~magicCalculator();
    void parseInput(string &str);
    void hint(int i);

    float calculate(string &str);
    //do I need more of these?
};



#endif