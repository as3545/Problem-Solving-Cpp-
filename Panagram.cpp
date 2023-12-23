//Code
for (char& c : s) {
        c = tolower(c);
    }

    // Create an array to store the presence of each letter
    bool letters[26] = {false};

    // Iterate through the characters in the string
    for (char c : s) {
        if (isalpha(c)) {
            letters[c - 'a'] = true;
        }
    }

    // Check if all 26 letters are present
    for (bool present : letters) {
        if (!present) {
            return "not pangram";
        }
    }

    return "pangram";
}
