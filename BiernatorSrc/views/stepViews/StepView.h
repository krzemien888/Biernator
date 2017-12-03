#ifndef STEPVIEW_H
#define STEPVIEW_H

class StepView
{

protected:
	std::vector<std::string> m_steps;

public:
	/**
	 * Should call generateTemplate method
	 */
	StepView();

	virtual void addStep(std::vector<Value> stepValues, Value currentResult) = 0;

	virtual void generateTemplate(std::vector<Value> values, Value currentResult) = 0;

	std::string getPrevStep();

	std::string getNextStep();
};

#endif
