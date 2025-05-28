// 1464. Maximum Product of Two Elements in an Array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Method 1: Find two largest elements
int maxProduct(vector<int>& nums) {
    int largest = 0;
    int sec_largest = 0;

    for (int num : nums) {
        if (num > largest) {
            sec_largest = largest;
            largest = num;
        } else {
            sec_largest = max(sec_largest, num);
        }
    }
    return (largest - 1) * (sec_largest - 1);
}

// Method 2: Track current max and compute product
int maxProduct2(vector<int>& nums) {
    int n = nums.size();
    int currMax = nums[0];
    int result = 0;

    for (int i = 1; i < n; i++) {
        result = max(result, (nums[i] - 1) * (currMax - 1));
        currMax = max(currMax, nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {3, 4, 5, 2};
    cout << "Max Product (method 1): " << maxProduct(nums) << endl;
    cout << "Max Product (method 2): " << maxProduct2(nums) << endl;
    return 0;
}