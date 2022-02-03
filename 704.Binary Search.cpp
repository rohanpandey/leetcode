// Iterative Approach C++
class Solution{
    public:
    int search(vector<int> &nums, int target){
        int pivot, low=0, high = nums.size()-1;
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
        return -1;
    }
};

// Recursive Approach C++
class Solution{

    int binary_search(vector<int> &nums, int low, int high, int target)
    {
        int pivot;
        if(low<=high)
        {
            pivot=low+(high-low)/2;
            if(nums[pivot]==target)
            {
            return pivot;
            }
            else if(nums[pivot]<target)
            {
                low=pivot+1;
                return binary_search(nums,low,high,target);
            }
            else
            {
                high=pivot-1;
                return binary_search(nums,low,high,target);
            }
        }
        return -1;
    }
    public:
    int search(vector<int> &nums, int target){
        return binary_search(nums,0,nums.size()-1,target);
    }        
};