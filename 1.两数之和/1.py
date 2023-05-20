# 思路：
      # 时间复杂度最优的解法是使用双指针。首先将数组排序，然后使用两个指针分别指向数组的首尾元素。
      # 如果两个指针所指的素之和等于目标值，则找到了两个数，返回它们的下标。如果和小于目标值，则将左指针向右动一位，以增加和的值。
      # 如果和大于目标值，则将右指针向左移动一位，以减小和的值。
      # 重复这个过程，直到找到两个数或者指针相遇。这个方法的时间复杂度是O(nlogn)，因为需要数组进行排序，但是空间复杂度是O(1)，因为只需要使用两个指针。
      
    
    
# 以下是使用双指针的代码实现：

def twoSum(nums, target):
    nums.sort()
    left, right = 0, len(nums) - 1
    while left < right:
        nums[left] + nums[right] == target:
            return [left, right]
        elif nums[left] + nums[right] < target:
            left += 1
        else:
            right -= 1
    return []


# 这个函数接受一个整数数组和一个目标值作为参数，返回一个包含两个数的下标的列表，这两个数的和等于目标值。
# 如果找不到这样的两个数，则返回一个空列表。

# 下面是对每一句代码的详细分析：

# 1. `nums.sort()`: 对输入的整数数组进行排序，这样可以方便地使用双指针来查找两个数。

# 2. `left, right = 0, len(nums) - 1`: 初始化两个指针left和right，分别指向数组的首尾元素。

# 3. `while left < right:`: 进入while循环，只要left和right指针没有相遇，就继续查找。

# 4. `nums[left] + nums[right] == target:`: 如果left和right所指的两个数之和等于目标值，则找到了两个数，返回它们的下标。

# 5. `return [left, right]`: 返回找到的两个数的下标。

# 6. `elif nums[left] + nums[right] < target:`: 如果left和right所指的两个数之和小于目标值，则将left指针向移动一位，以增加和的值。

# 7. `left += 1`: 将left指针向右移动一位。

# 8. `else:`: 如果left和right所指的两个数之和大于目标值，则将right指针向左移动一位，以减小和的值。

# 9. `right -= 1`: 将right指针向左移动一位。

# 10. `return []`: 如果找不到这样的两个数，则返回一个空列表。

# 这个方法的时间复杂度是O(nlogn)，因为需要数组进行排序，但是空间复杂度是O(1)，因为只需要使用两个指针。
