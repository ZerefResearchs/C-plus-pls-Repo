#include<bits/stdc++.h>
using namespace std;

int binarySearch(int num1[], int size, int target) {

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end) {
        
        if (num1[mid] == target) {
            return mid;
        }

        // Shifts to right-side of mid
        if (num1[mid] < target) {
            start = mid + 1;
        }

        // Shifts to right-side of mid
        else {
            end = end - 1;
        }

        mid = start + (end - start)/2;

    }

    return -1;

}

int main() {

    int num1[6] = {2, 4, 6, 8, 10, 12};
    int num2[5] = {3, 5, 8, 11, 14};
    int target;

    cin>>target;

    int index = binarySearch(num2, 5, target);
    cout<< "The Index of " << target << " is "<< index <<endl;

}