// 1764: 듣보잡
// 실버 4
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    map<string, int> list;
    vector<string> res;
    int N, M;
    string tmp;

    cin >> N >> M;
    for(int i=0; i<N+M; i++)
    {
        cin >> tmp;
        list[tmp]++;
        if(list[tmp]>1)
        {
            res.push_back(tmp);
        }
    }

    sort(res.begin(), res.end());

    cout << res.size() << '\n';
    for(auto o : res)
    {
        cout << o << '\n';
    }

    return 0;
}