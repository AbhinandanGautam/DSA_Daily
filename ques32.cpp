class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int row=-1;
        
        for(int i=1; i<m.size(); i++){
            if(m[i][0]>t){
                row = i-1;
                break;
            }
        }
        
        if(row==-1){
            for(int i=0; i<m[0].size(); i++){
                if(m[0][i]==t){
                    return true;
                }
            }
            for(int i=0; i<m[0].size(); i++){
                if(m[m.size()-1][i]==t){
                    return true;
                }
            }
        }
        else{
            for(int i=0; i<m[row].size(); i++){
                if(m[row][i]==t){
                    return true;
                }
            }
        }
        
        
        return false;
    }
};