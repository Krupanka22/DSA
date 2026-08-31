/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first  = -1 ;
        int last = -1 ;

        int min_distance = INT_MAX ;
        int position = 2 ;


        ListNode* prev = head ;
        ListNode* curr = head->next ;

        while(curr!=NULL && curr->next!=NULL){
            bool critical_point = (curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val);

            if(critical_point){
                if (first == -1) {
                    first = position;
                }

            if(last !=-1){
                min_distance = min(min_distance , position - last);
            }

            last = position ;
        }
            prev = curr;
            curr = curr->next;
            position++;
    }   
    if (first == last)
            return {-1, -1};

     return {min_distance ,last - first };

    }
};