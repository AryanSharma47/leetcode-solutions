//Easiest Solution || Time Complexity : O(n log n)
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end());
        s.erase(s.end()-1);
        reverse(s.begin(),s.end());
        s.insert(s.end(),'1');
        return s;
    }
}; 