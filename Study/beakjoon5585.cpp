//5585
#include<iostream>
using namespace std;

int main() 
{
	int pay;
	int result = 0;
	cin >> pay;
	int total = 1000 - pay;
	int coin[] = { 500,100,50,10,5,1 };
	for (int i = 0;i < 6;i++) {
		if (total >= coin[i]) {
			result += (total / coin[i]);
			total %= coin[i];
		}

	}
	cout << result;

}