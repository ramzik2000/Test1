#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    int j =0;
    int sods=0;
    
    
    while(j<20){
    int i=0;
    srand(time(NULL));
    string masivs[20]={"Delphi","Java","JavaScript","PHP",
    "Python","Kotlin","C#","Ruby","Perl","C","TypeScript","R","Haskell","Fortran",
    "Basic","Pascal","Assembler","SQL","C", "C++"};
     string vards = masivs[rand() % 19 + 0];  
     char starpRez[vards.length()];
     cout<<vards<<endl;
      for(int k=0;k<vards.length();k++){
            starpRez[k]='.';
            cout<<starpRez[k];
        }
        cout<<""<<endl;
        cout<<"Uzmineto vardu skaits "<<j<<endl;
        while(i<vards.length()){
        cout<<"Ievadiet burtu"<<endl;
            char ch;
            char check =getch();
            
            cin >>ch;
            
            if(ch=='0'|| sods>=10){
                
                cout<<"Spele beidzas";
                return 0;
            }
                
    
    if(ch == vards.at(i) ){
        if(sods>=5)
            sods-=5;
        else
            sods=0;
    starpRez[i] = ch;
     i++;
    }
    else
        sods++;
    
    cout<<"Soda punkti: "<<sods<<endl;
        
    for(int k=0;k<vards.length();k++){
            cout<<starpRez[k];
        }
    cout<<""<<endl;
        }
       
       j++;
       if(j==20){
        cout<<"Jus uzminejat visus vardus";
        return 0;
       }
        
        }
        
    
    return 0;
}
