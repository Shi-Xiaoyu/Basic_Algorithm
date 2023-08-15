#include<iostream>
#include<math.h>
using namespace std;

int n;//人数
double h;//身高
double w;//真实体重

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>h;
        cin>>w;
        double norm = (h - 100)*0.9*2;//得到斤数
        double delta = abs(norm - w);
        if(delta>=norm*0.1)
        {
            if(w>norm)cout<<"You are tai pang le!"<<endl;
            else if(w<norm)cout<<"You are tai shou le!"<<endl;

        }
        else if(delta<norm*0.1)cout<<"You are wan mei!"<<endl;

    }

    return 0;
}