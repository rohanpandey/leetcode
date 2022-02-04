
//Approach one
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        if(nums.size()==1)
        {
            arr.push_back(pow(nums[0],2));
        }
        else
        {
            int start_value=nums[0];
            int end_value=nums[nums.size()-1];
            if((start_value <=0) && (end_value<=0))
            {
                int start=nums.size()-1;
                while(start>=0)
                {
                    arr.push_back(pow(nums[start],2));
                    start-=1;
                }
            }
            if((start_value >=0) && (end_value>=0))
            {
                int start=0;
                while(start<nums.size())
                {
                    arr.push_back(pow(nums[start],2));
                    start+=1;
                }
            }
            if((start_value <0) && (end_value>0))
            {
                int minimum=INT_MAX;
                int ptr1=0;
                int start=0;
                while(start<nums.size())
                {
                    if(abs(nums[start]-0)<minimum)
                    {
                        minimum=abs(nums[start]-0);
                        ptr1=start;
                    }
                    start+=1;
                }
                int ptr2=ptr1+1;

                while((ptr1>=0)&&(ptr2<nums.size()))
                {
                    if(abs(nums[ptr1])<abs(nums[ptr2]))
                    {
                        arr.push_back(pow(nums[ptr1],2));
                        ptr1-=1;
                    }
                    else if(abs(nums[ptr1])>abs(nums[ptr2]))
                    {
                        arr.push_back(pow(nums[ptr2],2));
                        ptr2+=1;
                    }
                    else
                    {
                        arr.push_back(pow(nums[ptr2],2));
                        arr.push_back(pow(nums[ptr1],2));
                        ptr2+=1;
                        ptr1-=1;
                    }
                }
                if(ptr1<0)
                {
                    while(ptr2<nums.size())
                    {
                        arr.push_back(pow(nums[ptr2],2));
                        ptr2+=1; 
                    }
                }
                if(ptr2>=nums.size())
                {
                    while(ptr1>=0)
                    {
                        arr.push_back(pow(nums[ptr1],2));
                        ptr1-=1; 
                    }
                }
                
            }
        }
        return arr;
    }
};

//Approach 2
class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int i = 0, j = a.size() - 1, k = j;
        vector <int> ret(k + 1, 0);
        while (k >= 0) {
            if (abs(a[i]) > abs(a[j])) ret[k--] = a[i] * a[i++];
            else ret[k--] = a[j] * a[j--];
        }
        return ret;
    }
};