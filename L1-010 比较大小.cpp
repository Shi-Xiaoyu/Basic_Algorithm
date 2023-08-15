#include<iostream>
#include<algorithm>
using namespace std;
int num[3];

int main()
{
    for(int i = 0;i<3;i++)scanf("%d",&num[i]);

    sort(num,num+3);
    for(int i = 0;i<3;i++)
        if(i==2)printf("%d",num[i]);
        else printf("%d->",num[i]);
    


    return 0;
}