class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int> original(size);

        // Copy digits into the new vector
        for (int i = 0; i < size; i++) {
            original[i] = digits[i];
        }

        // Handle the addition
        for (int i = size - 1; i >= 0; --i) {
            if (original[i] < 9) {
                original[i] += 1;
                return original;
            }
            original[i] = 0;
        }

        // If all digits are 9, resize the vector and handle the carry
        original.insert(original.begin(), 1);
        return original;
    }
};


