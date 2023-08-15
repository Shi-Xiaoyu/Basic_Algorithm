#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string name;
        int huxi,maibo;
        cin>>name;
        cin>>huxi;
        cin>>maibo;
        if(huxi<15||huxi>20)cout<<name<<endl;
        else if(maibo>70||maibo<50)cout<<name<<endl;
       
        
        
    }
    return 0;
}