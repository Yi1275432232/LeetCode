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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> nodes;

        while (head != NULL) {
            if (nodes.find(head) == nodes.end())
                nodes.insert(head);
            else
                return true;

            head = head->next;
        }

        return false;
    }
};