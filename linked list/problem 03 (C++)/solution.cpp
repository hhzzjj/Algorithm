/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/




class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if (pHead==NULL || pHead->next==NULL){return pHead;}
        ListNode* Head=new ListNode(0);
        Head->next=pHead;                  //创建一个新头节点，以便之后删去
        ListNode* a=Head;                  //节点a滞后于结点b
        ListNode* b=pHead;                 //节点b超前于结点a
        while(b!=NULL)
        {
            if(b->next!=NULL&&b->val==b->next->val)
            {
                while(b->next!=NULL&&b->val==b->next->val)
                {
                    b=b->next;
                }
                a->next=b->next;
                b=b->next;
            }
            else
            {
                a=a->next;
                b=b->next;
            }
        }
       return Head->next;
    }
};
