#include<iostream>

using namespace std;

int hh,tt;
char dot;
int main()
{
    cin>>hh>>dot>>tt;
    if(hh>=0&&hh<=12)
    {
        cout<<"Only"<<" ";
        printf("%02d%c%02d.",hh,dot,tt);
        cout<<"  "<<"Too early to Dang.";
    }
    else if(hh==12&&tt>0)
    {
        for(int i = 0;i<13;i++)cout<<"Dang";
    }
    else
    {
        int n = 0;
        if(tt == 0)
        {
            n = hh - 12;
            for(int i = 0;i<n;i++)cout<<"Dang";
        }
        else
        {
            n = hh - 11;
            for(int i = 0;i<n;i++)cout<<"Dang";
        }

    }


}