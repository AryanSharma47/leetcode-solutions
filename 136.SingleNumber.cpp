//First Approach Using Sort Function
class Solution {
public:
    int singleNumber(vector<int>& num) 
    {
        sort(num.begin(),num.end());
        if(num.size()==1)
        return num[0];
        else
        {
            int a=num[num.size()-1];
            for(int i=1;i<num.size();i=i+2)
            {
                if(num[i-1]!=num[i])
                {
                    a=num[i-1];
                    break;
                }
            }
            return a;
        }
    }
};

//Second Approach Using Hash Table
class Solution {
public:
    int singleNumber(vector<int>& num) 
    {
        unordered_map<int,int> count;

        for(auto i : num)
        count[i]++;
        
        for(const auto& i : count)
        {
            if(i.second == 1)
             return i.first;  
        }
        return -1;
    }
};

//Third Approach Using xor
//Optimal Solution 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;

        for(auto i : nums)
        single = single^i;

        return single;
    }
};