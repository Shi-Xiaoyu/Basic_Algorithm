#include<iostream>

using namespace std;
double div_1,div_2;

int main()
{
    cin>>div_1>>div_2;
    if(div_2 == 0)cout<<div_1<<"/"<<"0"<<"="<<"Error";
    else if(div_2<0)
    {
        cout<<div_1<<"/"<<"("<<div_2<<")"<<"=";
         printf("%.2lf",div_1/div_2);
    }
    else
     {
         cout<<div_1<<"/"<<div_2<<"=";
         printf("%.2lf",div_1/div_2);
     }
    return 0;
}