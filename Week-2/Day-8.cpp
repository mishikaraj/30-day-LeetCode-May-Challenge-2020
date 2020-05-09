Check If It Is a Straight Line
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.


Example 1:


Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Example 2:


Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)
            return true;
        int dx=coordinates[1][0]-coordinates[0][0];
        int dy=coordinates[1][1]-coordinates[0][1];
        bool res=true;
        
        for(int i=1;i<coordinates.size()-1;i++)
        {
            int dxn=coordinates[i+1][0]-coordinates[i][0];//x difference of next point
            int dyn=coordinates[i+1][1]-coordinates[i][1];//y diff of next point
            if(dx*dyn!=dy*dxn)
            {
                res=false;
            }
            
        }
        return res;
    }
};