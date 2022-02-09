#include <iostream>
using namespace std;

int main()
{
	int i;
	int n;
	cout << "Ievadiet veselo skaitli: " ;
	cin >> n;
	cout << "Skaitla n dalitaji: "<<endl;
	for (i = 1; i <= n; i++){
		if (n % i == 0)
			cout << i<<", ";
	}
		return 0;
	}

