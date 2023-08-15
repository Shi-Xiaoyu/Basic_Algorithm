#include<iostream>

using namespace std;
int flag4 = 1;
int k;
int main()
{
    cin>>k;
    while(k--)
    {

        int cnt = 0;
        string str;
        int pos_d,pos_dot,pos_k = 0,flag = 0,flag2 = 0,flag3 = 0;
        if(flag4)
        {
            getchar();
            flag4 = 1;
        }
        getline(cin,str);
        for(int i = 0;str[i];i++)cnt++;
        /********/
        for(int i = 0;str[i];i++)
        {
            if(str[i] == ',')
            {
                pos_d = i;
                break;
            }
        }
//        cout<<pos_d;
        /******/
        for(int i = 0;str[i];i++)
        {
            if(str[i] == '.')
            {
                pos_dot = i;
                break;
            }
        }
//        cout<<pos_dot;
        /*********/
        for(int i = cnt - 1;i>=0;i--)
        {
            if(str[i] ==' ')
            {
                if(flag == 2)
                {
                    pos_k = i;
                    break;
                }
                else flag ++;
            }
        }
//        cout<<pos_k;
        /********/
        if(str[pos_d - 1]=='g'&&str[pos_d - 2]=='n'&&str[pos_d - 3]=='o')flag2 =1;
        if(str[pos_dot-1]=='g'&&str[pos_dot-2]=='n'&&str[pos_dot-3]=='o')flag3 =1;
        if(flag2 == 1&&flag3 ==1)
        {
            for(int i = 0;i<=pos_k;i++)
            {

                cout<<str[i];
            }
            cout<<"qiao ben zhong."<<endl;
        }
        else
        {
            cout<<"Skipped"<<endl;
            flag4 = 0;
        }

    }

    return 0;
}