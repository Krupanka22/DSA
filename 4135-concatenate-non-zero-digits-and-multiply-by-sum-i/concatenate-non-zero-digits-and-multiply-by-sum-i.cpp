class Solution {
public:
    long long sumAndMultiply(int n) {

        if (n == 0)
            return 0;

        long long result = 0;
        long long sum = 0;
        vector<int> v;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0)
                v.push_back(digit);

            n /= 10;
        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            result = result * 10 + v[i];
            sum += v[i];
        }

        return result * sum;
    }
};