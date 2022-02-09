#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
double circle_area(double R, double r) {
	double pi = 2 * acos(0.0);                                  //Ievadam PI skaitli priekš riņķa līnijas formulas
	double S1 = 2*pi * pow(r/2, 2);        //Riņķa līnijas formula ir 2*PI*r^2  => r dalām uz 2 ,jo šīs radiuss ir diametrs priekš mazā aplīša un reizinām uz 2 ,jo tadi apli ir divi
	double S2 = pi * pow(R, 2)- pi*pow(r,2);  //Lai atrast laukumu starp apliem ir jāsaskaita lielo apli,kur radius ir R un jāatņem ar maza apļa laukumu un rezultāts būs dotais laukums
	cout << "\nDivu mazo rinku laukums ir " << S1<<endl;
	cout << "Laukums starp diviem rinkiem ir " << S2;


	return 0;
}

int main()
{
	double R, r;
	cout << "Ievadiet Lielaki radiusu: ";
	cin >> R;
	cout << "Ievadiet mazako radiusu: ";
	cin >> r;
	circle_area(R, r);                     //Pēc ievadīšānas lielo radiusu R un mazo r pārdodam mainīgos funkcijā circle_area
	return 0;
}

