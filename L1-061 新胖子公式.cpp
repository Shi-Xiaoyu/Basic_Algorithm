#include<iostream>
#include<math.h>
using namespace std;
double ht,wt;
double solu;
int main()
{
    
    cin>>wt>>ht;
    solu = wt/pow(ht,2);
    if(solu<=25)
    {
        printf("%.1lf",solu);
        cout<<endl<<"Hai Xing";
    }
    else if(solu>25)
    {
        printf("%.1lf",solu);
        cout<<endl<<"PANG";
    }
        return 0;
}