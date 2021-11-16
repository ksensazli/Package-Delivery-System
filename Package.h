#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
#include<string>

using namespace std;

class Package
{
	public:
		Package(string ,string ,string ,string ,
		string ,string ,string ,string ,
		string ,string ,double ,double);
		string getSenderName(void);
		string getSenderAddress(void);
		string getSenderCity(void);
		string getSenderState(void);
		string getSenderZIPCode(void);
		string getRecipientName(void);
		string getRecipientAddress(void);
		string getRecipientCity(void);
		string getRecipientState(void);
		string getRecipientZIPCode(void);
		void setWeight(double);
		void setCostPerOunce(double);
		double getWeight(void);
		double getCostPerOunce(void);
		double calculateCost(void);
		void print(void);
		~Package();
	protected:
		string senderName;
		string senderAddress;
		string senderCity;
		string senderState;
		string senderZIPCode;
		string recipientName;
		string recipientAddress;
		string recipientCity;
		string recipientState;
		string recipientZIPCode;
		double weight;
		double costPerOunce;
};

#endif
