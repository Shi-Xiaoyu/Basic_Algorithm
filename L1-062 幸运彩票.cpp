#include<iostream>

using namespace std;
int fron = 0,after = 0;
string num;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        cin>>num;
        for(int j = 0;j<=2;j++)fron += num[j] - '0';
        for(int i = 5;i>=3;i--)after+=num[i] - '0';
        if(fron == after)
        {
            cout<<"You are lucky!"<<endl;
            fron = after = 0;
        }
        else
        {
            cout<<"Wish you good luck."<<endl;
            fron = after = 0;
        }
    }



    return 0;
}