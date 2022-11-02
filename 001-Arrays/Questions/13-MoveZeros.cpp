/*

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) {
    int zeros = 0;
    vector<int> ans;

    // Count Zeros
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] == 0) zeros++;
    }

    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] != 0){
            ans.push_back(nums[i]);
        }
    }

    while(zeros > 0){
        ans.push_back(0);
        zeros--;
    }
    return ans;
}

int main(){
    vector<int> a;
    a.push_back(0);
    a.push_back(1);
    a.push_back(0);
    a.push_back(3);
    a.push_back(12);

    vector<int> ans =  moveZeroes(a);

    for(auto i : a) cout << ans[i] << " ";
    return 0;
}