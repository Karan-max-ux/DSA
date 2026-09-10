class Solution {
public:
    int divide(int dividend, int divisor) {
        bool find = false;
        bool find2 = false;

        long long d = dividend;
        long long v = divisor;

        if(d < 0) {
            d = -d;
            find = true;
        }

        if(v < 0) {
            v = -v;
            find2 = true;
        }

        long long count = 0;

        while(d >= v) {
            long long temp = v;
            long long multiple = 1;

            while(d >= temp + temp) {
                temp += temp;
                multiple += multiple;
            }

            d -= temp;
            count += multiple;
        }

        if(find != find2) {
            count = -count;
        }

        if(count > INT_MAX)
            return INT_MAX;

        if(count < INT_MIN)
            return INT_MIN;

        return count;
    }
};