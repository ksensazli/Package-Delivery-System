#include <iostream>
#include<string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Package p("Caner Sokat","Nayman Street","Tepebasi","Eskisehir","26305","Onur Sokat","Toros Street","Konak","Izmir","35130",16.38,3.75);
	p.print();
	TwoDayPackage tdp("Selin Demirlek","Fener Street","Odunpazari","Eskisehir","26752","Mustafa Cengiz","Mavi Street","Kadikoy","Istanbul","34620",16.38,3.75);
	tdp.print();
	OvernightPackage onp("Berkan Emir","Uzak Street","Anamur","Mersin","33501","Murat Paluli","Kabak Street","Karabaglar","Izmir","35140",16.38,3.75);
	onp.print();
	return 0;
}
