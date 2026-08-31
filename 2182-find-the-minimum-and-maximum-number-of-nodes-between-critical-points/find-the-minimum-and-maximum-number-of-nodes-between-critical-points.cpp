class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int> criticalPoints;

        ListNode* prev = head;
        ListNode* curr = head->next;

        int position = 2;

        while (curr != NULL && curr->next != NULL) {

            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {

                criticalPoints.push_back(position);
            }

            prev = curr;
            curr = curr->next;
            position++;
        }

        if (criticalPoints.size() < 2)
            return {-1, -1};

        int minDistance = INT_MAX;

        for (int i = 1; i < criticalPoints.size(); i++) {
            minDistance = min(
                minDistance,
                criticalPoints[i] - criticalPoints[i - 1]
            );
        }

        int maxDistance =
            criticalPoints.back() - criticalPoints.front();

        return {minDistance, maxDistance};
    }
};