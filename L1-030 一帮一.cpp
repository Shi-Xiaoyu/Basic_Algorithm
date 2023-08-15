#include<iostream>

using namespace std;
const int N = 100;
int n;
int sex[N];
string name[N];
int flag[N];//标志位
//男女比例必定是1：1
int main()
{
    cin>>n;
    int num = n;//totall num
    for (int i = 0;i<n; i++)
    {
            cin >> sex[i];
            cin >> name[i];
    }
    for(int i = 0;i<n;i++)flag[i] = 0;
    for(int i = 0;i<num/2;i++)//正顺序
    {
        for(int j =num - 1;j>=num/2;j--)//倒顺序
        {
            if(sex[i] != sex[j]&&flag[j] != 1 )
            {
                cout<<name[i]<<" "<<name[j]<<endl,flag[j] = 1;
                break;
            }

        }

    }



    return 0;
}