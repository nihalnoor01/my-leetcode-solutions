class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> answer(2);
        int n=grid.size();
        vector<int> freq((n*n)+1,0);
        for(auto& vec:grid){
            for(int number:vec){
                freq[number]++;
            
            if(freq[number]==2){
                answer[0]=number;
            }
            }
        }
        for(int i=1;i<=n*n;i++){
            if(freq[i]==0){
                answer[1]=i;
                break;
            }

        }
        return answer;
        
    }
};
