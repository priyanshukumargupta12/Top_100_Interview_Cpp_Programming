#include <iostream>
#include <string>
using namespace std;

#define NO_OF_CHAR 256

bool areAnagram(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    int count[NO_OF_CHAR] = {0};

    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < NO_OF_CHAR; i++)
        if (count[i] != 0)
            return false;

    return true;
}

int main() {
    string str1 = "priyanshu";
    string str2 = "riyanpshu";

    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other\n";
    else
        cout << "The two strings are not anagram of each other\n";
}
