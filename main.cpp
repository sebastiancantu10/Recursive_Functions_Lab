#include <iostream>
#include <string>
using namespace std;

// 1. Write a function that takes an integer as its only argument.
// Given this integer n, it calculates the nth harmonic number.
double harmonic(int n) {
    if (n == 1) {
        return 1.0;
    }

    return (1.0 / n) + harmonic(n - 1);
}

// 2. Write a function that takes a string as its only argument.
// It determines whether this string is a palindrome or not.
// A string is called a palindrome if it reads the same from forward and backward.
bool checkPalindrome(string str, int left, int right) {
    if (left >= right) {
        return true;
    }

    if (str[left] != str[right]) {
        return false;
    }

    return checkPalindrome(str, left + 1, right - 1);
}

// Wrapper function
bool isPalindrome(string str) {
    return checkPalindrome(str, 0, str.length() - 1);
}

// 3. Write a function that takes an integer as its only argument.
// Given this integer n, it prints a triangle to the console.
void printTriangle(int n) {
    if (n == 0) {
        return;
    }

    printTriangle(n - 1);

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {

    // Harmonic number test
    int n1 = 4;
    cout << "The harmonic number of " << n1 << " is " << harmonic(n1) << endl;

    cout << endl;

    // Palindrome tests
    string word1 = "madam";
    string word2 = "taco";
    string word3 = "civic";
    string word4 = "burrito";

    cout << "Is " << word1 << " a palindrome? " << (isPalindrome(word1) ? "Yes" : "No") << endl;
    cout << "Is " << word2 << " a palindrome? " << (isPalindrome(word2) ? "Yes" : "No") << endl;
    cout << "Is " << word3 << " a palindrome? " << (isPalindrome(word3) ? "Yes" : "No") << endl;
    cout << "Is " << word4 << " a palindrome? " << (isPalindrome(word4) ? "Yes" : "No") << endl;

    cout << endl;

    // Triangle test
    int n2 = 4;
    cout << "Triangle for " << n2 << ":" << endl;
    printTriangle(n2);

    return 0;
}