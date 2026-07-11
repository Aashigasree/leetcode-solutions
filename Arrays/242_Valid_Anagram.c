bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t))
        return false;

    int count[26] = {0};

    // Count characters in s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract characters in t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;

        if (count[t[i] - 'a'] < 0)
            return false;
    }

    return true;
}