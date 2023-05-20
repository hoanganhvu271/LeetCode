class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        vector<int> v;
        for(auto x : nums)
        {
            if(x == val)    cnt++;
            else v.push_back(x);
        }

       for(int i = 0; i< v.size(); i++)
       {
           nums[i] = v[i];
       }
    //    while(nums.size() > v.size())  
    //         nums.pop_back();
        return nums.size() - cnt;
    }
};
