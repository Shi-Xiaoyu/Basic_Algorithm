#include<iostream>

using namespace std;

int main()
{
    int n;
    double m;
    cin>>n>>m;
    while(n--)
    {
        double p;
        cin>>p;
        if(p<m)
        {
        cout<<"On Sale!"<<" ";
        printf("%.1lf",p);
        cout<<endl;
        }
        
        
    }
    
    return 0;
}