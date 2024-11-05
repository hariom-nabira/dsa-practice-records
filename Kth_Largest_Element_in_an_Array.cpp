class Solution {
public:
    int partition(vector<int>& arr, int left, int right) {
        int pivotValue = arr[right];
        int storeIndex = left;

        for (int i = left; i < right; i++) {
            if (arr[i] > pivotValue){
                swap(arr[storeIndex], arr[i]);
                storeIndex++;
            }
        }
        swap(arr[storeIndex], arr[right]);
        return storeIndex;
    }

    int quickSelect(vector<int>& arr, int left, int right, int k) {
        if (left == right) {
            return arr[left];
        }

        int randPivot = left + std::rand() % (right - left + 1);
        swap(arr[randPivot], arr[right]);

        int pivotIndex = partition(arr, left, right);
        
        if (pivotIndex == k) {
            return arr[pivotIndex];
        } else if (pivotIndex > k) {
            return quickSelect(arr, left, pivotIndex - 1, k);
        } else {
            return quickSelect(arr, pivotIndex + 1, right, k);
        }
    }

    int findKthLargest(std::vector<int>& arr, int k) {
        srand(time(nullptr));
        int size = arr.size();
        return quickSelect(arr, 0, size - 1, k - 1);
    }
};
// Title: Kth Largest Element in an Array
