#include<iostream>

using namespace std;
int tmp_c;
int tmp_f;

int main()
{
    cin>>tmp_f;
    tmp_c = 5*(tmp_f - 32)/9;
    printf("Celsius = %d",tmp_c);

    return 0;
}