//13771
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    float num, tmp;
    vector<float> a;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    
    
    printf("%.2f", a[1]);
}