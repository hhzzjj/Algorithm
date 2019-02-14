/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/




class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector <int> a;
        while(head)
        {
            a.insert(a.begin(),head->val);
            head=head->next;
        }
        return a;
    }
};
