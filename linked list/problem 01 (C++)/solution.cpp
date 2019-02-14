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



/*
评价：尽管所用代码极短，十分简洁，但因为使用了头插，所以实际效率并不算最优  运行时间：3ms，占用内存：476k。
*/
