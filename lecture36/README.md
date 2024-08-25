# Quick Sort Algorithm - Lecture by Love Babbar

This repository contains the implementation of the Quick Sort algorithm as explained by Love Babbar in his lecture. The Quick Sort algorithm is a fundamental sorting technique often asked in coding interviews, and this lecture provides a detailed walkthrough of its implementation using recursion.

## 📚 Lecture Summary

In this lecture, Love Babbar explains the Quick Sort algorithm, emphasizing its importance in coding interviews. The session includes a detailed walkthrough of the algorithm's implementation, a comparison with Merge Sort, and an analysis of the partitioning process that is crucial to Quick Sort.

## 📈 Key Insights

- **Understanding Quick Sort**: Quick Sort is a divide-and-conquer algorithm that sorts arrays by partitioning them into sub-arrays. Mastering this algorithm is essential for coding interviews.
  
- **Partitioning Explained**: The partitioning process is the core of Quick Sort, where elements are rearranged so that all elements to the left of the pivot are smaller, and those to the right are larger.

- **Recursion’s Role**: Quick Sort leverages recursion to sort the left and right sub-arrays after partitioning, simplifying the sorting process.

- **Complexity Analysis**: Quick Sort has an average and best-case time complexity of O(n log n), but in the worst case, it can degrade to O(n²). Understanding this helps in performance optimization.

- **In-Place Sorting**: Quick Sort is an in-place algorithm, meaning it requires minimal additional memory, making it efficient in terms of space usage.

- **Practical Implementation**: The lecture stresses the importance of hands-on coding practice to fully grasp the Quick Sort algorithm.

## 🛠️ Implementation

Below is the Python implementation of the Quick Sort algorithm discussed in the lecture:

```python
def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quick_sort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

# Example usage
arr = [10, 7, 8, 9, 1, 5]
n = len(arr)
quick_sort(arr, 0, n - 1)
print("Sorted array:", arr)
