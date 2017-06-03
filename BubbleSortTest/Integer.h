#pragma once

#include "IComparable.h"

class Integer : public IComparable
{
private:
	int value;
public:
	Integer() {}
	Integer(int val) : value(val) {}
	~Integer() {}

	int get() { return value; }
	void set(int val) { this->value = val; }

	virtual int compare(IComparable& comparison) override {
		//
		// QlFhttps://stackoverflow.com/questions/27098650/how-to-make-comparable-class-in-c
		//
		Integer* foo = dynamic_cast<Integer*> (&comparison);
		if (this->value > foo->value) {
			return 1;
		}
		else if (this->value == foo->value) {
			return 0;
		}
		else {
			return -1;
		}
	}
};