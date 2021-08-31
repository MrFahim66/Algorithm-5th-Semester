#include <iostream>

using namespace std;

long long Counter;

int Array1[500005];
int Array2[500005];

void Merge_Sort(int *Array, int len, int offset)
{
    if (len > 1)
    {
        int *First = Array1 + offset;
        if (First == Array)
        {
            First = Array2 + offset;
        }

        for (int i = 0; i < len; ++i)
        {
            First[i] = Array[i];
        }

        int FirstLength = len / 2;
        int SecondStart = FirstLength, SecondLength = len - SecondStart;
        int *Second = First + SecondStart;

        Merge_Sort(First, FirstLength, offset);
        Merge_Sort(Second, SecondLength, offset + SecondStart);

        int i = 0, j = 0;
        int Position = 0;

        int currentCost = Counter;

        while (i < FirstLength && j < SecondLength)
        {
            if (First[i] < Second[j])
            {
                Array[Position++] = First[i++];
            }
            else
            {
                Array[Position++] = Second[j++];
                Counter += FirstLength - i;
            }
        }

        for (; i < FirstLength; ++i, ++Position)
        {
            Array[Position] = First[i];
        }
        for (; j < SecondLength; ++j, ++Position)
        {
            Array[Position] = Second[j];
        }
    }
}

int main()
{
    int N;

    while (cin >> N, N)
    {
        for (int i = 0; i < N; ++i)
        {
            cin >> Array1[i];
        }

        Merge_Sort(Array1, N, 0);

        cout << Counter << '\n';
        Counter = 0;
    }

    return 0;
}
