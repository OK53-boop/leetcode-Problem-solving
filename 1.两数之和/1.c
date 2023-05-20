# 思路：
      # 时间复杂度最优的解法是使用双指针。首先将数组排序，然后使用两个指针分别指向数组的首尾元素。
      # 如果两个指针所指的素之和等于目标值，则找到了两个数，返回它们的下标。如果和小于目标值，则将左指针向右动一位，以增加和的值。
      # 如果和大于目标值，则将右指针向左移动一位，以减小和的值。
      # 重复这个过程，直到找到两个数或者指针相遇。这个方法的时间复杂度是O(nlogn)，因为需要数组进行排序，但是空间复杂度是O(1)，因为只需要使用两个指针。
      


#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    int left = 0, right = numsSize - 1;
    while (left < right) {
        if (nums[left] + nums[right] == target) {
            result[0] = left;
            result[1] = right;
            return result;
        } else if (nums[left] + nums[right] < target) {
            left++;
        } else {
            right--;
        }
    }
    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    printf("[%d, %d]\n",[0], result[1]);
    free(result);
    return 0;
}

// 以下是对每一句代码的分析：

// #include <stdio.h>
// #include <stdlib.h>
// 这两行代码是包含了标准输入输出库和标准库的头文件。


// int* twoSum(int* nums, numsSize, int target, int* returnSize){
// 这一行代码定义了一个名为 `twoSum` 的函数，它接受四个参数：
// 一个整数数组 `nums`，数组的大小 `numsSize`，一个目标整数 `target`，以及一个指向整数的指针 `returnSize`。
// 该函数返回一个指向整数的指针。


// int* result = (int*)malloc(2 * sizeof(int));
// 这一行代码使用 `malloc` 函数动态分配了一个包含两个整数的数组，并将其地址赋值给 `result` 指针。


// *returnSize =2;
// 这一行代码将 `returnSize` 指针所指向的地址的值设置为 2，表示返回的数组大小为 2。


// int left = 0, right = numsSize - 1;
// 这一行代码定义了两个整数变量 `left` 和 `right`，并将它们分别初始化为 0 和 `numsSize - 1`。


// while (left < right) {
// 这一行代码开始一个 while 循环，只要 `left` 小于 `right`，就会一直执行循环体中的代码。


// if (nums[left] + nums[right] == target) {
//     result[0] = left;
//     result[1] = right;
//     return result;
// }
// 这一段代码判断 `nums[left]` 和 `nums[right]` 的和是否等于 `target`，
// 如果是，就将 `left` 和 `right` 的下标分别赋值给 `result` 数组的第一个和第二个元素，并返回 `result` 指针。


// else if (nums[left] + nums[right] < target) {
//     left++;
// }
// 这一段代码判断 `nums[left]` 和 `nums[right]` 的和是否小于 `target`，如果是，就将 `left` 的值加 1。


// else {
//     right--;
// }
// 这一段代码判断 `nums[left]` 和 `nums[right]` 的和是否大于 `target`，如果是，就将 `right` 的值减 1。


// return result;
// 这一行代码返回 `result` 指针，指向包含两个整数的数组。


// int main() {
// 这一行代码定义了一个名为 `main` 的函数，它是程序的入口点。


// int nums[] = {2, 7, 11, 15};
// 这一行代码定义了一个包含四个整数的数组 `nums`，并将其初始化为 {2, 7, 11, 15。


// int target = 9;
// 这一行代码定义了一个整数变量 `target`，并将其初始化为 9。


// int numsSize = sizeof(nums) / sizeof(nums[0]);
// 这一行代码计算了数组 `nums` 的大小，并将其赋值给numsSize` 变量。


// int returnSize;
// 这一行代码定义了一个整数变量 `returnSize`，用于存储返回的数组大小。


// int* result = twoSum(nums, numsSize, target, &returnSize);
// 这一行代码调用了 `twoSum` 函数，并将 `nums`、`numsSize`、`target` 和 `&returnSize` 作为参数传递给它。该函数返回一个指向整数的指针，并将其赋值给result` 指针。


// printf("[%d, %d]\n",[0], result[1]);
// 这一行代码使用 `printf` 函数打印出 `result` 数组的第一个和第二个元素。


// free(result);
// 这一行代码使用 `free` 函数释放了动态分配的内存。


//  0;
// 这一行代码表示程序正常结束，并返回 0。
