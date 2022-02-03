// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// Iterative C++ Approach
class Solution {
public:
    int firstBadVersion(int n) {
        int pivot,low=0,high=n; 
        while(low<=high)
        {
            pivot=low+(high-low)/2;
            if(isBadVersion(pivot)==true)
                high=pivot-1;
            else
                low=pivot+1;
        }    
    return low;
    }
};

// Recursive C++ Approach

class Solution {
    
    int binary_search(int low,int high)
    {
        int pivot; 
        while(low<=high)
        {
            pivot=low+(high-low)/2;
            if(isBadVersion(pivot)==true)
                high=pivot-1;
            else
                low=pivot+1;
        }    
    return low;
    }
    
public:
    int firstBadVersion(int n) {
        return binary_search(0,n-1);
    }
};