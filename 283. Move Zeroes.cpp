//Approach 1

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int ctr=0,start=0;
        vector<int> arr;
        while(start<nums.size())
        {
            if(nums[start]==0)
            {
                ctr+=1;
            }
            else
            {
                arr.push_back(nums[start]);
            }
            start+=1;
        }
        while(ctr>0)
        {
            arr.push_back(0);
            ctr-=1;
        }
        nums=arr;
    }
};