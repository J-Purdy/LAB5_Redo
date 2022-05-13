#ifndef _POW_HPP_
#define _POW_HPP_

#include "base.hpp"
#include <string>
#include <cmath>
using namespace std;

class Pow: public Base{
	private:
		Base* val1;
		Base* val2;
	public:
		Pow(Base* x, Base* y) : Base()
		{
			val1  = x;
			val2 = y;
		}
		virtual double evaluate()
		{
			return pow(val1->evaluate(), val2->evaluate());
		}
		
		virtual string stringify()
		{
			return "("+to_string(num1->evaluate())+"**"+to_string(num2->evaluate())+")";
		}

#endif