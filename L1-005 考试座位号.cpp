#include<iostream>

using namespace std;
const int N = 1e16+10;

long id_num[1000];
int id_set[1000];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int ma_id,set_id;
        long id;
        cin>>id;
        cin>>ma_id;//机器码
        cin>>set_id;
        id_set[ma_id] = set_id;//机器号-->座位号
        id_num[set_id] = id;//座位号-->准考证号码
    }
    int m;
    cin>>m;
    while(m--)
    {
        int id_m_ask;//机器码
        cin>>id_m_ask;
        cout<<id_num[id_set[id_m_ask]]<<" "<<id_set[id_m_ask]<<endl;//座位号

    }


    return 0;
}