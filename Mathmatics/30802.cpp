// 20802: 웰컴 키트
// 브론즈 3
#include <iostream>
using namespace std;

int main(void)
{
    long long N;          // 사람 수
    long long size[6];    // 티셔츠 size: S, N, L, XL, XXL, XXXL
    long long T, P;       // T: 티셔츠 묶음 수 / P: 펜 묶음 수
    long long t_sum=6;    // 티셔츠 최소 주문 묶음 개수. 우선 티셔츠 사이즈 종류의 수 인 6으로 설정

    cin >> N;
    for(int i=0; i<6; i++)
    {
        cin >> size[i];
    }
    cin >> T >> P;
    

    for(int i=0; i<6; i++)
    {   
        if(!size[i])        // 만약 해당 사이즈 주문 개수 0이면
        {
            t_sum -= 1;     // 처음에 설정한 값에서 -1
        }
        else {
            t_sum += (size[i]-1)/T; // 묶음 수와 딱 맞아 떨어지는 경우 방지하기 위해 -1 한 후 묶음 수만큼 나눠서 더해줌
        }
    }
    cout << t_sum << '\n';
    cout << N/P << ' ' << N%P;
}