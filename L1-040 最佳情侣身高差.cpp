#include<iostream>

using namespace std;

double hei_g,hei_b;

char input;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cin>>input;
        if(input == 'F')
        {
          cin>>hei_g;
          printf("%.2lf\n",hei_g*1.09);
        }
        else 
        {
            cin>>hei_b;
            printf("%.2lf\n",hei_b/1.09);
        }
        
    }
}