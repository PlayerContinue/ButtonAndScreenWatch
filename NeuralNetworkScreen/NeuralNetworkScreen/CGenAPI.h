#pragma once


//--------------------------------------------------------------------------------------
//Author: David Greenberg
//DESC: Main Algorithm for the entire system
//
//--------------------------------------------------------------------------------------

#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include "structures.h"
class CGenAPI
{
private:

	//******************************
	//Private Variables
	//******************************

	//Holds the entire population of chromosomes
	vector<genome> m_vecPop;

	//size of the population (number of genomes in the current generation)
	int m_iChromoLength;

	//Total fitness of the population
	double m_dTotalFitness;

	//best fitness of the population
	double m_dBestFitness;

	//average fitness of the population
	double m_dAverageFitness;

	//worst fitness of the population
	double m_dWorstFitness;

	//Keep track of the highest rated genome of the generation
	int m_iFittestGenome;

	//Mutation rate of the genome (How often the genomes will mutate)
	//0.05 to .3 is a pretty good rate, but test others
	double m_dMutationRate;

	//Probability of chromosomes crossing bits, rather than returning themselves
	//0.7 is a pretty good rate
	double m_dCrossoverRate;

	//Counts the generation currently being seen
	int m_cGeneration;




public:
	//***************************
	//Constructors
	//***************************
	CGenAPI(int popsize, double MutationRate,double CrossoverRate,int NumberWeights);
	~CGenAPI();
	
	//Mutate the chromosomes based on the set mutation rate
	void Mutate(const vector<double> &chromo);





};

