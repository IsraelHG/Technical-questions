# 88. Merge Sorted Array

You are given two integer arrays `nums1` and `nums2`, sorted in **non-decreasing order**, and two integers `m`and `n`, representing the number of elements in `nums1` and `nums2` respectively.
**Merge** `nums1` and `nums2` into a single array sorted in **non-decreasing order**.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2`has a length of `n`.

**Example 1:**

```
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
```

**Example 2:**

```
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]

Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
```

**Example 3:**

```
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]

Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
```

**Constraints:**

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-109 <= nums1[i], nums2[j] <= 109`

<br><br/>
<br><br/>
<hr><hr>

# **Solution**

The solution should perform the task of merging two sorted integer arrays `nums1` and `nums2` in non-decreasing order. The merged array should be stored in `nums1`, which should have enough space to accommodate both arrays.

The algorithm should work as follows:

1. Set `p1` to the end of the non-zero elements in `nums1`.
2. Set `p2` to the end of `nums2`.
3. Set `p` to the end of `nums1` (including the zeros at the end).
4. Starting from the end of both arrays, compare `nums1[p1]` and `nums2[p2]`.
5. If `nums1[p1]` is greater than `nums2[p2]`, copy `nums1[p1]` to `nums1[p]` and decrement `p1`. Otherwise, copy `nums2[p2]` to `nums1[p]` and decrement `p2`.
6. Decrement `p` after each copy.
7. Repeat steps 4-6 until either `p1` or `p2` reaches the beginning of their respective arrays.
8. If `nums2` has any remaining elements, copy them to the beginning of `nums1`.
9. The resulting array in `nums1` is the merged and sorted version of the two original arrays.

## Visual explanation

Let's say we have two arrays `nums1` and `nums2`, and we want to merge them into a single sorted array:

```
nums1 = [1, 3, 5, 0, 0, 0]
nums2 = [2, 4, 6]
```

The `nums1` array has `m=3` elements, and the `nums2` array has `n=3` elements.
1. Initialize three pointers:

```
p1 = m - 1    // points to the end of nums1
p2 = n - 1    // points to the end of nums2
p = m + n - 1 // points to the end of nums1 (including ending zeros)
```

2. Starting from the end of both arrays, compare the last elements of `nums1` and `nums2`, and place the larger one at the end of `nums1`:

```
while (p1 >= 0 && p2 >= 0) {
    if (nums1[p1] > nums2[p2]) {
        nums1[p] = nums1[p1];
        p1--;
    }
    else {
        nums1[p] = nums2[p2];
        p2--;
    }
    p--;
}
```

In the example above, `nums1[p1]` is 5, and `nums2[p2]` is 6. Since 6 is larger, we place it at the end of `nums1`:

```
nums1 = [1, 3, 5, 0, 0, 6]
nums2 = [2, 4, 6]
```

3. Continue comparing and placing elements until we reach the beginning of one of the arrays:

```
nums1 = [1, 3, 5, 0, 5, 6]
nums2 = [2, 4, 6]
```

```
nums1 = [1, 3, 5, 4, 5, 6]
nums2 = [2, 4, 6]
```

```
nums1 = [1, 3, 3, 4, 5, 6]
nums2 = [2, 4, 6]
```

```
nums1 = [1, 2, 3, 4, 5, 6]
nums2 = [2, 4, 6]
```

4. If we've reached the beginning of `nums1` but `nums2` still has elements, copy the remaining elements of `nums2` to `nums1`:

```
while (p2 >= 0) {
    nums1[p] = nums2[p2];
    p--;
    p2--;
}
```

```
nums1 = [1, 2, 3, 4, 5, 6]
nums2 = [2, 4, 6]
```

5. `nums1` now contains the merged, sorted array:

```
[1, 2, 3, 4, 5, 6]
```
<br>

# **Runtime**

## **Time complexity:** 

The time complexity of this solution is **`O(m + n)`**, where m is the size of `nums1` and n is the size of `nums2`.

The `while` loop iterates through all elements of both arrays exactly once, and each iteration takes constant time. 

Additionally, the second `while` loop only runs if `p2` has not reached the beginning of `nums2`, which can only happen if `nums2` has more elements than `nums1`. In this case, the second `while` loop iterates through the remaining elements of `nums2` and adds them to `nums1`.
Overall, the algorithm has a linear time complexity, which is quite efficient.

## **Space complexity:**

The space complexity of the given solution is **`O(1)`**, as we are modifying the original `nums1` vector in place without using any extra space. We only use a constant amount of extra space for a few integer variables to keep track of the indices.