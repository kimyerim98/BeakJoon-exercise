//5622
#include<iostream>
using namespace std;

int main(){
	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	string word;
	int result = 0;
	cin >> word;
	for (int i = 0; i<word.size();i++)
		result += time[word[i]%65];
	cout << result;


}
