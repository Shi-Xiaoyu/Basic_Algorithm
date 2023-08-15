#include<iostream>
#include<math.h>
using namespace std;

string num_1,num_2;
int flag = 1;
int flag_1 = 1,flag_2 = 1;
int main()
{
    cin>>num_1;
    cin>>num_2;
    for(int i = 0;num_1[i];i++)
    {
        if(num_1[i]>57||num_1[i]<48)
        {
            flag = 0;
            flag_1 = 0;
            break;
        }
    }

    for (int i = 0; num_2[i]; i++)
    {
        if (num_2[i] > 57 || num_2[i] < 48)
        {
            flag = 0;
            flag_2 =0;
            break;
        }
    }

    if(flag)
    {
        long long n1 = 0,n2 = 0;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0;num_1[i];i++)cnt1++;
        for(int i = 0;num_2[i];i++)cnt2++;
        for(int i = cnt1 - 1,j = 0;i>=0;i--,j++)
        {
            n1 += (num_1[i] - '0')*pow(10,j);
        }
        for(int i = cnt2 - 1,j = 0;i>=0;i--,j++)
        {
            n2 += (num_2[i] - '0')*pow(10,j);
        }
        if(n1>1000&&n2<=1000)printf("? + %d = ?",n2);
        else if(n2>1000&&n1<=1000)printf("%d + ? = ?",n1);
        else cout<<num_1<<" "<<"+"<<" "<<num_2<<" "<<"="<<" "<<n1+n2;
        //cout<<n1<<" "<<n2;
        //cout<<cnt1<<" "<<cnt2;
    }
    else if(flag_1==0&&flag_2==0)cout<<"? + ? = ?";
    else if(flag_1 !=0&&flag_2 == 0)
    {
        long long n1 = 0,cnt1 = 0;
        for(int i = 0;num_1[i];i++)cnt1++;
        for(int i = cnt1 - 1,j = 0;i>=0;i--,j++)
        {
            n1 += (num_1[i] - '0')*pow(10,j);
        }
        if(n1>1000)cout<<"? + ? = ?";
        else printf("%d + ? = ?",n1);
    }
    else if(flag_1 == 0&&flag_2 != 0)
    {
        long long n2 = 0,cnt2 = 0;
        for(int i = 0;num_2[i];i++)cnt2++;
        for(int i = cnt2 - 1,j = 0;i>=0;i--,j++)
        {
            n2 += (num_2[i] - '0')*pow(10,j);
        }
        if(n2>1000)cout<<"? + ? = ?";
        else printf("? + %d = ?",n2);
    }
    return 0;
}