//1152
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string st;
	int num=1;
	getline(cin, st);

	for (int i = 0; i < st.length()-1;i++) {
		if (st[i] == ' ')
			num++;
	}
	if (st[0] == ' ')
		num--;

	cout << num;

}