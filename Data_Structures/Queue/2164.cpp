// 2164: 카드2
// 실버 4
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    queue<int> cards;
    int N;

    cin >> N;

    for(int i=1; i<=N; i++)
    {
        cards.push(i);
    }

    bool clock = true;
    while(cards.size() > 1)
    {
        if(clock)
        {
            cards.pop();
            clock = false;
        }
        else    // clock == false 
        {
            cards.push(cards.front());
            cards.pop();
            clock = true;
        }
    }
    // while(cards.size() > 1)
    // {
    //     cards.pop();
    //     cards.push(cards.front());
    //     cards.pop();
    // }

    cout << cards.front();

    return 0;
}