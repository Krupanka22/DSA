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
        vector<int> temp ;

        if(head==NULL || head->next==NULL || head->next->next==NULL) 
            return {-1 , -1};
        
        int m=INT_MAX ;
        int ma=0;
        
        int cnt=2;
        ListNode *prev = head;
        ListNode *curr = head->next ;

        while(curr->next !=NULL){
            if(curr->val < prev->val && curr->val<curr->next->val){
                temp.push_back(cnt);
            }
            else if(curr->val > prev->val && curr->val > curr->next->val){
                temp.push_back(cnt);
            }
           prev = curr;
            curr = curr->next;

            cnt++ ;

            
        }

         if (temp.size() < 2)
            return {-1, -1};

        for(int i=temp.size()-1 ; i>0 ; i--){
            int dis= temp[i]-temp[i-1];
            m=min(dis , m);
        }

        ma = temp[temp.size() - 1] - temp[0];

        return {m , ma};
        
    }
};