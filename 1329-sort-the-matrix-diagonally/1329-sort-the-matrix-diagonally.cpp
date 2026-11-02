class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        map<int,vector<int>>mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &i:mpp){
            sort(i.second.begin(),i.second.end());
        }
        map<int,int>idx;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int key = i-j;
                mat[i][j]= mpp[key][idx[key]];
                idx[key]++;
            }
        }
        return mat;
    }
};