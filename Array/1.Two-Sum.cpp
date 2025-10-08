class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> array;
        for (int i = 0; i < nums.size() - 1; i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    array.push_back(i);
                    array.push_back(j);
                    return array;
                }
            }
        }
        return array;
    }
};