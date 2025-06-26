// Last updated: 6/27/2025, 2:29:32 AM
class Solution {
public:
    bool freqSame(int freq[], int winFreq[]){
        for(int i = 0; i < 26; i++){
            if(freq[i] != winFreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++){
            freq[s1[i] - 'a']++;
        }

        int winSize = s1.length();

        for(int i = 0; i < s2.length(); i++){
            int winFreq[26] = {0};
            int idx = i;
            int winIdx = 0;
            while(winIdx < winSize && idx < s2.length()){
                winFreq[s2[idx] - 'a']++;
                idx++;
                winIdx++;
            }
            if(freqSame(freq, winFreq)){
                return true;
            }
        }
        return false;
    }
};