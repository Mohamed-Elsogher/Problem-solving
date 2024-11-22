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
        ListNode dummy = head , prev = null , next ;

        while(dummy!=null){
            next = dummy.next ;
            dummy.next = prev ; 
            prev = dummy ; 
            dummy = next;
        }
        return prev ;
        
    }
}
