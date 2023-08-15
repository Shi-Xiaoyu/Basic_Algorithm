#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string str;
int cnt = 0;
int main()
{
    cin>>str;

for(int i = 6;i<=9;i++)cout<<str[i];
cout<<"-";
for(int i = 0;i<=1;i++)cout<<str[i];
cout<<"-";
    for(int i = 3;i<=4;i++)cout<<str[i];
}