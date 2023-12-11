#ifndef calculator_h
#define calculator_h

#include <vector>
#include <sstream>

void calc(stringstream &ss);

class Operator{
public:
    virtual float calculate(float a, float b) const =0;
    virtual ~Operator(); //virtual dectrustor, bc, Im not sure
};

class Add : public Operator{ //0
public:
    float calculate(float a, float b) const ; //why override?
};

class Subtract : public Operator{ //1
public:
    float calculate(float a, float b) const override; 
};

class Multipy : public Operator{ //2
public:
    float calculate(float a, float b) const override; 
};

class Divide : public Operator{ //3
public:
    float calculate(float a, float b) const override; 
};

class Power : public Operator{ //4
public:
    float calculate(float a, float b) const override; 
};

class Calculator{ //ignore this vector stuff
private:
    std::vector<Operator*> operators; //stores pointers to operator objects
public:
    Calculator();
    ~Calculator();

    void addOperator(Operator* op);
    float calc(float a, float b, char op);
};


//objects for each operation (practice for final)



#endif //calculator_h