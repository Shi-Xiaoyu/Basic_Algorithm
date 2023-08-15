#include<iostream>

using namespace std;

const int N = 1000;

int cnt_od = 0,cnt_no = 0,num[N];

int n;

int main()
{
    cin>>n;
    for(int i = 0;i<n;i++)cin>>num[i];
    for(int i = 0;i<n;i++)
    {
        if(!(num[i]%2))//偶数
        {
            cnt_od++;
        }
        else cnt_no++;
    }
    cout<<cnt_no<<" "<<cnt_od;
    return 0;
}