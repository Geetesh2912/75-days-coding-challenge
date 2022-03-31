//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/spiral-matrix/
//submission link: https://leetcode.com/submissions/detail/671127813/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0;                      //start row
        int bottom=matrix.size()-1;     //end row
        int left=0;                     //start col
        int right=matrix[0].size()-1;   //end col
        int i=0;                        //itterator
        int dir=0;                      //direction 0(L->R), 1(T->B), 2(R->L), 3(B->T)
        while(left<=right and top<=bottom)
        {
            if (dir==0)
            {
                for (int i=left; i<=right; i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            
            else if (dir==1)
            {
                for (int i=top; i<=bottom; i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            
            else if (dir==2)
            {
                for (int i=right; i>=left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            else if (dir==3)
            {
                for (int i=bottom; i>=top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
            dir=(dir+1)%4;          //dir follows 0->1->2->3->0->1
        }
        return ans;
    }
};
