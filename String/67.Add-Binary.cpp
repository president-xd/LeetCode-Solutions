class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';  // Convert char to int and add
            if (j >= 0) sum += b[j--] - '0';  // Convert char to int and add

            result += (sum % 2) + '0';  // Append binary digit
            carry = sum / 2;  // Update carry
        }

        reverse(result.begin(), result.end()); // Reverse since we appended from right to left
        return result;
    }
};