#include<iostream>

using namespace std;
string str;
int cnt = 0;
int num;
char sign;
int main()
{
    cin>>num;
    cin>>sign;
    cin.get();//吃掉回车
    getline(cin,str);
    for(int i = 0;str[i];i++)cnt++;
    if(cnt>num)
    {
        for(int i = cnt - num;i<=cnt;i++)cout<<str[i];
    }
    else
    {
        for(int i = 0;i<num - cnt;i++)cout<<sign;
        for(int i = 0;str[i];i++)cout<<str[i];
    }

    return 0;
}