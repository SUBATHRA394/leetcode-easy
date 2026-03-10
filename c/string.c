int strStr(char* haystack, char* needle) {
    int h_len = strlen(haystack);
    int n_len = strlen(needle);
    // If needle is longer than haystack, it can't be found
    if (n_len > h_len) return -1;
    // Iterate through haystack, but only up to where needle could still fit
    for (int i = 0; i <= h_len - n_len; i++) {
        int j = 0;
        // Check if the substring starting at i matches needle
        while (j < n_len && haystack[i + j] == needle[j]) {
            j++;
        }
        // If we matched the entire needle, return the start index
        if (j == n_len) return i;
    }
    return -1;
}
