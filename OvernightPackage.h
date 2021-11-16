#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
#include<iostream>
#include<string>

using namespace std; 

class OvernightPackage : public Package
{
	public:
		OvernightPackage(string ,string ,string ,string ,
		string ,string ,string ,string ,
		string ,string ,double ,double);
		void setWeight(double);
		void setCostPerOunce(double);
		double getWeight(void);
		double getCostPerOunce(void);
		double calculateCost(void);
		~OvernightPackage();
	protected:
		double additionalFeePerOunce = 3.7;
};

#endif
