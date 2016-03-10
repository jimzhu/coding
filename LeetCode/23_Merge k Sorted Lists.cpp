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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> Q;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i]) {
                Q.push(make_pair(lists[i] -> val, lists[i]));
            }
        }
        while (!Q.empty()) {
            tail -> next = Q.top().second;
            Q.pop();
            tail = tail -> next;
            ListNode* p_next = tail -> next;
            if (p_next) {
                Q.push(make_pair(p_next -> val, p_next));
            }
        }
        return dummy.next;
    }
};