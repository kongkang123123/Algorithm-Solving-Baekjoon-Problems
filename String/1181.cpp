// 1181: 단어 정렬
// 실버 5
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 비교 함수 객체 정의
struct cmp
{
    bool operator() (const string &a, const string &b) const
    {
        if(a.size() == b.size())
        {
            return a < b;   // 길이가 같으면 사전 순으로 비교
        }
        else
        {
            return a.size() < b.size(); // 길이가 다르면 길이 순으로 비교
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);    // C++ 표준 입출력 속도를 향상시키기 위한 코드
    cin.tie(NULL);                   // cin과 cout의 묶음을 풀어줌으로써 입출력 속도 향상

    int N;
    cin >> N;   // 단어의 개수를 입력받음

    vector<string> arr(N);  // N개의 문자열을 저장할 벡터 선언

    for(int i=0; i<N; i++)
    {
        cin >> arr[i];  // N개의 문자열을 입력받아 벡터에 저장
    }

    sort(arr.begin(), arr.end(), cmp());    // 커스텀 비교 함수를 사용하여 정렬

    arr.erase(unique(arr.begin(), arr.end()), arr.end());   // 중복 제거

    for (const auto &item: arr)
    {
        cout << item << '\n';   // 정렬된 결과를 출력
    }
}