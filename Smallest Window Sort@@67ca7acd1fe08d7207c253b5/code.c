int findUnsortedSubarray(int* nums, int n) {
    int start = -1, end = -1;
    int max_seen = nums[0], min_seen = nums[n-1];

    for (int i = 1; i < n; i++) {
        max_seen = (nums[i] > max_seen) ? nums[i] : max_seen;
        if (nums[i] < max_seen) end = i;
    }

    for (int i = n-2; i >= 0; i--) {
        min_seen = (nums[i] < min_seen) ? nums[i] : min_seen;
        if (nums[i] > min_seen) start = i;
    }

    return (start == -1) ? 0 : (end - start + 1);
}