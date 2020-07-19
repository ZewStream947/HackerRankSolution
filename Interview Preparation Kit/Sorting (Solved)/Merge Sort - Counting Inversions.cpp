#include <iostream>

using namespace std;

long inversions = 0;

void mergeHalves(int arr[], int begin, int middle, int end) {

    int left, right, index;
    int leftSize = middle - begin + 1;
    int rightSize = end - middle;

    int leftHalf[leftSize];
    int rightHalf[rightSize];

    for (index = 0; index < leftSize; ++index) 
        leftHalf[index] = arr[begin + index];
    
    for (index = 0; index < rightSize; ++index)
        rightHalf[index] = arr[middle + 1 + index];
    
    left = 0;
    right = 0;
    index = begin;

    while (left < leftSize && right < rightSize)
        if (leftHalf[left] <= rightHalf[right])
            arr[index++] = leftHalf[left++]; 
            else {
                inversions += leftSize - left;
                arr[index++] = rightHalf[right++];
            }   
    
    while (left < leftSize) 
        arr[index++] = leftHalf[left++];

    while (right < rightSize)
        arr[index++] = rightHalf[right++];

}

void mergeSort(int arr[], int begin, int end) {
    
    if (begin >= end) return;

    int middle = (begin + end) / 2;

    mergeSort(arr, begin, middle);
    mergeSort(arr, middle + 1, end);

    mergeHalves(arr, begin, middle, end);
}

int main() {

    int testCase, n, index, arr[100001] = {0};

    cin >> testCase;

    while (testCase--)
    {
        cin >> n;

        for (index = 0; index < n; ++index) cin >> arr[index];

        mergeSort(arr, 0, n - 1);

        cout << inversions << endl;

        inversions = 0;
    }
    
    return 0;
}