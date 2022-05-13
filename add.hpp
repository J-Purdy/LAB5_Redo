#ifndef _ADD_HPP_
#define _ADD_HPP_

#include "base.hpp"
#include <string>
using namespace std;

class Add: public Base{
	private:
		Base* val1;
		Base* val2;
	public:
		Add(Base* x, Base* y) : Base()
		{
			val1  = x;
			val2 = y;
		}
		virtual double evaluate()
		{
			return (val1->evaluate() + val2->evaluate());
		}
		
		virtual string stringify()
		{
			return "("+to_string(val1->evaluate())+"+"+to_string(val2->evaluate())+")";
		}

};
#endif 