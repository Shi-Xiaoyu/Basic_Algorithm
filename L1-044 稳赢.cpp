#include<iostream>

using namespace std;
int k;
string zhaoshi[4] = {"ChuiZi","JianDao","Bu","End"};
int flag = 0;
int main()
{
    cin>>k;
    string input;
    while(1)
    {
        cin>>input;
        flag++;
        if(input == zhaoshi[0])
        {
            if(flag ==k+1 )
            {
                cout<<zhaoshi[0]<<endl;
                flag =0;
                continue;
            }
            else cout<<"Bu"<<endl;
        }
        else if(input == zhaoshi[1])
        {
            if(flag ==k+1 )
            {
                cout<<zhaoshi[1]<<endl;
                flag =0;
                continue;
            }
            else cout<<"ChuiZi"<<endl;
        }
        else if(input == zhaoshi[2])
        {
            if(flag ==k+1)
            {
                cout<<zhaoshi[2]<<endl;
                flag =0;
                continue;
            }
            else cout<<"JianDao"<<endl;
        }
        else if(input ==zhaoshi[3])break;

    }

    return 0;
}