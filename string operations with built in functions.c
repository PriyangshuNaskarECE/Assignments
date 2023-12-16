#include <stdio.h>
//USING CHAR FUNCTION
int compareStrings(const char *strng3, const char *strng4) {
    while (*strng3 != '\0' && *strng4 != '\0' && *strng3 == *strng4) {
        strng3++;
        strng4++;
    }

    if (*strng3 == *strng4) {
        return 0; 
    } else if (*strng3 < *strng4) {
        return -1; 
    } else {
        return 1; 
    }
}

//function to concatenate two strings
void concatenateStrings(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

//function to reverse a string
void reverseString(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

//function to compare lengths of two strings
int compareLengths(const char *strng3, const char *strng4) {
    int len1 = 0, len2 = 0;

    while (*strng3 != '\0') {
        len1++;
        strng3++;
    }

    while (*strng4 != '\0') {
        len2++;
        strng4++;
    }

    if (len1 == len2) {
        return 0; 
    } else if (len1 < len2) {
        return -1; 
    } else {
        return 1; 
    }
}
int main(){
    char strng3[100], strng4[100], result[200];

    printf("Enter the first string for char func: ");
    scanf("%s", strng3);

    // Input second string
    printf("Enter the second string for char func: ");
    scanf("%s", strng4);

    int cmpResult = compareStrings(strng3, strng4);
    printf("String Comparison: %d\n", cmpResult);

    concatenateStrings(result, strng3);
    concatenateStrings(result, strng4);
    printf("String Concatenation: %s\n", result);

    reverseString(strng3);
    printf("String Reversal (1st string): %s\n", strng3);
    reverseString(strng4);
    printf("String Reversal (1st string): %s\n", strng4);
    int lenCmpResult = compareLengths(strng3, strng4);
    printf("Length Comparison: %d\n", lenCmpResult);

}