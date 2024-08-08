// 2738: 행렬 덧셈
// 브론즈 3
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int matrix[100][100] = {0,};
    int N, M;
    int i, j;
    int input;

    cin >> N >> M;
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            cin >> input;
            matrix[i][j] = input;
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            cin >> input;
            matrix[i][j] += input;
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}