#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;




double vms(int Vkmh){
    double Vms=Vkmh*1000/3600;
    return Vms;     //Izsaucot funkciju,tiks atgriezts rezultāts ,kas tiek aprēķināts mainīgā Vms
}   //Funkcija ,kas ātrumu km/stundā reizinā uz 1000(pārveidojam metros) un dalām uz sekunžu skaitu vienā stundā ,jeb uz 3600
int meet_time(int kmh1, int kmh2, int km){
double v1= vms(kmh1);       //Mainīgos v1(ātrums pirmā objekta) un v2 (ātrums otrā objekta) ,tiek izsauktā funkcija, kas
double v2= vms(kmh2);       //pārveido ātrumu no km/stundā uz metriem/sekundē
double s=km*1000;
double v=v1 + v2;
double t= s/v;
cout << "Laiks ir: "<<t;
    return 0;
}                                   //Galvēna funkcija, kas aprēķinā laiku .Tiek izmantotas fizikas formulas,jeb no sākuma
                //ir saskaitītie ābi ātrumi un pēc formulas (laiks=āttalūms/Kopējo ātrumu),Atrodisim laiku


int main()
{
    int atrums1, atrums2, attalums;
    
cout<<"Ievadiet atrumu pirmas masinas ";
cin>>atrums1;
cout<<"Ievadiet atrumu otras masinas ";
cin>>atrums2;
cout<<"Ievadiet attalumu starp masinam ";
cin>>attalums;
 meet_time(atrums1, atrums2, attalums);             //Ievādam ātrumu pirmās un otras mašīnas ,kā arī attālums no tām
 
	return 0;
}
