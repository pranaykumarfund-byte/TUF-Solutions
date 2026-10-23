class Solution {
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>>ans;
        for(int i = 1;i<=n;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
private:
    vector<int>generateRow(int row){
        vector<int>ansRow;
        long long ans = 1;
        ansRow.push_back(1);
        for(int col =1;col<row;col++){
            ans = ans*(row-col);
            ans=ans/(col);
            ansRow.push_back(ans);
        }
        return ansRow;
        
    }
};