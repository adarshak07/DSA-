/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA;
        ListNode *b=headB;
        while((a->next!=NULL) && (b->next!=NULL))
        {
            if(a==b)
            {
                return a;
            }
            a=a->next;
            b=b->next;
        }
        //agar dono ki length same hai aur dono NULL pe paunch gye aur equal nahi aaye 
        if((a->next==NULL) && (b->next==NULL) && (a!=b))
        {
            return 0;
        }
        if(a->next==0)    
        {
            int blength=0;
            while(b->next!=NULL)
            {
                blength++;
                b=b->next;
            }
            while(blength--)
            {
                headB=headB->next;
            }
        }
        else//b is bigger
        {
            int alength=0;
            while(a->next!=NULL)
            {
                alength++;
                a=a->next;
            }
            while(alength--)
            {
                headA=headA->next;
            }
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
