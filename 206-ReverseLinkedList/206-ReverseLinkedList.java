// Last updated: 6/27/2025, 2:30:14 AM
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
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;

        while (head != null) {
            ListNode nextNode = head.next;
            head.next = prev; // Reverse the current node's pointer
            prev = head;
            head = nextNode;
        }

        return prev;
    }
}
