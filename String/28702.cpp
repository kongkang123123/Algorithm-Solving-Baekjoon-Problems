// 28702: FizzBuzz
// 브론즈 1
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isNumber(const string& str) {
    for (char const &c : str) 
    {
        if (!isdigit(c)) 
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str[3];
    int standard = 0;
    int std_idx = 0;
    for(int i=0; i<3; i++)
    {
        cin >> str[i];

        if(isNumber(str[i]))
        {
            standard = stoi(str[i]);    // string -> int: stoi
            std_idx = i;
        }
    }

    standard = standard + 3 - std_idx;
    if(standard % 15 == 0)
    {
        cout << "FizzBuzz \n";
    }
    else if(standard % 3 == 0)
    {
        cout << "Fizz \n";
    }
    else if(standard % 5 == 0)
    {
        cout << "Buzz \n";
    }
    else
    {
        cout << standard << "\n";
    }

    return 0;
}