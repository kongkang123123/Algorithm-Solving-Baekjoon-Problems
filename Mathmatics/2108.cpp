// 2108: 통계학
// 실버 3
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> nums;       // 입력값들 저장
vector<int> modes;
int cnt[8001];          // 최빈값
int N, mode_cnt;
double sum;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    nums = vector<int>(N);
    modes.reserve(N);

    for(int &num : nums)
    {
        cin >> num;
        sum += num;
        ++cnt[num + 4000];
    }

    sort(nums.begin(), nums.end());

    for(int i=0; i<8001; i++)
    {
        if(cnt[i] > mode_cnt)       // 다르면 초기화
        {
            modes.clear();
            mode_cnt = cnt[i];
            modes.push_back(i-4000);
        }
        else if(cnt[i] == mode_cnt) // 같으면 추가
        {
            modes.push_back(i-4000);
        }
    }

    cout << round(sum/N) + 0.0 << "\n"; // -0 방지
    cout << nums[N/2] << "\n";
    cout << (modes.size() == 1 ? modes.front() : modes[1]) << "\n"; // 크기가 1이면 맨 앞, 아니면 2번째
    cout << nums.back() - nums.front();
}