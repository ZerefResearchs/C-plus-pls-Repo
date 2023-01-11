#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > pairSum(int arr[], int size, int target) {

    vector< vector<int> > ans;

    for (int i=0; i<size; i++) {

        for (int j=i+1; j<size; j++) {

            if(arr[i] + arr[j] == target) {

                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);

            }            

        }

    }

    sort(ans.begin(), ans.end());
    return ans;

}



int main() {

    int arr[] = {2, -3, 3, 3, -2};
    int size = 5;
    int target;

    cin>>target;

    pairSum(arr, size, target);

}