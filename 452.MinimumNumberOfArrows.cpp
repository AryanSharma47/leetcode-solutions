//Easiest Approach || Beats 100% Users
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        //Sort In ascending order  based on the end points of the vector
        sort(points.begin(),points.end(),[] (const vector<int>&a , const vector<int>&b){
            return a[1] < b[1];
        });

        if(points.empty())
        return 0;
    
        int arrows=1;
        int n=points.size();
        int end=points[0][1];

        for(int i=1;i<n;i++)
        {
            if(points[i][0] > end)
            {
                arrows++;
                end=points[i][1];
            }
        }
        return arrows;
    }
};