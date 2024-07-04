#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                return mid;
            }
        }
        return left;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    Solution solution;
    int insertPosition = solution.searchInsert(nums, target);

    cout << "Target " << target << " should be inserted at index " << insertPosition << endl;

    return 0;
}