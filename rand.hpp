#ifndef _RAND_HPP_
#define _RAND_HPP_

#include "base.hpp"
#include <string>
using namespace std;

class Rand: public Base{
	private:
		double r;
	public:
		Rand() : Base()
		{
			r = rand() % 100;
		}
		virtual double evaluate()
		{
			return r;
		}
		
		virtual string stringify()
		{
			return to_string(r);
		}

#endif