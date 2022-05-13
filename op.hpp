#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
using namespace std;

class Op : public Base {
    protected:
	double var;
    public:
        Op(double value) : Base() {var = value;  }
        virtual double evaluate() { return var; }
        virtual std::string stringify() { return to_string(var); }
};




#endif //__OP_HPP__