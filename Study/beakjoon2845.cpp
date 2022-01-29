//2845
#include<iostream>
using namespace std;

int main() {
	int a[5] = { 0, };
	int L, P;
	cin >> L>>P;

	int people = L * P;
	for (int i = 0;i < 5;i++) {
		
	
		cin >> a[i];
		a[i] -= people;
		cout << a[i]<<' ' ;

	}
}