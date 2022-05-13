#ifndef _MULT_HPP_
#define _MULT_HPP_

#include "base.hpp"
#include <string>
using namespace std;

class Mult : public Base
{
	private:
		Base* val1;
		Base* val2;
	public:
		Mult(Base* x, Base* y) : Base()
		{
			val1  = x;
			val2 = y;
		}
		virtual double evaluate()
		{
			return (val1->evaluate() * val2->evaluate();
		}
		
		virtual string stringify()
		{
			return "("+to_string(num1->evaluate())+"*"+to_string(num2->evaluate())+")";
		}

#endif 