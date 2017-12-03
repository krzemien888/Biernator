#ifndef ALGORITHMFACTORY_H
#define ALGORITHMFACTORY_H

class AlgorithmFactory
{


public:
	static Algorithm getAlgorithm(UserArguments const& args);
};

#endif
