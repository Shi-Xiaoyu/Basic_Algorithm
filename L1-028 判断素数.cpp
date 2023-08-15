#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int flag = 1;
        int num;//待判断的数字
        cin>>num;
        int v = (int)sqrt((double )num);
        if(num == 1)flag =0;
        else {
            for (int i = 2; i <= v; i++)
            {
                if(num%i==0)
                {
                    flag = 0;
                    break;
                }
            }

        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }



    return 0;
}
