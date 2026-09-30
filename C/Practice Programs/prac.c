int search(int* n, int s, int key) {
    int start = 0;
    int end = s - 1;

    while (start <= end) {
        int mid = (start + end) / 2; 

        if (n[mid] == key) {
            return mid;
        } 
        if (n[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}