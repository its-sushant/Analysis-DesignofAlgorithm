#include <iostream>
using namespace std;
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (pivot >= A[i]);
        do
        {
            j--;
        } while (pivot < A[j]);
        if (i < j)
        {
            int x = A[i];
            A[i] = A[j];
            A[j] = x;
        }
    }
    int y = A[l];
    A[l] = A[j];
    A[j] = y;
    return j;
}

void quicksort(int A[], int l, int h)
{
    if (l >= h)
        return;
    int p = partition(A, l, h);
    quicksort(A, l, p);
    quicksort(A, p + 1, h);
}

int main()
{

    int A[] = {7, 11, 5, 8, 10, 3, 12, 9};
    int n = 8;

    quicksort(A, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}