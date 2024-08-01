//Koshish krna thoda thoda smjhne k maine bhi aise h kra hai
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
        return "0";
        vector<int> v(num1.size()+num2.size(), 0);
        string res="";
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
            int a=num1[i]-'0';
            int b=num2[j]-'0';
            v[i+j+1]+=a*b;
            v[i+j]+=v[i+j+1]/10;
            v[i+j+1]%=10;
            }
        }
        int i=0;
        while(v[i]==0)
        i++;

        while(i<v.size())
        res+=to_string(v[i++]);

        return res;
    }
};