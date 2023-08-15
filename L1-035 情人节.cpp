#include<iostream>
using namespace std;

const int N = 1000;
int main()
{
   
        string name[N];
        int i = -1;
        int cnt;
        while (1) {
            i = i + 1;
            cin >> name[i];
            if (name[i] == ".") {
                cnt = i;
                break;
            }

        }

        if (name[13] != "\0" && name[1] != "\0")
            cout << name[1] << " " << "and" << " " << name[13] << " are inviting you to dinner...";
        else if (name[13] == "\0" && name[1] != "\0"&&name[1]!=".")cout << name[1] << " is the only one for you...";
        else if (name[1] == "\0"||name[1] == ".")cout << "Momo... No one is for you ...";
   
    return 0;
}