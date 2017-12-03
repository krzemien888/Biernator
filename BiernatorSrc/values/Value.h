#pragma once

#include "stdafx.h"

class Value
{

private:
	std::vector<unsigned int> m_rawBits;
	int m_commaPosition;
	int m_base;

public:
	virtual std::string toString() = 0;

	unsigned int operator[](int position);

	bool checkIfChanges(int startIndex, bool checkRight = false);

	int getBase();

	void setBase(int Base);

	virtual bool isNegative() = 0;
};

