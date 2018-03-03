#include <bits/stdc++.h>
using namespace std;

int missingelement(int arr1[], int arr2[], int length)
{
    // if length of bigger array = 1, that means other array = 0, hence arr[1] will be element missing
    if (length == 1)
        return arr1[0];

    // special case, for first element missing
    if (arr1[0] != arr2[0])
        return arr1[0];

    // Initialize current corner points
    int low = 0,  high = length - 1;

    // loop until lo < hi
    while (low <high)
    {
        int mid = (low + high) / 2;

        // If element at mid indices are equal
        // then go to right subarray
        // shift left to mid
        // we are doing binary search!
        if (arr1[mid] == arr2[mid])
            low = mid;
        else
            high = mid;

        // if lo, hi becomes contiguous,  break
        if (low == high - 1)
            break;
    }

    // missing element will be at hi index of
    // bigger array
    return arr1[high];
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int arr2[] = {1,2,3,4,5,6,7,8};

    int M = sizeof(arr1) / sizeof(int);
    int N = sizeof(arr2) / sizeof(int);
    int length = max(M,N);

    cout << "Missing Element is " << missingelement(arr1, arr2, length) << endl;

    return 0;
}
