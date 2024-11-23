class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || k == 0 || head.next == null) {
            return head;
        }
        int length = 1;
        ListNode curr = head;
        while (curr.next != null) {
            curr = curr.next;
            length++;
        }

        k = k % length;
        if (k == 0) {
            return head;
        }

        curr.next = head;

        int steps = length - k;
        ListNode temp = head;
        for (int i = 1; i < steps; i++) {
            temp = temp.next;
        }

        ListNode newNode = temp.next;
        temp.next = null;

        return newNode;
    }
}
