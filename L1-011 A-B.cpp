#include<iostream>

using namespace std;
int flag = 0;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int i = 0;a[i];i++)
    {
        for(int j = 0;b[j];j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 0)
            cout<<a[i];
        flag = 0;
         
    }
    return 0;
}