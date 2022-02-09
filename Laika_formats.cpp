/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
   string h,m,s;
   
   
    cout<<"Ievadiet laiku formata hh:mm:ss"<<endl;
    cout<<"Ievadiet stundas"<<endl;
    cin>>h;
    cout<<"Ievadiet minutes"<<endl;
    cin>>m;
    cout<<"Ievadiet sekundes"<<endl;
    cin>>s;

    cout<<h<<":"<<m<<":"<<s<<endl;

    if(h.length() ==2 && m.length() ==2 && s.length() ==2){
    if((h.at(0)=='0'||h.at(0)=='1') &&(
    h.at(1)=='0'|| h.at(1)=='1'|| h.at(1)=='2'|| h.at(1)=='3'|| h.at(1)=='4'|| h.at(1)=='5'||
    h.at(1)=='6' ||  h.at(1)=='7'||  h.at(1)=='8'|| h.at(1)=='9') ||(h.at(0)=='2' &&
    h.at(1)=='0'|| h.at(1)=='1'|| h.at(1)=='2'|| h.at(1)=='3'
    ) ){
         if((m.at(0)=='0'||m.at(0)=='1'||m.at(0)=='2'||m.at(0)=='3'||m.at(0)=='4'||m.at(0)=='5') &&
    m.at(1)=='0'|| m.at(1)=='1'|| m.at(1)=='2'|| m.at(1)=='3'|| m.at(1)=='4'|| m.at(1)=='5'||
    m.at(1)=='6' ||  m.at(1)=='7'||  m.at(1)=='8'|| m.at(1)=='9'){
     if((s.at(0)=='0'||s.at(0)=='1'||s.at(0)=='2'||s.at(0)=='3'||s.at(0)=='4'||s.at(0)=='5') &&
    s.at(1)=='0'|| s.at(1)=='1'|| s.at(1)=='2'|| s.at(1)=='3'|| s.at(1)=='4'|| s.at(1)=='5'||
    s.at(1)=='6' ||  s.at(1)=='7'||  s.at(1)=='8'|| s.at(1)=='9'){
    cout<<"Pareizs laika formats"<<endl;
    }
    
    }
    }
}
else cout<<"Nepareizs laika formats";

    return 0;
}
