class Solution {
public:
bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false; 
        for (int i = 3; i <= sqrt(n); i += 2) { 
            if (n % i == 0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> result={-1,-1};
        int lastprime=-1;
        int mindiff=INT_MAX;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                if(lastprime!=-1){
                    if(i-lastprime<mindiff){
                        mindiff=i-lastprime;
                        result={lastprime,i};
                    }


                }
                lastprime=i;
            }
        }return result;
        

        
        
    }
};
