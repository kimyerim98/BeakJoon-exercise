//1920
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int num,tmp;
	vector<int>a;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    int search,tmp2;
    cin >> search;
    vector<int>b;
    for (int j = 0;j < search;j++)
    {
        cin >> tmp2;
        b.push_back(tmp2);
       
    }
    for (int j = 0; j < search; j++)
    {
        cout << binary_search(a.begin(), a.end(), b[j])<<"\n";
   }

}