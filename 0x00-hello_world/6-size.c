#include<stdio.h>
int main() {

    
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

// sizeof evaluates the size of a variable
 
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu bytes(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    
return 0;
}
