#include <stdio.h>
#include <string.h>

int main() {
char strng1[100], strng2[100];
printf("Enter the first string: ");
fgets(strng1, sizeof(strng1), stdin);

// Input the second string
printf("Enter the second string: ");
fgets(strng2, sizeof(strng2), stdin);

//compare two strings
int result = strcmp(strng1, strng2);

if (result == 0) {
printf("Strings are equal.\n");
} else if (result < 0) {
printf("String 1 is less than String 2.\n");
} else {
printf("String 1 is greater than String 2.\n");
}



//concatenate the strings
strcat(strng1, strng2);
printf("Concatenated string: %s\n", strng1);
//reversing string
int length = strlen(strng1);

for (int i = 0, j = length - 1; i < j; ++i, --j) {
char temp = strng1[i];
strng1[i] = strng1[j];
strng1[j] = temp;
    }
printf("Reversed strring: %s\n", strng1);

//length comparision
int len1 = strlen(strng1);
int len2 = strlen(strng2);

if (len1 == len2) {
    printf("Both strings have the same length: %d\n", len1);
} else if (len1 < len2) {
	printf("The second string is longer: %d vs %d\n", len1, len2);
} else {
	printf("The first string is longer: %d vs %d\n", len1, len2);
}


}
