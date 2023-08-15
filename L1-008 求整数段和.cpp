#include<iostream>

using namespace std;
int a,b;
int sum = 0;

int main()
{
    cin>>a>>b;
    int flag = 0;
    if(a<0)
    {

        for(int i = a;i<=0;i++)
        {
            if(flag == 5)puts(""),flag = 0;
            printf("% 5d",i);
            flag = flag+1;
        }
        for(int i = 1;i<=b;i++)
        {
            if(flag == 5)puts(""),flag = 0;
            printf("% 5d",i);
            flag = flag + 1;
        }

    }
    else
    {
        for(int i = a;i<=b;i++)
        {
            if(flag == 5)puts(""),flag = 0;
            printf("% 5d",i);
            flag = flag + 1;
        }
    }
puts("");
if(a<0)
{
    a = -a;
    for(int i = 1;i<=a;i++)
    {
        sum += i;
    }
    sum = (b + 1)*b/2 - sum;
}
else
{
    sum = (a + b)*(b - a + 1)/2;

}
cout<<"Sum = "<<sum;
    return 0;
}
