// 1966: 프린터 큐
// 실버 3
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int cnt;
    int T;          // test case
    int N, M, ipt;  // 문서의 개수, 타겟 문서, 중요도

    cin >> T;
    for(int i=0; i<T; i++)
    {
        cnt = 0;
        cin >> N >> M;

        queue<pair<int,int>> q;
        priority_queue<int> pq; // 우선순위 큐
        for(int j=0; j<N; j++)
        {
            cin >> ipt;
            q.push({j, ipt});
            pq.push(ipt);
        }
        while(!q.empty())
        {
            int index = q.front().first;
            int value = q.front().second;

            q.pop();

            if(pq.top() == value)
            {
                pq.pop();
                ++cnt;
                if(index == M)
                {
                    cout << cnt << "\n";
                    break;
                }
            }
            else
            {
                q.push({index, value});
            }
        }
    }

    return 0;
}