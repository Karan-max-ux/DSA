class Solution {
public:
    int reverse(int x) {
        int reverse = 0;

        while (x != 0) {
            int temp = x % 10;
            x = x / 10;

            if (reverse > INT_MAX / 10 ||
                (reverse == INT_MAX / 10 && temp > 7)) {
                return 0;
            }

            if (reverse < INT_MIN / 10 ||
                (reverse == INT_MIN / 10 && temp < -8)) {
                return 0;
            }

            reverse = reverse * 10 + temp;
        }

        return reverse;
    }
};