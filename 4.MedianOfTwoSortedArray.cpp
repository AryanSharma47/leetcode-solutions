//Brute Force
//TC : O(n1+n2) || SC : O(n1+n2)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) 
    {
      num1.insert(num1.begin(),num2.begin(),num2.end());
      sort(num1.begin(),num1.end());
      double med=0.0;
      int size=num1.size();
      if(num1.size()%2!=0)
      {
         med=num1[size/2];
          return med;
      }  
      else
      {
         double a=num1[size/2];
         double b=num1[(size/2)-1];
         med=(a+b)/2;
         return med;
      }
    }
};



//Better Approach
//TC : O(n1+n2) || SC : O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size(),n2 = arr2.size();
        int n = n1+n2;
        int ind2 = n/2;
        int ind1 = ind2 - 1;
        int ele1 = -1,ele2 = -1; 
        int cnt = 0,i=0,j=0;

        while(i<n1 && j<n2)
        {
            if(arr1[i] < arr2[j])
            {
                if(cnt == ind1) ele1 = arr1[i];
                if(cnt == ind2) ele2 = arr1[i];
                cnt++;i++;
            }
            else
            {
                if(cnt == ind1) ele1 = arr2[j];
                if(cnt == ind2) ele2 = arr2[j];
                cnt++;j++;
            }
        }

        while(i<n1)
        {
            if(cnt == ind1) ele1 = arr1[i];
            if(cnt == ind2) ele2 = arr1[i];
            cnt++;i++;
        }
        while(j<n2)
        {
            if(cnt == ind1) ele1 = arr2[j];
            if(cnt == ind2) ele2 = arr2[j];
            cnt++;j++;
        }

        if(n%2 == 1)
        return (double)ele2;
        else
        return (double)((double)(ele1+ele2)/2.0) ;
    }
};


//Optimal Approach
//Binary Search
//TC : O(log(min(n1,n2))) || SC : O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size(),n2 = arr2.size();
        if(n1 > n2)
        return findMedianSortedArrays(arr2,arr1);    //taking min length of two arr

        int n = n1+n2;
        int left = (n+1)/2;
        int low = 0,high = n1;

        while(low <= high)
        {
            int mid1 = (low+high) >> 1;
            int mid2 = left-mid1;

            int l1 = INT_MIN,l2 = INT_MIN;
            int r1 = INT_MAX,r2 = INT_MAX;

            if(mid1 < n1)   r1 = arr1[mid1];    //if all ele are not from arr1
            if(mid2 < n2)   r2 = arr2[mid2];    //if all ele are not from arr2
            if(mid1-1 >=0)  l1 = arr1[mid1-1];  //if on left side ele is there of arr1
            if(mid2-1 >=0)  l2 = arr2[mid2-1];  //if on left side ele is there of arr2

            if(l1 <= r2 && l2 <= r1)
            {
                if(n%2 != 0)   //odd no.
                return (double)max(l1,l2);
                else          //even no.
                return (double)((max(l1,l2)+min(r1,r2))/2.0);
            }

            else if(l1 > r2)
            high = mid1-1;
            else
            low = mid1+1;
        }
        return 0;
    }
};