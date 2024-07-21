// 10845: 큐
// 실버 4
// switch문 조건으로 string 못오는데..
// if문 안쓰는 방법은 없을까
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    int N;
    string op;
    int input;

    cin >> N;

    for(int proc = 0; proc < N; proc++)
    {
        cin >> op;

        if(op == "push")
        {
            cin >> input;
            q.push(input);
        }
        else if(op == "pop")
        {
            if(q.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << q.front() << '\n';
            q.pop();
        }
        else if(op == "size")
        {
            cout << q.size() << '\n';
        }
        else if(op == "empty")
        {
            if(q.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if(op == "front")
        {
            if(q.empty())
            {
                cout << -1 << '\n';
                continue;
            }

             cout << q.front() <<'\n';
        }
        else if(op == "back")
        {
            if(q.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << q.back() << '\n';
        }
    }
}