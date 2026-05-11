class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<pair<int, int>> iNum; 
        for (int i = 0; i < nums.size(); i++) {
            iNum.push_back({nums[i], i});
        }
        sort(iNum.begin(), iNum.end());
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = iNum[left].first + iNum[right].first;
            if (sum == target) {
                return {min(iNum[left].second, iNum[right].second), max(iNum[left].second, iNum[right].second)};
            } 
            else if (sum < target) {
                left++;
            } 
            else {
                right--;
            }
        }
        return {};
    }
};