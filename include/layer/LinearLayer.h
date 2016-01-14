#ifndef __FUDANDNN_LINEARLAYER_H
#define __FUDANDNN_LINEARLAYER_H
#include "util\utils.h"
#include "util\Matrix.h"
#include "Layer.h"

class LinearLayer : public Layer
{
public:

	LinearLayer(size_t visualUnit, size_t hiddenUnit, size_t initScheme, shared_ptr<Solver> solver);
	LinearLayer() {};
	string getNetworkName() override;
	void compute() override;
	void calculate()override;
	void gradient()override;

	void writeSelf(string) override;
	void readSelf(string) override;
protected:
	void initialization(int initScheme) override;
};
#endif