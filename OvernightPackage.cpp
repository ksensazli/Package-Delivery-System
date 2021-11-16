#include "OvernightPackage.h"
#include "Package.h"
#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

OvernightPackage::OvernightPackage(string sn,string sa,string sc,string ss,
		string sz,string rn,string ra,string rc,
		string rs,string rz,double w,double cpo)
		:Package(sn,sa,sc,ss,sz,rn,ra,rc,rs,rz,w,cpo)
		{
			setWeight(w);
			setCostPerOunce(cpo);
}
void OvernightPackage::setWeight(double w){
	if(w > 0.0)
	weight=w;
	else
	throw invalid_argument("Weight must be greather than 0.0");
}
void OvernightPackage::setCostPerOunce(double cpo){
	if(cpo > 0.0)
	costPerOunce=cpo;
	else
	throw invalid_argument("Cost per Ounce must be greather than 0.0");
}
double OvernightPackage::getWeight(void){
	return weight;
}
double OvernightPackage::getCostPerOunce(void){
	return costPerOunce;
}
double OvernightPackage::calculateCost(void){
	return (additionalFeePerOunce+costPerOunce)*weight;
}
OvernightPackage::~OvernightPackage(){
}
