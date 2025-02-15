#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    

    return true;
}
