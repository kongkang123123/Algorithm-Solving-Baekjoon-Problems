// 9012: 괄호
// 실버 4
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        string str;
        stack<char> st;
        bool flag = 0;

        cin >> str;

        for(int j=0; j<str.length(); j++)
        {
            if(st.empty())
            {
                st.push(str[j]);
            }
            else
            {
                if(st.top() == '(' && str[j] == ')')
                {
                    st.pop();
                }
                else
                {
                    st.push(str[j]);
                }
            }
        }

        if(st.empty())
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }

    return 0;
}