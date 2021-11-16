#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include<iostream>
#include<string>

using namespace std;

class TwoDayPackage : public Package
{
	public:
		TwoDayPackage(string ,string ,string ,string ,
		string ,string ,string ,string ,
		string ,string ,double ,double);
		void setWeight(double);
		void setCostPerOunce(double);
		double getWeight(void);
		double getCostPerOunce(void);
		double calculateCost(void);
		~TwoDayPackage();
	protected:
		double flatFee = 16.9;
};

#endif
