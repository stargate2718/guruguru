#pragma once

#include <string.h>
#include "IComparable.h"

class String : public IComparable
{
private:
	char value[256];
public:
	String() {}
	String(char* val) {
		strcpy_s(value, 256, val);
	}
	~String() {}

	char* get() { return value; }
	void set(char* val) {
		strcpy_s(value, 256, val);
	}

	virtual int compare(IComparable& comparison) override {
		String* foo = dynamic_cast<String*> (&comparison);
		return stricmp(this->value, foo->value);
	}
};