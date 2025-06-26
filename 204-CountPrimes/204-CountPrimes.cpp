// Last updated: 6/27/2025, 2:30:10 AM
class Solution {
public:
    int countPrimes(int n) {
        vector<int> isPrime(n+1, true);
        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime[i]){
                count++;
            }
            for(int j = i * 2; j < n; j = i+j){
                isPrime[j] = false;
            }
        }
        return count;
    }
};