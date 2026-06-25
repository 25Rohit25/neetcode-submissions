class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
         
         unordered_map<int,int> mp;

         for(int i=0; i < A.size(); i++){
            int comp = target - A[i];

            if(mp.find(comp) != mp.end()){
                return {mp[comp], i};
            }

            mp[A[i]] = i;
         }
         return {};
    }
};
