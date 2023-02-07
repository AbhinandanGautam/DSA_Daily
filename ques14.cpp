// Merge intervals
// https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        vector<vector<int>> ans;
        sort(i.begin(),i.end());

        if(i.size()==0 || i.size()==1){
            return i;
        }

        ans.push_back({i[0][0],i[0][1]});
        for(int k=1; k<i.size(); k++){
            if(i[k][0]<=ans[ans.size()-1][1]){
                if(i[k][1]>ans[ans.size()-1][1]){
                    ans[ans.size()-1][1] = i[k][1];
                }
            }
            else{
                ans.push_back({i[k][0],i[k][1]});
            }
        }

        return ans;
    }
};