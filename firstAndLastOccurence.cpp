#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int nums[], int size, int target) {

        int start = 0;
        int end = size - 1;
        int ans = -1;

        int mid = start + (end - start)/2;

        while (start <= end) {

            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }

            mid = start + (end - start)/2; 

        }

        return ans;

    }

    int lastOccurence(int nums[], int size, int target) {

        int start = 0;
        int end = size - 1;
        int ans = -1;

        int mid = start + (end - start)/2;

        while (start <= end) {

            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            } 
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }

            mid = start + (end - start)/2;

            }

        return ans;

    }



    int main() {

        int nums[] = {5,7,7,8,8,10};
        int target;
        
        cin>>target;

        int first = firstOccurence(nums, 6, target);
        int last = lastOccurence(nums, 6, target);

        cout<<"The element first occurs in "<< first <<" and occurs last in "<< last <<endl;

    }