#include<iostream>

using namespace std;
int jiecheng(int num)
{
    int tmp = 1;
    for(int i = 1;i<=num;i++)
    {
        tmp *=i;
    }

    return tmp;
}
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += jiecheng(i);

    }
    cout<<sum;
}