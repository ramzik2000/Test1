#include <iostream>
#include <fstream>
#include <vector>
#include<stdio.h>
using namespace std;

int main()
{
	string nosaukums ="C:/Users/Romas/OneDrive/Рабочий стол/data_in.txt";
	string otraisFails = "datain.txt";
	ifstream fin;
	ofstream fout;
	fin.open(nosaukums);
	vector<int> masivs;
	int summa=0;
	if (!fin.is_open()) {
		cout << "Fails neeksiste" << endl;
	}
	else {
		cout << "ok" << endl;
		char ch;
		
		while (fin.get(ch)) {
			masivs.push_back(ch);
		}
		for (int i = 0; i < masivs.size(); i++)
			summa += masivs[i];
		
	}
	fin.close();
	fout.open("data_out.txt");
	if (!fout.is_open()) {
		cout << "Fails neeksiste" << endl;
	}
	else {
		for (int i = 0; i < masivs.size(); i++)
			fout << masivs[i]<<" ";
		fout << endl;
		fout << "Skaitlu summa ir " << summa;
	}
	fout.close();
	fin.open(otraisFails);				//Izmantojot ievade kanalu fifstream 'in' mes meginam atvert failu datain.txt,jeb otraisFails
	if (fin) {							//ja ievades kanals ir nodarbinats (pec noklusejuma pec "fin" kompilators redz boolean vertibu "true) tad tiek izpildits nosacijums"
		cout << "fails datain.txt  eksiste";	//Ja fails ir atverts izvadas sis ieraksts
	}
	else {
		cout << "fails datain.txt  neeksiste";		//Ja fails nav atverts izvadas sis ieraksts
	}
	return 0;
}