#include<iostream>

using namespace std;
string num;
string ying[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
    cin>>num;
    for(int i = 0;num[i];i++)
    {
            if(num[i]=='-')printf("fu ");
            else{

                cout<<ying[num[i] - '0'];
                if(num[i+1]!='\0')cout<<" ";
            }

    }

    return 0;
}