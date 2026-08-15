class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int words = 1, max = INT_MIN;
        for (int i = 0; i < n; i++) {
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    words++;
                }
            }
            if(words>max){
                max=words;
            }
            words=1;
        }
        return max;
    }
};