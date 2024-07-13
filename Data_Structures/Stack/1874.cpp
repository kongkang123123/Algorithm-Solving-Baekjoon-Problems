// 1874: 스택 수열
// 실버 2
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    stack<int> st;
    vector<int> input(N);       // 스택 수열 저장
    vector<char> operation;     // 스택 수열의 연산 저장

    for(int i=0; i<N; i++)
    {
        cin >> input[i];
    }

    int cur = 1;                // 1 ~ N까지의 값을 저장하기 위한 변수
    for(int i=0; i<N; i++)
    {
        while(cur<=input[i])    // input[i]의 값을 만족할 때 까지 stack에 수열 저장
        {
            st.push(cur);
            operation.push_back('+');
            cur++;
        }

        if(!st.empty() && input[i]==st.top())   // stack이 비어있지 않고 수열의 값과 스택 top의 값이 일치할 때
        {
            st.pop();
            operation.push_back('-');
        }
        else                                    // 조건 충족 X. 즉 수열값과 stack의 상단값과 달라서 pop할 수 없을 때
        {
            cout << "NO";
            return 0;
        }
    }

    for(const char op: operation)               // operation값 순서대로 출력
    {
        cout << op << '\n';
    }
}