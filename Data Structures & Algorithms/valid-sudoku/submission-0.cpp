class Solution {
public:
    bool check(vector<vector<char>>& board,int i){
        unordered_set<char> s;
        for(int k=0;k<9;k++){
            if(board[k][i]=='.'){
                continue;
            }
            if(s.count(board[k][i])){
                return false;
            }
            s.insert(board[k][i]);
        }
        s.clear();
        for(int k=0;k<9;k++){
            if(board[i][k]=='.'){
                continue;
            }
            if(s.count(board[i][k])){
                return false;
            }
            s.insert(board[i][k]);
        }
        return true;
    }
    bool check2(vector<vector<char>>& board,int i,int j){
        unordered_set<char> s;
        for(int k=0;k<3;k++){
            for(int m=0;m<3;m++){
                if(board[i+k][j+m]=='.'){
                    continue;
                }
                if(s.count(board[i+k][j+m])){
                    return false;
                }
                s.insert(board[i+k][j+m]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            if(!check(board,i)){
                return false;
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(!check2(board,i,j)){
                    return false;
                }
            }
        }
        return true;
    }
};
