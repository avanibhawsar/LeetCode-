class Solution {
public:
void solve (int s , vector<int>& candidates, int target, vector<int>path, vector<vector<int>>&ans)
{
    if(target==0)
    {
        ans.push_back(path);
        return;
    }
    if(target<0)
    {
        return;
    }
    for(int i= s;i<candidates.size();i++)
    {
        path.push_back(candidates[i]);
        solve(i, candidates , target - candidates[i],path, ans );
        path.pop_back();

    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>path;
        solve(0,candidates ,target ,path , ans );
        return ans;
    }
};
