//Naive Approach
class Solution {
public:
    bool isUgly(int num)
    {
        while(num > 1)
        {
            if(num%2 == 0)
            num /= 2;
            else if(num%3 == 0)
            num /= 3;
            else if(num%5 == 0)
            num /= 5;
            else
            break;
        }
        return num == 1;
    }

    int nthUglyNumber(int n) {
        int i = 1,cnt = 0;
        while(true)
        {
            if(isUgly(i))
            {
                cnt++;
                
                if(cnt == n)
                return i;
            }
            i++;
        }
        return -1;
    }
};

//Optimal Approach
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> uglyNumbers(n);
        uglyNumbers[0] = 1;
        
        int i2 = 0, i3 = 0, i5 = 0;  // Pointers for multiples of 2, 3, and 5
        
        for (int i = 1; i < n; i++) {
            int nextMultipleOf2 = uglyNumbers[i2] * 2;
            int nextMultipleOf3 = uglyNumbers[i3] * 3;
            int nextMultipleOf5 = uglyNumbers[i5] * 5;
            
            //cout<<nextMultipleOf2<<" "<<nextMultipleOf3<<" "<<nextMultipleOf5<<"\n";
            // Pick the smallest next multiple and add it to the list
            int nextUgly = min(nextMultipleOf2, min(nextMultipleOf3, nextMultipleOf5));
            uglyNumbers[i] = nextUgly;
            
            // Move the pointer forward for whichever multiple was selected
            if (nextUgly == nextMultipleOf2) i2++;
            if (nextUgly == nextMultipleOf3) i3++;
            if (nextUgly == nextMultipleOf5) i5++;
        }
        
        return uglyNumbers[n-1];  // The nth ugly number
    }
};
