int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    char temp;

    while (left < right) {
        if (!isVowel(s[left])) {
            left++;
        } else if (!isVowel(s[right])) {
            right--;
        } else {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    return s;
}