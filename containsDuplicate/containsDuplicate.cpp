class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> tSet;
        int vSize = nums.size();

        for (int i = 0; i < vSize; i++){
            tSet.insert(nums[i]);
        }

        return (nums.size() != tSet.size());
        
    }
};