//
// Created by Rolando on 31/05/2024.
//

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int iSize = nums.size();

        if (iSize == 0){
            return result;
        }
        //Start of the interval.
        int a = nums[0];
        for (int i = 0; i < iSize; i++){
        //If there is no sucession, the interval will end.
            if (i == iSize - 1 || nums[i] + 1 != nums[i+1]){
                if (nums[i] != a){
                    //The variable 'a' will be the start, and the current position the end
                    result.push_back(to_string(a) + "->" + to_string(nums[i]));
                }
                else{
                    result.push_back(to_string(a));
                }
                if (i != iSize - 1){
                    //The next interval will be the position + 1
                    a = nums[i+1];
                }

            }
        }
        return result;

    }
};