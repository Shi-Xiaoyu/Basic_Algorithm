#include<iostream>

using namespace std;

const int N = 20;
string num;
int num_sig[N];
int main()
{
    cin>>num;
    for(int i = 0;num[i];i++)
    {
        num_sig[n
um[i] - '0']++;
    }
    for(int i = 0;i<10;i++)
    {
        if(num_sig[i])
        {
            cout<<i<<":"<<num_sig[i]<<endl;
        }
    }
    return 0;
}