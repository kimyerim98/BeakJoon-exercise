//2751
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;	

	vector<int>data(a);
	
	for (int i = 0; i < a; i++)
	{
		cin >> data.at(i);
	}
	
	sort(data.begin(), data.end());

	for (int i = 0; i < a; i++)
	{
		cout << data.at(i) << "\n";
	}



}




//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
	//int num, tmp;
	//vector<int> a;
	//cin >> num;
	//for (int i = 0; i < num; i++)
	//{
		//cin >> tmp;
		//a.push_back(tmp);
	//}
	//sort(a.begin(), a.end());
	//for (int i = 0; i < num; i++)
		//cout << a[i] << '\n';
//}