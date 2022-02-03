//Iterative C++ Approach
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot,low=0,high=nums.size()-1;
        while(low<=high)
        {
            pivot=low+(high-low)/2;
            if(nums[pivot]==target)
            {
                return pivot;
            }
            else if(nums[pivot]<target)
            {
                low=pivot+1;
            }
            else
            {
                high=pivot-1;
            }
        }
        return low;
    }
};

// Recursive C++ Approach
class Solution {
    int binarySearch(vector<int>&nums,int low, int high, int target)
    {
        int pivot;
        while(low<=high)
        {
            pivot=low+(high-low)/2;
            if(nums[pivot]==target)
            {
                return pivot;
            }
            else if(nums[pivot]<target)
            {
                low=pivot+1;
            }
            else
            {
                high=pivot-1;
            }
        }
        return low;
    }

public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);      
}
};
