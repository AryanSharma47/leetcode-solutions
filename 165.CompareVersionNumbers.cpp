//Simple Approach
class Solution {
public:
    int compareVersion(string ver1, string ver2) {
        int i=0,j=0;

        while(i<ver1.size() || j<ver2.size())
        {
            int sum1 = 0,sum2 = 0;

            while(i<ver1.size() && ver1[i] != '.')
            {
                sum1 = sum1*10 + (ver1[i]-'0');
                i++;
            }
            i++;

            while(j<ver2.size() && ver2[j] != '.')
            {
                sum2 = sum2*10 + (ver2[j]-'0');
                j++;
            }
            j++;

            if(sum1 > sum2)
            return 1;
            if(sum1 < sum2)
            return -1;
        }
        return 0;
    }
};