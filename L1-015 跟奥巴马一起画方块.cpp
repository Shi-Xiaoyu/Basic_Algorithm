#include<iostream>
#include<math.h>
using namespace std;
float n;
char sign;
int main()
{
    cin>>n>>sign;
    int m = floor(n/2+0.5);
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<sign;
            
        }
        cout<<endl;
        
    }
    
    
    return 0;
}