#include <stdio.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int numbers[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int groups = N / K;
    int lastGroupSize = N % K;

    // Print minimum of each group
    for (int i = 0; i < groups; i++)
    {
        int min = numbers[i * K];
        for (int j = 1; j < K; j++)
        {
            if (numbers[i * K + j] < min)
            {
                min = numbers[i * K + j];
            }
        }
        printf("%d ", min);
    }

    // Print minimum of the last group
    if (lastGroupSize > 0)
    {
        int min = numbers[N - lastGroupSize];
        for (int i = N - lastGroupSize + 1; i < N; i++)
        {
            if (numbers[i] < min)
            {
                min = numbers[i];
            }
        }
        printf("%d ", min);
    }

    return 0;
}
