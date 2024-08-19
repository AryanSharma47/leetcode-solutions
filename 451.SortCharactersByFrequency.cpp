//Simple Approach
//TC : O(n Logn) || SC : O(n)
class Solution {
public:
    static bool compare(const pair<char,int> &a,const pair<char,int> &b)
    {
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans = "";

        for (char i : s) 
        mp[i]++;

       vector<pair<char, int>> vec(mp.begin(), mp.end());

       sort(vec.begin(), vec.end(), compare);

       for(const auto &i : vec)
       ans += string(i.second,i.first);

    return ans;
}
};

//Optimal  Approach
//TC : O(n) || SC : O(n)
class Solution {
public:
    string frequencySort(string s) {
        vector<int> vec(128);
        string ans = "";

        for(auto i : s)
        vec[i]++;

        priority_queue<pair<int,char>> pq;

        for(int i=0;i<128;i++)
        {
            if(vec[i] > 0)
            pq.push({vec[i],i});
        }

        while(!pq.empty())
        {
            auto p = pq.top();
            ans += string(p.first,p.second);
            pq.pop();
        }
        return ans;
    }
};