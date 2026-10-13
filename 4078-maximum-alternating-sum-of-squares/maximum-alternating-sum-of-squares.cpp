class Solution {
public:
long long maxAlternatingSum(vector<int>& nums) {
vector<long long> temp;
long long ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        temp.push_back(1LL * nums[i] * nums[i]);
    }

    sort(temp.begin(), temp.end());

    int j = temp.size() - 1;
    int i;

    for (i = 0; i < temp.size() / 2; i++) {
        ans += temp[j];
        ans -= temp[i];
        j--;
    }

    if (temp.size() % 2 != 0) {
        ans += temp[i];
    }

    return ans;
}

};
