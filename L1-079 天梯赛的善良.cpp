#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int N = 1e6+10;

vector<int>abi;
int n,num[N];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        abi.push_back(tmp);
        num[tmp]++;
    }
    sort(abi.begin(),abi.end());
    cout<<abi[0]<<" "<<num[abi[0]]<<endl;
    sort(abi.begin(),abi.end(),greater());
    cout<<abi[0]<<" "<<num[abi[0]];
    return 0;
}