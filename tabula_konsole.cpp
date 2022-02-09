#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
        vector<string>sarakstsMarka;
        vector<string>sarakstsModelis;
        vector<int>sarakstsGads;
        vector<double>sarakstsCena;
       

   while(true){
    double sum=0;
    string marka;
    string modelis;
    int gads;
    double cena;
    cout<<"Ievadiet auto marku: ";
    cin >>marka;
    sarakstsMarka.push_back(marka);
    cout<<"Ievadiet auto modelis: ";
    cin >>modelis;
    sarakstsModelis.push_back(modelis);
    cout<<"Ievadiet auto gads: ";
    cin >>gads;
    sarakstsGads.push_back(gads);
    cout<<"Ievadiet auto cena: ";
    cin >>cena;
    sarakstsCena.push_back(cena);
    
    for(int i=0;i<sarakstsCena.size()-1;i++){
        if(sarakstsCena[i]>sarakstsCena[i+1]){
            string k1 = sarakstsMarka[i];
            string k2 = sarakstsModelis[i];
            int k3= sarakstsGads[i];
            double k4 = sarakstsCena[i];
            
            sarakstsMarka[i]=sarakstsMarka[i+1];
            sarakstsModelis[i]=sarakstsModelis[i+1];
            sarakstsGads[i]=sarakstsGads[i+1];
            sarakstsCena[i]=sarakstsCena[i+1];
            
            sarakstsMarka[i+1] = k1;
            sarakstsModelis[i+1] = k2;
            sarakstsGads[i+1] = k3;
            sarakstsCena[i+1] = k4;
        }
}    
    
cout<<"Marka\t\t\tModelis\t\t\tGads\t\t\tCena"<<endl;
for(int i=0;i<sarakstsMarka.size();i++){
    cout<<sarakstsMarka[i]<<"\t\t";
    cout<<sarakstsModelis[i]<<"\t\t\t";
    cout<<sarakstsGads[i]<<"\t\t\t";
    cout<<sarakstsCena[i]<<"\t\t\t";

    cout<<"\n";
}    
for(int i=0;i<sarakstsCena.size();i++){
    sum += sarakstsCena[i];
   }
   cout<<"Kopeja summa ir "<<sum<<endl;
   }
	return 0;
}