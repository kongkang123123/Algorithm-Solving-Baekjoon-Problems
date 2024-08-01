// 1259: 팰린드롬수
// 브론즈 1
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string input;
    while(true)
    {
        cin >> input;

        if(input == "0")
        {
            break;
        }

        string cmp = input; 
        reverse(cmp.begin(), cmp.end());

        if(input == cmp)
        {
            cout << "yes \n";
        }
        else
        {
            cout << "no \n";
        }
    }
    
    return 0;
}