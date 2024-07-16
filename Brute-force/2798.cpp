// 2798: 블랙잭
// 브론즈 2
// 브루트포스 알고리즘. 제한시간 1초인 반면, N은 100 이하. 100^3 == 1000000이므로 1초 이내로 실행 가능
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;                  // N: 카드 수. M: 목표 값

    vector<int> cards(N);           // N크기 만큼 변수 vector 선언
    for(int i=0; i<N; i++)
    {
        cin>>cards[i];
    }

    int maxi = 0;                       // 최대 값
    for(int i=0; i<N-2; i++)            // i: 1 ~ N-2
    {
        for(int j=i+1; j<N-1; j++)      // j: i+1 ~ N-1
        {
            for(int k=j+1; k<N; k++)    // k: j+1 ~ N
            {
                int sum = cards[i] + cards[j] + cards[k];   // 카드 3장의 합 구함

                if(sum <= M)                    // 만약 카드 3장의 합이 목표 값보다 작다면
                {
                    maxi = max(sum, maxi);      // 지금까지 결과물 중 최대값을 구한다.
                }
            }
        }
    }

    cout<<maxi;     // 최대 값 구함
}