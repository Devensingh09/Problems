class Solution {
public:
    int divide(int dividend, int divisor) 
    {

        if (dividend == INT_MIN && divisor == -1) 
        {
            return INT_MAX;
        }

        bool isNegative = (dividend < 0) ^ (divisor < 0);

        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        long long quotient = 0;

        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;

            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            absDividend -= temp;
            quotient += multiple;
        }

        quotient = isNegative ? -quotient : quotient;

        return quotient > INT_MAX ? INT_MAX : quotient;
    }
};
