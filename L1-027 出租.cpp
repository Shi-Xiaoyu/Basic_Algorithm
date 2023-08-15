#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
vector<int>tmp;
typedef pair<int,int>PII;
string num;
char shuzi[10] ={'0','1','2','3','4','5','6','7','8','9'};
int cnt[10];
int flag = 1,flag2 = 1;

int main()
{
    cin>>num;
    for(int i = 0;num[i];i++)
    {
        cnt[num[i] - '0']++;//标记
    }
    for(int i = 0;i<10;i++)
    {
        if(cnt[i])tmp.push_back(i);
    }
    sort(tmp.begin(),tmp.end(),greater());
    printf("int[] arr = new int[]{");
    for(auto item:tmp)
    {
        if(flag)
        {
            printf("%d", item);
            flag = 0;
        }
        else
        {
            printf(",%d", item);

        }
    }
    printf("};");
    puts("");
    printf("int[] index = new int[]{");

    for(int i = 0;num[i];i++)
    {
        int cnt1= 0;
        for(auto item:tmp)
        {
            cnt1++;
            if(item == (num[i] - '0'))break;
        }
        if(flag2)
        {
            cout<<cnt1 - 1;
            flag2 = 0;
        }
        else
        {
            cout<<","<<cnt1 - 1;
        }
    }
    printf("};");
    return 0;
}

