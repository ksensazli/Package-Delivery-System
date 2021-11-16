#include "Package.h"
#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

Package::Package(string sn,string sa,string sc,string ss,
		string sz,string rn,string ra,string rc,
		string rs,string rz,double w,double cpo)
		:senderName(sn),
		senderAddress(sa),
		senderCity(sc),
		senderState(ss),
		senderZIPCode(sz),
		recipientName(rn),
		recipientAddress(ra),
		recipientCity(rc),
		recipientState(rs),
		recipientZIPCode(rz)
		{
			setWeight(w);
			setCostPerOunce(cpo);
}
string Package::getSenderName(void){
	return senderName;
}
string Package::getSenderAddress(void){
	return senderAddress;
}
string Package::getSenderCity(void){
	return senderCity;
}
string Package::getSenderState(void){
	return senderState;
}
string Package::getSenderZIPCode(void){
	return senderZIPCode;
}
string Package::getRecipientName(void){
	return recipientName;
}
string Package::getRecipientAddress(void){
	return recipientAddress;
}
string Package::getRecipientCity(void){
	return recipientCity;
}
string Package::getRecipientState(void){
	return recipientState;
}
string Package::getRecipientZIPCode(void){
	return recipientZIPCode;
}
void Package::setWeight(double w){
	if(w > 0.0)
	weight=w;
	else
	throw invalid_argument("Weight must be greather than 0.0");
}
void Package::setCostPerOunce(double cpo){
	if(cpo > 0.0)
	costPerOunce=cpo;
	else
	throw invalid_argument("Cost per Ounce must be greather than 0.0");
}
double Package::getWeight(void){
	return weight;
}
double Package::getCostPerOunce(void){
	return costPerOunce;
}
double Package::calculateCost(void){
	return weight*costPerOunce;
}
void Package::print(void){
	cout<<"Sender Name: "<<getSenderName()
	<<cout<<"\nSender Address: "<<getSenderAddress()
	<<cout<<"\nSender City: "<<getSenderCity()
	<<cout<<"\nSender State: "<<getSenderState()
	<<cout<<"\nSender ZIP Code: "<<getSenderZIPCode()
	<<cout<<"\n\nRecipient Name: "<<getRecipientName()
	<<cout<<"\nRecipient Address: "<<getRecipientAddress()
	<<cout<<"\nRecipient City: "<<getRecipientCity()
	<<cout<<"\nRecipient State: "<<getRecipientState()
	<<cout<<"\nRecipient ZIP Code: "<<getRecipientZIPCode()
	<<cout<<"\n\nPackage weight: "<<getWeight()
	<<cout<<"\nPackage Cost per Ounce: "<<getCostPerOunce()
	<<cout<<"\n\nShipment Total Cost: "<<calculateCost()
	<<cout<<"\n**********************************************"<<endl;
}
Package::~Package(){
}
