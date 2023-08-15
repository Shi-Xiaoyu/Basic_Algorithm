#include<iostream>

using namespace std;

int num_1,num_2;


int main()
{
    cin>>num_1;
    if(num_1>=6)
    {
        if(num_1 == 6)cout<<"1";
        else cout<<"2";
    }
    else cout<<num_1+2;
    return 0;
}