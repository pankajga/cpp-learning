# Binary Search

Suppose you want to find a particular element in the sorted array, then following this technique, you have to traverse all the array elements for searching one element but guess if you only have to search at most half of the array indices for performing the same operation. This can be achieved through binary search.

**Advantages of Binary search:**

1. This searching technique is fast and easier to implement.

2. Requires no extra space.

3. Reduces time complexity of the program to a greater extent. (The term ​time complexity ​might be new to you, you will get   to understand this when you will be studying algorithmic analysis. For now, just consider it as the time taken by a particular algorithm in its execution and time complexity is determined by the number of operations that are performed by that algorithm i.e., time complexity is directly proportional to the number of operations in the program).

*Now, let's look at what binary searching is.*</br>
Prerequisite​:​ Binary search has one pre-requisite, the array must be sorted unlike the linear search where elements could be any order.

*Let us consider the array:*</br>
```
    0       1        2        3       4
    1       2        3        4       5
```

You can see it is an array of size 5 with elements inside the boxes and indices above them.
Our target element is 2.

**Steps:**

1. Find the middle index of the array. In case of even length of the array consider the index that appears first out of two    middle ones.

2. Now, we will compare the middle element with the target element. In case they are equal then we will simply return the middle index.

3. In case they are not equal, then we will check if the target element is less than or greater than the middle element.

    ● In case, the target element is less than the middle element, it means that the target element, if present in the given array, will be on the left side of the middle element as the array is sorted.

    ● Otherwise, the target element will be on the right side of the middle element.

4. This helps us discard half of the length of the array and we have reduced the number of operations.

5. Now, since we know that the element is on the left, we will assume that the array’s starting and ending indices to be:

    ● For left:​ start = 0, end = n/2-1

    ● For right: ​start = n/2, end = n-1
      where n are the total elements in the array.

6. We will repeat this process until we find the target element. In case start and end becomes equal or start becomes more than end, and we haven’t found the target element till now, we will simply return -1 as that element is not present in the array. In the example above, the middle element is 3 at index 2, and the target element is 2 which is greater than the middle element, so we will move towards the left part. Now marking start = 0, and end = n/2-1 = 1, now middle = (start + end)/2 = 0. Now comparing the 0-th index element with 2, we find that 2 > 1, hence we will be moving towards the right. Updating the start  = 1 and end = 1, middle becomes 1, comparing 1-st index of the array with the target element, we find they are equal, meaning from here we will simply return 1 (the index of the element).