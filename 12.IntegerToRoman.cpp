//Simple Approach
//TC : O(1)
class Solution {
public:
    string intToRoman(int num) {
        const string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        const string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        const string hnr[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        const string ths[] = {"","M","MM","MMM"};

        return ths[num/1000]+hnr[(num%1000)/100]+tens[(num%100)/10]+ones[num%10];
    }
};