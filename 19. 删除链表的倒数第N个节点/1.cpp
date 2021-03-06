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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *slow = dummy;
        ListNode *fast = dummy;

        while (n--) {
            fast = fast->next;
        }

        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return dummy->next;
    }
};