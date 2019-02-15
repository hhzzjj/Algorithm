/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/




//定理：两个指针一个fast、一个slow同时从一个链表的头部出发
//fast一次走2步，slow一次走一步，如果该链表有环，两个指针必然在环内相遇
//此时只需要把其中的一个指针重新指向链表头部，另一个不变（还在环内），
//这次两个指针一次走一步，相遇的地方就是入口节点。


class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        ListNode* fast=pHead;
        ListNode* slow=pHead;
        while(fast!=nullptr&&fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
                if(slow==fast)
                break;
        }
        if(fast==nullptr||fast->next==nullptr)
            return nullptr;
        else{
            slow=pHead;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        return fast;
    }
};
