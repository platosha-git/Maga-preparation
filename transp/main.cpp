#include <iostream>

using namespace std;

int main()
{
    int M = 3, N = 3;

    int A[N][M];
    int k = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            k++;
            A[i][j] = k;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < M; j++) {
            swap(A[i][j], A[j][i]);
        }
    }

    cout << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
