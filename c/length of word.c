int lengthOfLastWord(char* s) {
    int length = 0;
    int i = strlen(s) - 1;

    // Step 1: Skip all trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: Count characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
