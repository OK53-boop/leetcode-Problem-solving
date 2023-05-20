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


// 以下是使用 C 语言实现的代码：

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;
    struct ListNode* curr = dummy;
    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int val1 = (l1 != NULL) ? l1->val : 0;
 int val2 = (l2 != NULL) ? l2->val : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next->val = sum % 10;
        curr->next->next = NULL;
        curr = curr->next;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    if (carry > 0) {
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->->val = carry;
        curr->next->next = NULL;
    }
    struct ListNode* result = dummy->next;
    free(dummy);
    return result;
}

// 这段代码使用了链表的遍历和相加操作，实现了将两个链表中的数字相加，并返回相加后的结果链表。
// 它使用了虚拟头节点和进位值的概念，使得代码更加简洁和易于理解。
// 同时，它还使用了动态内存分配，需要在函数结束后手动释放内存，以避免内存泄漏。


// 下面来分析这段代码的实现过程：

// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//     struct* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
//     dummy->val = 0;
//     dummy->next = NULL;
//     struct ListNode* curr = dummy;
//     int carry = 0;
// 这里定义了一个函数 addTwoNumbers，用于将两个链表 l1 和 l2的数字相加，并返回相加后的结果链表。
// 同时，定义了一个虚拟头节点 dummy，以及一个当前节点 curr，初始值为 0。
// 还定义了一个变量 carry，用于记录进位值，初始值为 0。

// while (1 != NULL || l2 != NULL) {
//     int val1 = (l1 != NULL) ? l1->val : 0;
//     int val2 = (l2 != NULL) ? l2->val : 0;
//     int sum = val1 + val2 + carry;
//     carry = sum / 10;
//     curr->next = (struct ListNode*)(sizeof(struct ListNode));
//     curr->next->val = sum % 10;
//     curr->next->next = NULL;
//     curr = curr->next;
//     if (l1 != NULL) l1 = l1->next;
//     if (l2 != NULL) l2 = l2->next;
// }
// 这里使用 while 循环遍历两个链表 l1 和 l2，将对应位置的数字相加，并加上进位值 carry。
// 如果相加的结果大于等于 10，则将进位值 carry 设为 1，否则设为 0。
// 将相加的结果对 10 取余数，得到当前位置的数字，并将其添加到新链表 curr 的后面。
// 将 curr 指向新节点，l1 和 l2 分别指向它们的下一个节点。

// if (carry > 0) {
//     curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
//     curr->next->val = carry;
//     curr->next->next = NULL;
// }
// struct ListNode* result = dummy->next;
// free(dummy);
// return result;
// 如果最后一位相加后仍有进位，则需要在新链表的末尾添加一个值为 carry 的节点。
// 最后，返回新链表的头节点 dummy.next，并释放虚拟头节点 dummy 的内存。

// 总的来说，这段代码实现了将两个链表中的数字相加，并返回相加后的结果链表。
// 它使用了链表的遍历和相加操作，时间复杂度为 O(max(m,n))，其中 m 和 n 分别是两个链表的长度。
// 同时，它还使用了虚拟头节点和进位值的概念，使得代码更加简洁和易于理解。



