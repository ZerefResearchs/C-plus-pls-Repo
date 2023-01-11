#include<bits/stdc++.h>
using namespace std;

void sorted(int arr[], int size) {

    int start=0;
    int end=size-1;
    
    while (start<end) {
        if (arr[start] < arr[end]) {
            start++;
            end--;
        } else if (arr[start] > arr[end]) {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
}

int main () {
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;

    sorted(arr, size);

    for (i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}