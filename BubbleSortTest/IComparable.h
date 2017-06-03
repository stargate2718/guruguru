#pragma once

class IComparable
{
public:
	virtual int compare(IComparable&) = 0;
};