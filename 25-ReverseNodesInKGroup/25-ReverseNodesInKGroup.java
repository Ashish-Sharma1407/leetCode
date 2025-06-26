// Last updated: 6/27/2025, 2:31:25 AM
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode node = head;
        int count = 0;

        while (node != null && count < k) {
            node = node.next;
            count++;
        }

        if (count == k) {
            ListNode prev = reverseKGroup(node, k);

            while (count-- > 0) {
                ListNode temp = head.next;
                head.next = prev;
                prev = head;
                head = temp;
            }

            return prev;
        }

        return head; 
    }
}
