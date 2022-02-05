//Approach 1

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr;
        if(nums.size()==1)
        {
            arr=nums;
        }
        else
        {
            int rem=k%nums.size();
            int start=nums.size()-rem;
            int stop=start-1;
            while(start!=nums.size())
            {
                arr.push_back(nums[start]);
                start+=1;
            }
            start=0;
            while(start<=stop)
            {
                arr.push_back(nums[start]);
                start+=1;
            }
        }
        nums=arr;
    }
};

