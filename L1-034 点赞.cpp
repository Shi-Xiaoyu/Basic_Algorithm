#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 1010;
int n;
int num[N];
int t_num[N];
vector<int>title;
vector<int>tt;
vector<int>sort_tt;
int main()
{
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        int tmp1 = k;
        while(k--)
        {

            int tmp;
            cin>>tmp;
            num[tmp]++;
            t_num[tmp] = tmp1;
            title.push_back(tmp);
        }

    }
    /**把所有数据读入**/

    unique(title.begin(),title.end());

    for(auto item:title)
    {
        tt.push_back(num[item]);//出现次数统计数组
    }
    sort(tt.begin(), tt.end(),greater());//得出最多的次数
    //cout<<tt[0];
    sort(title.begin(), title.end(),greater());
    for(int i = 0;i<=title[0];i++)//找出那个数字
    {
        if(num[i]==tt[0])
        {
//            cout<<i<<" "<<num[i]<<endl;
            sort_tt.push_back(i);
        }

    }
    sort(sort_tt.begin(), sort_tt.end(),greater());
    cout<<sort_tt[0]<<" "<<num[sort_tt[0]];


    return 0;
}