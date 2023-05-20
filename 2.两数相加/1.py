# 思路：
# 	对于这道题目，时间复杂度最优的算法是使用链表的遍历和相加操作。具体实现方法如下：

# 1. 定义一个变量 carry，用于记录进位值，初始值为 0。

# 2. 定义一个新的链表，用于存储相加后的结果。

# 3. 遍历两个链表，将对应位置的数字相加，并加上进位值 carry。

# 4. 如果相加的结果大于等于 10，则将进位值 carry 设为 1，否则设为 0。

# 5. 将相加的结果对 10 取余数，得到当前位置的数字，并将其添加到新链表中。

# 6. 如果两个链表长度不同，则需要在短链表的末尾补 0，以便与长链表对应位置相加。

# 7. 如果最后一位相加后仍有进位，则需要在新链表的末尾添加一个值为 1 的节点。

# 这种方法的时间复杂度为 O(max(m,n))，其中 m 和 n 分别是两个链表的长度。
# 因为需要遍历两个链表，并且每个节点最多只需要进行一次相加操作。
# 这种方法的空间复杂度为 O(max(m,n))，因为需要创建一个新的链表来存储相加后的结果。



# 以下是使用 Python 实现的代码：


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwo(l1: ListNode, l2: ListNode) -> ListNode:
    carry = 0
    dummy = ListNode(0)
    curr = dummy
    while l1 or l2 or carry:
        val1 = l1.val if l1 else 0
        val2 = l2.val if l2 else 0
        carry, val = divmod(val1 + val2 + carry, 10)
        curr.next = ListNode(val)
        curr = curr.next
        l1 = l1.next if l1 else None
        l2 = l2.next if l2 else None
    return dummy.next


# 其中，ListNode 是链表节点的定义，addTwoNumbers 是相加函数的实现。
# 在函数中，使用 dummy 节点作为新链表的头节点，curr 节点作为新链表的当前节点，carry 变量记录进位值。
# 遍历两个链表，将对应位置的数字相加，并加上进位值 carry。
# 如果相加的结果大于等于 10，则将进位值 carry 设 1，否则设为 0。
# 将相加的结果对 10 取余数，得到当前位置的数字，并将其添加到新链表中。
# 如果两个链表长度不同，则需要在短链表的末尾补 0，以便与长链表对应位置相加。如果最后一位相加后仍有进位，则需要在新链表的末尾添加一个值为 1 的节点。
# 最后返回新链表的头节点。





# 1. 定义了一个链表节点类 ListNode，包含节点值 val 和指向下一个节点的指针 next。

# 2. 定义了一个函数 addTwo，用于将两个链表 l 和 l2 中的数字相加，并相加后的结果链表。

# 3. 初始化进位值 carry 为 0，创建一个虚拟头节点 dummy，以及一个当前节点 curr，初始值为 0。

# 4. 当 l1 或 l2 或 carry 不为空时，执行循环体内的操作。

# 5. 如果 l1 不为空，则将 val1 设为 l1 的节点值，否则设为 0。

# 6. 如果 l2 不为空，则将 val2 设为 l2 的节点值否则设为 0。

# 7. val1、val2 和 carry 相加，得到相加结果和进位值 carry。

# 8. 将相加结果 10 取余数，得到当前位置数字 val。

# 9. 创建一个新的节点，值为 val，将其添加到新链表 curr 的后面。

# 10. 将 curr 指向新节点，l1 和 l2别指向它们的下一个节点。

# 11. 返回新链表的头节点 dummy.next。
