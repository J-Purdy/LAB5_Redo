#ifndef _TESTING_MOCKS_HPP_
#define _TESTING_MOCKS_HPP_
#include <string>
using namespace std;
#include "base.hpp"


class ZeroOp : public Base
{
	public:
		ZeroOp(){}
		virtual double evaluate() {return 0.0;}
		virtual string stringify() {return "0.0";}
};

class PosOp : public Base
{
	public:
		PosOp() {} 
		virtual double evaluate() {return 5.6;}
		virtual string stringify() {return "5.6";}
};


class NegOp : public Base
{
	public:
		NegOp() {}
		virtual double evaluate() {return -5.6;}
		virtual string stringify() {return "-5.6";}
};

class OneOp : public Base
{
	public:
		OneOp() {}
		virtual double evaluate() {return 1.0;}
		virtual string stringify() {return "1.0";}
};

class NegOneOp : public Base
{
	public: 
		NegOneOp() {}
		virtual double evaluate() {return -1.0;}
		virtual string stringify() {return "-1.0";}
};

class TwoOp : public Base
{
	public:
		TwoOp() {}
		virtual double evaluate() {return 2.0;}
		virtual string stringify() {return "2.0";}
};

#endif