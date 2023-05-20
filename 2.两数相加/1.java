// 思路：
// 	对于这道题目，时间复杂度最优的算法是使用链表的遍历和相加操作。具体实现方法如下：

// 1. 定义一个变量 carry，用于记录进位值，初始值为 0。

// 2. 定义一个新的链表，用于存储相加后的结果。

// 3. 遍历两个链表，将对应位置的数字相加，并加上进位值 carry。

// 4. 如果相加的结果大于等于 10，则将进位值 carry 设为 1，否则设为 0。

// 5. 将相加的结果对 10 取余数，得到当前位置的数字，并将其添加到新链表中。

// 6. 如果两个链表长度不同，则需要在短链表的末尾补 0，以便与长链表对应位置相加。

// 7. 如果最后一位相加后仍有进位，则需要在新链表的末尾添加一个值为 1 的节点。

// 这种方法的时间复杂度为 O(max(m,n))，其中 m 和 n 分别是两个链表的长度。
// 因为需要遍历两个链表，并且每个节点最多只需要进行一次相加操作。
// 这种方法的空间复杂度为 O(max(m,n))，因为需要创建一个新的链表来存储相加后的结果。





// 以下是 Java 语言的实现代码：

public class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    ListNode dummy = new(0);
    ListNode curr = dummy;
    int carry = 0;
    while (l1 != null || l2 != null) {
        int val1 = (l1 != null) ? l1.val : 0;
        val2 = (l2 != null) ? l2.val : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        curr.next = new ListNode(sum % 10);
        curr = curr.next;
        if (l1 != null) l1 = l1.next;
        if (l2 != null) l2 = l2.next;
    }
    if (carry > 0) {
        curr.next = new ListNode(carry);
    }
    return dummy.next;
}

// 其中，ListNode 是链表节点的定义，addTwoNumbers 是相加函数的定义。
// 在函数中，我们首先创建一个虚拟头节点 dummy 和一个当前节点 curr，用于存储相加后的结果。
// 然后，遍历两个链表，将对应位置的数字相加，并加上进位值 carry。
// 如果相加的结果大于等于 10，则将进位值 carry 设为 1，否则设为 。
// 将相加的结果对 10 取余数，得到当前位置的数字，并将其添加到新链表中。
// 如果两个链长度不同需要在短链表的末尾补 0，以便与长链表对应位置相加。
// 如果最后一位相加后仍有进位，则需要在新链表的末尾添加一个值为 1 的节点。最后，我们返回新链表的头节点 dummy.next。



// 下面来分析这段代码的实现过程：
// public class ListNode {
//     int val;
//     ListNode next;
//     ListNode(int x) { val = x; }
// }
// 这里定义了一个表节点类 ListNode，包含节点值 val 和指向下一个节点的指针 next。

// public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
//     ListNode dummy = new(0);
//     ListNode curr = dummy;
//     int carry = 0;
// 这里定义了一个函数 addTwo，用于将两个链表 l1 和 l2 中的数字相加，并返回相加后的结果链表。
// 同时，定义了一个虚拟头节点 dummy，以及一个当前节点 curr，初始值为 0。
// 还定义了一个变量 carry，用于记录进位值，初始值为 0。

// while (l1 != null || l2 != null) {
//     int val1 = (l1 != null) ? l1.val : 0;
//     val2 = (l2 != null) ? l2.val : 0;
//     int sum = val1 + val2 + carry;
//     carry = sum / ;
//     curr.next = new ListNode(sum % 10);
//     curr = curr.next;
//     if (l1 != null) l1 = l1.next;
//     if (l2 != null) l2 = l2.next;
// 这里使用 while 循环遍历两个链表 l1 和 l2，将对应位置的数字相加，并加上进位值 carry。
// 如果相加的结果大于等于 10，则将进位值 carry 设为 1，否则设为 0。
// 将相加的结果对 10 取余数，得到当前位置的数字，并将其添加到新链表 curr 的后面。将 curr 指向新节点，l1 和 l2 分别指向它们的下一个节点。

// if (carry > 0) {
//     curr.next = new ListNode(carry);
// }
// return dummy.next;
// 如果最后一位相加后仍有进位，则需要在新链表的末尾添加一个值为 carry 的节点。最后，返回新链表的头节点 dummy.next。

// 总的来说，这段代码实现了将两个链表中的数字相加，并返回相加后的结果链表。
// 它使用了链表的遍历和相加操作，时间复杂度为 O(max(m,n))，其中 m 和 n 分别是两个链表的长度。
// 同时，它还使用了虚拟头节点和进位值的概念，使得代码更加简洁和易于理解。
