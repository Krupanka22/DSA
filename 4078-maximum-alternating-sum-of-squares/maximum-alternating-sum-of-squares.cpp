class Solution {
public:
long long maxAlternatingSum(vector<int>& nums) {
vector<long long> temp;
long long ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        temp.push_back(1LL * nums[i] * nums[i]);
    }

    sort(temp.begin(), temp.end());

    int i = 0;
    int j = temp.size() - 1;

    while (i < j) {
        ans += temp[j];
        ans -= temp[i];

        i++;
        j--;
    }

    if (i == j) {
        ans += temp[i];
    }

    return ans;
}

};
