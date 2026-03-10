#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Ensure the function name matches exactly what the driver calls
char* addBinary(char* a, char* b) {
    int n = strlen(a);
    int m = strlen(b);
    int maxLen = n > m ? n : m;
    
    // Allocate memory for result: maxLen + 1 (for potential carry) + 1 (for null terminator)
    char* res = (char*)malloc(sizeof(char) * (maxLen + 2));
    res[maxLen + 1] = '\0';
    
    int i = n - 1, j = m - 1, k = maxLen, carry = 0;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        
        res[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }
    
    // If there was no carry into the extra space, shift the string forward
    if (k >= 0) {
        return &res[1]; 
    }
    
    return res;
}
