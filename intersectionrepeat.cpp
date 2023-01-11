#include<bits/stdc++.h>
using namespace std;

void getIntersection(int arr1[], int n, int arr2[], int m) {

    int i=0,j=0;

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    while(i<n && j<m) {

        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] == arr2[j]) {
            cout<<arr1[i] <<" ";
            i++;
            j++;
        } else {
            j++;
        }

    }

}

int main() {

int arr1[] = {4,9,9,5};
int arr2[] = {9,4,9,8,4};

int n=4;
int m=5;

getIntersection(arr1, n, arr2, m);

}
