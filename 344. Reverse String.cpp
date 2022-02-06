// Approach 1 Iterative

class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0,high=s.size()-1;
        while(low<high)
        {
            int temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low+=1;
            high-=1;
        }
    }
};

// Approach 2 Iterative

class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0,high=s.size()-1;
        while(low<high)
        {
            swap(s[low++],s[high--]);
        }
    }
};

//Aproach 3 Recursive

class Solution {
    void reverse(vector<char>& s, int low, int high)
    {
        if(low>=high)
            return ;
        swap(s[low++],s[high--]);
        reverse(s,low,high);
    }
    
public:
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
    }
};