#ifndef _DIV_HPP_
#define _DIV_HPP_

#include "base.hpp"
#include <string>
using namespace std;

class Div : public Base
{
	private:
		Base* val1;
		Base* val2;
	public:
		Div(Base* x, Base* y) : Base()
		{
			val1 = x;
			val2 = y;
		}
		virtual double evaluate()
		{
			return (val1->evaluate() / val2->evaluate();
		}
		virtual string stringify()
		{
			return return "("+to_string(val1->evaluate())+"/"+to_string(val2->evaluate())+")";
		{

#endif 