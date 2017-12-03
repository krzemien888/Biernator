#ifndef PARSER_H
#define PARSER_H

class Parser
{


public:
	virtual Value parse(std::string valueString, std::string baseString) = 0;
};

#endif
