class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maximum = 0;

        for (int i = 0; i < nums.size(); i++) {

            long long gc = 0;
            long long lc = 1;
            long long product = 1;

            for (int j = i; j < nums.size(); j++) {

                product = product * nums[j];

                gc = gcd(gc, (long long)nums[j]);

                lc = lcm(lc, (long long)nums[j]);

                if (product == gc * lc) {
                    maximum = max(maximum, j - i + 1);
                }

                if (product > gc * lc) {
                    break;
                }
            }
        }

        return maximum;
    }
};