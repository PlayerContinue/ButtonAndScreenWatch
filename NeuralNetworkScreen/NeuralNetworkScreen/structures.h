#pragma once

//--------------------------------------------------------------------------------------
//Author: David Greenberg
//DESC: Class containing generalized structures used in multiple classes
//
//--------------------------------------------------------------------------------------

#include <vector>

using namespace std;


//--------------------------
//define the neuron structure
//--------------------------
struct neuron
{
	//The number of inputs into the neuron
	int m_NumInputs;

	//neuron constructor
	neuron(int NumInputs);


};

//--------------------------
//define the neuron layer structure
//--------------------------

struct neuron_layer{

	//number of neurons in this layer
	int m_NumNeurons;

	neuron_layer(int NumNeurons, int NumInputsPerNeuron);

};

//--------------------------
//A structure to hold each individual genome
//--------------------------
struct genome {

	//Weights of the vector
	vector<double> vecWeights;

	//The Fitness Score of the geneome
	double dFitness;

	friend bool operator<(const genome& lhs, const genome& rhs){
		return (lhs.dFitness < rhs.dFitness);
	}

	friend bool operator>(const genome& lhs, const genome& rhs){
		return (lhs.dFitness > rhs.dFitness);
	}


};


class structures
{
public:
	

	structures();
	~structures();
};

