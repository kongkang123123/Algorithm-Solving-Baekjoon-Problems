// 4949: 균형잡힌 세상
// 실버 4
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    while(true)
    {
        string input;
        getline(cin, input);

        if(input == ".")
        {
            break;
        }

        stack<char> s;
        bool flag = 0;

        for(int i=0; i<input.length(); i++)
        {
            char c = input[i];

            if((c == '(') || (c == '['))
            {
                s.push(c);
            }

            else if(c == ')')
            {
                if(!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }

            else if(c==']')
            {
                if(!s.empty() && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag==0 && s.empty())
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