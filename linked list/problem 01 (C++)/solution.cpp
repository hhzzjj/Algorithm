/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/


//方法一（尾插+反转）
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector <int> a;
        while(head)
        {
            a.push_back(head->val);
            head=head->next;
        }
       reverse(a.begin(),a.end());
        return a;
    }
};


/*
评价：这是最容易想到的方法，利用vecor，将元素添加进去，再反转，完成目标
*/



//方法二（直接头插）
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
评价：但是由于直接选择头插，所以无需翻转。但由于循环的每一步都使用了头插，所以实际效率并不算最优
*/
