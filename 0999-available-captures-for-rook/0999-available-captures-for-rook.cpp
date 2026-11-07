class Solution {
public:
    int captureInRow(vector<vector<char>>& board,int r){
        int rookPos=-1;
        for(int j=0;j<8;j++){
            if(board[r][j]=='R'){
                rookPos=j;
            }
        }
        int lc=0;
        for(int j=0;j<rookPos;j++){
            if(board[r][j]=='p'){
                lc++;
            }
            if(board[r][j]=='B'){
                lc=0;
            }
        }
        int rc=0;
        for(int j=rookPos+1;j<8;j++){
            if(board[r][j]=='p'){
                rc++;
            }
            if(board[r][j]=='B'){
                break;
            }
        }
        if(lc>1){
            lc=1;
        }
        if(rc>1){
            rc=1;
        }
        return lc+rc;
    }
    int captureInCol(vector<vector<char>>& board,int c){
        int rookPos=-1;
        for(int i=0;i<8;i++){
            if(board[i][c]=='R'){
                rookPos=i;
            }
        }
        int uc=0;
        for(int i=0;i<rookPos;i++){
            if(board[i][c]=='p'){
                uc++;
            }
            if(board[i][c]=='B'){
                uc=0;
            }
        }
        int bc=0;
        for(int i=rookPos+1;i<8;i++){
            if(board[i][c]=='p'){
                bc++;
            }
            if(board[i][c]=='B'){
                break;
            }
        }
        if(uc>1){
            uc=1;
        }
        if(bc>1){
            bc=1;
        }
        return uc+bc;
    }
    int numRookCaptures(vector<vector<char>>& board) {
        vector<int> rookPos(2,0);
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    rookPos={i,j};
                    int rowcapture = captureInRow(board,i);
                    int colCapture = captureInCol(board,j);
                    return rowcapture+colCapture;
                }
                
                // if(rowcapture==true||colCapture==true){
                //     int rc = 
                //     int cc = 
                // }
            }        
        }
        return 0;
    }
};