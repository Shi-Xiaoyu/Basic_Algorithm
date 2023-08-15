#include<iostream>

using namespace std;
const int N = 10110;

string str[N];
int i = 0;
int cnt = 0;
int main()
{
    while(1)
    {
        i = i+1;
        cin>>str[i];
        if(cin.get() == '\n')break;
    }
    for(auto item:str)
    {
        cnt++;
        if(item == "250")
        {
            cout<<cnt-1;
            break;
        }
    }


    return 0;
}