class Solution {
public:
    bool isAnagram(string s, string t) {
        
       vector<int>freq(26,0);
        for(char ch : s){
            freq[ch - 'a']++;
           }
            vector<int>fq(26,0);
            for(char ch : t){
                fq[ch-'a']++;
            }


            if(freq != fq){
                return false;
            } 
            return true;
    }
};
