#include <iostream>

using namespace std;

void reverse(int* a, int i, int j)
{
    while (i < j)
    {
        int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
        i++; j--;
    }
}

void shift(int S[], int k, int l)
{
    int N = 10;
    if (l == 1)
    {  
        reverse(S, 0, N - 1);
        reverse(S, 0, k - 1);
        reverse(S, k, N - 1);

        for (int i = 0; i < N; ++i)
            cout << S[i] << " ";

    }

    if (l == -1)
    {
        reverse(S, 0, N - 1);
        reverse(S, 0, N - k - 1);
        reverse(S, N - k, N - 1);

        for (int i = 0; i < N; ++i)
            cout << S[i] << " ";

    }

}

int main()
{
    const int N = 10;
    int S[N];
    int num;
    int k, l;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        S[i] = num;
    }
  
    cin >> k >> l;

    shift(S, k, l);

    return 0;
}
