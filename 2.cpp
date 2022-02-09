#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


double skait(double noviet){
double papildus=0.5;                    //Ievadam mainīgo ,par papildsummu 50 centi par katru stundu pēc 3 stundam
double sum=2;                           //Stāvvietās vismāzāka cena
if(noviet >=3){                          //Jā mašīna stav vairāk par 3 stundam ,tad summa pālielināsies par 50 centiem katru stundu 
for(int i=3;i<noviet;i++){              //cikls strādā no 3 stundas līdz noradītām laikam
    sum += papildus;                    //summa pālielinās par 50 centiem stundā
    if (sum == 10)                      //Jā summa ir maksimālā ,jeb 10 EUR ,tad cikls tiks pārtraukts
    break;
}
}
else if(noviet ==0)                     //Jā noradam stāvvietas stundu nullētu skaitu ,tad summa arī būs 0
sum =0;
cout<<noviet<<" -> "<<sum;
    return 0;
}


int main()
{
double noviet;
cout<<"Ievadiet stundu skaitu: ";
cin>> noviet;
skait(noviet);                  //Galvenā funkcijā ievadam stāvvietas stundu skaitu un pārnesam to uz funkciju skait() 
	return 0;
}
