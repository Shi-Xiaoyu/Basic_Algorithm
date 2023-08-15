#include<iostream>

using namespace std;

string str;
char gplt[4] = {'G','P','L','T'};
int cnt[4];
int main()
{
    cin>>str;
    for(int i = 0;str[i];i++)
    {
        if(str[i]<=91)continue;
        else str[i] = str[i] - 32;
    }
    for(int i = 0;str[i];i++)
    {
        for(int j = 0;j<4;j++)
        {
            if(str[i] == gplt[j])cnt[j]++;
        }
    }
    while(1)
    {
        if(cnt[0])cout<<gplt[0],cnt[0]--;
        if(cnt[1])cout<<gplt[1],cnt[1]--;
        if(cnt[2])cout<<gplt[2],cnt[2]--;
        if(cnt[3])cout<<gplt[3],cnt[3]--;
        if(cnt[0]==0&&cnt[1]==0&&cnt[2]==0&&cnt[3]==0)
        {
            break;
        }
    }
    return 0;
}