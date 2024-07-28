// 11651: 좌표 정렬하기 2
// 실버 5
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second)
    {
        return (a.first < b.first);
    }
    else
    {
        return (a.second < b.second);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<pair<int, int>> coordinate;
    int N;
    int x, y;

    cin >> N;
    
    for(int i=0; i<N; i++)
    {
        cin >> x >> y;
        coordinate.push_back(make_pair(x,y));
    }

    sort(coordinate.begin(), coordinate.end(), cmp);

    for(int i=0; i<(int)coordinate.size(); i++)
    {
        cout << coordinate[i].first << ' ' << coordinate[i].second << "\n";
    }

    return 0;
}