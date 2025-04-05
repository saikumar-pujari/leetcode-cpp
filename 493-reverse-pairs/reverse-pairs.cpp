class Solution {
public:
  int countReversePairs(vector<int>& arr, int low, int mid, int high) {
    int count = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high && arr[i] > 2LL * arr[j]) {
            j++;
        }
        count += (j - (mid + 1));
    }
    return count;
}

int mergeAndSort(vector<int>& arr, int low, int mid, int high) {
    int count = countReversePairs(arr, low, mid, high);

    // Merge logic
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return count;
}

int mergeSortReverse(vector<int>& arr, int low, int high) {
    if (low >= high) return 0;
    int mid = (low + high) / 2;
    int count = mergeSortReverse(arr, low, mid);
    count += mergeSortReverse(arr, mid + 1, high);
    count += mergeAndSort(arr, low, mid, high);
    return count;
}

int reversePairs(vector<int>& arr) {
    return mergeSortReverse(arr, 0, arr.size() - 1);
}
  
};