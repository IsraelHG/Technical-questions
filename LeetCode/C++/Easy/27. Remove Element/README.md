# 27. Remove Element

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array `nums`. More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

Return `k` *after placing the final result in the first* `k` *slots of* `nums`.

Do not allocate extra space for another array. You must do this by **modifying the input array in-place** with O(1) extra memory.

**Custom Judge:**

The judge will test your solution with the following code:

```
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```
If all assertions pass, then your solution will be **accepted**.



**Example 1:**

```
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]

Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

**Example 2:**

```
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]

Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

**Constraints:**

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

<br><br/>

# Explanation

Suppose we have the following input vector `nums` and value `val`:
```
main.cpp
-------------------------------
vector<int> nums = {3, 2, 2, 3};
int val = 3;
```

We want to remove all occurrences of `val` from `nums` in-place.

<hr>

## Step 1:

We initialize two pointers, `i` and `j`, to 0:
```
removeElement.cpp
----------
int i = 0;
int j = 0;
 ```

<hr>

## Step 2:

We iterate through the vector `nums` with the first pointer `i`:
```
removeElement.cpp
-----------------------------------------
while (i < static_cast<int>(nums.size()))
```
<hr>

## Step 3:

If `nums[i]` is not equal to `val`, we copy it to `nums[j]`, and increment both pointers `i` and `j`.
```
removeElement.cpp
----------------------
if (nums[i] != val) {
    nums[j] = nums[i];
    j++;
}
i++;
```

If `nums[i]` is equal to `val`, we just increment `i`.
```
removeElement.cpp
-----------------
else {
    i++;
}
```
After the first iteration, `nums[j]` will be equal to `nums[0]`, which is 2, because `nums[0]` is not equal to `val`. We increment both `i` and `j`, so now `i` is 1 and `j` is 1.

After the second iteration, `nums[j]` will be equal to `nums[1]`, which is 2, because `nums[1]` is not equal to `val`. We increment both `i` and `j`, so now `i` is 2 and `j` is 2.

After the third iteration, `nums[j]` will be equal to `nums[2]`, which is 3, because `nums[2]` is not equal to `val`. We increment both `i` and `j`, so now `i` is 3 and `j` is 3.

After the fourth iteration, `nums[j]` will be equal to `nums[3]`, which is 3, because `nums[3]` is equal to `val`. We only increment `i`, so now `i` is 4 and `j` is still 3.

<hr>

## Step 4:

After the loop, `j` will be equal to the number of elements in the updated vector, which is the same as the number of elements in the original vector minus the number of occurrences of `val`. We return `j`.
```
removeElement.cpp
-----------------
return j;
```
In this example, `j` is 2, because there are two elements in the updated vector, which are {2, 2}.

<hr>

## Step 5:

The original vector `nums` now contains the updated vector at the beginning, followed by any remaining elements (which may or may not be equal to `val`). We can print the updated vector using a loop:
```
main.cpp
-----------------------------
for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
}
```

The output of this loop is:
```
2 2
```

which is the expected output after removing all occurrences of `val` from `nums` in-place.