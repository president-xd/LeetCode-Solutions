class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> array;

        // Two loops to compare two index elements inside the stack
        for (int i = 0; i < nums.size() - 1; i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    
                    // Pushing elements in the stack
                    array.push_back(i);
                    array.push_back(j);
                    //Return array with index values
                    return array;
                }
            }
        }

        // Return empty array
        return array;
    }
};