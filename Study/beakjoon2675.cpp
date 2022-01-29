//2675
#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 0;i < a;i++) {
		int b;
		string P;
		cin >> b;
		cin >> P;

		for (int j = 0;j < P.length();j++)
		{
			for (int k = 0;k < b;k++)
			{
				cout << P[j] ;
			}
		}	

		cout << "\n";

	}
	

}