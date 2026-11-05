class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        unordered_set<int> data;
        int diff = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                diff = abs(arr1[i] - arr2[j]);
                if(diff <= d){
                    data.insert(i);
                }
            }
        }
        return n - data.size();
    }
};