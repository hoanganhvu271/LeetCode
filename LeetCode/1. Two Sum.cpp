class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int pos1 = 0;
        int pos2 = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j< n; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    pos1 = i;
                    pos2 = j;
                    break;
                }
                   
            }
        }

        return {pos1, pos2};

    }
};
