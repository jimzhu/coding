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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode dummy(0);
        ListNode* tail = &dummy;
        ListNode* curr = NULL;
        while (l1 || l2 || carry > 0) {
            curr = NULL;
            if (l1) {
                curr = l1;
                carry += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2) {
                curr = l2;
                carry += l2 -> val;
                l2 = l2 -> next;
            }
            if (curr) {
                tail -> next = curr;
                curr -> val = carry % 10;
            }
            else {
                tail -> next = new ListNode(carry % 10);
            }
            tail = tail -> next;
            carry /= 10;
        }
        return dummy.next;
    }
};