#include <iostream>
using namespace std;

int binarysearch(int A[], int l, int h, int s)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == s)
            return mid;
        else
        {
            if (A[mid] < s)
            {
                return binarysearch(A, mid + 1, h, s);
            }
            else
            {
                return binarysearch(A, l, mid - 1, s);
            }
        }
    }
    return false;
}

int main()
{
    int A[] = {4, 7, 9, 11, 17, 23, 49, 51, 63};
    int n = 8;
    int s = 21;
    int result = binarysearch(A, 0, n, s);
    if (result)
        cout << "Found at " << result << " location";
    else
        cout << "Element not found!";
    return 0;
}