class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int size = nums.size();
        while (i < size){
            if (nums[i] == val){
                nums[i] = nums[size - 1];
                nums.pop_back();
                // Decrease the size after popping
                size--;
            }
            else{
                i++;
            }
        }

        return size;
    }
};