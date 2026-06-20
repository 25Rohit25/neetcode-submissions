class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        sort(A.begin(), A.end());

        vector<int>ans;
         int sum =0;
        int low =0, high  = A.size()-1;

        while(low < high){
            sum = A[low] + A[high];
            if(sum < target){
                low++;
            }
            else if(sum > target){
                high--;
            }
            else if(sum == target){
              ans.push_back(low);
              ans.push_back(high);
              break;
            }
        }
        return ans;
    }
};
