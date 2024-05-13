vector<int> twoSum(vector<int>& nums, int target) {
        int iSize = nums.size(), cIndex = 0, index = 0, sumValue;
        vector<int> vTemp;
        bool swap;

        do {
            swap = true;
            sumValue = nums[cIndex];

            for (int i = cIndex + 1; i < iSize; i++){
                
                if ((sumValue + nums[i]) == target){
                    vTemp.push_back(cIndex);
                    vTemp.push_back(i);
                    swap = false;
                    return vTemp;
                }
            }
            cIndex++;

        } while(swap);

        return vTemp;
    }