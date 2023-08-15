#include<iostream>

using namespace std;

int level[24];


int main()
{
    for(int i = 0;i<24;i++)cin>>level[i];
    while(1)
    {
        int num;
        cin>>num;
        if(num<0||num>23)break;
        else
        {
            cout<<level[num]<<" ";
            if(level[num]>50)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;


        }


    }

    return 0;
}