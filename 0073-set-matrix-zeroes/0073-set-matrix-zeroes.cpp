class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix){
        set<int> set_i, set_j;
        
        for(int i = 0; i < matrix.size(); i++){
            int j = 0;
            for (auto &&r : matrix[i]){
                if(r==0){
                    set_i.insert(i);
                    set_j.insert(j);
                }
                j++;
            }        
        }

        for (auto &&i : set_i) {
            for(int j = 0; j < matrix[0].size(); j++){
                matrix[i][j] = 0;
            }
        }
        
        for (auto &&j : set_j) {
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][j] = 0;
            }
        }   
    }
};