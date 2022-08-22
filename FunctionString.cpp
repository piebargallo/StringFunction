#include <stdio.h>
#include <string.h>

// Driver code
int main () {
	
	// Def array str1 and str2
    char str1[5] = "Sepa";
    char str2[5] = "rado";
   
	// Concatenates str1 and str2 
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );

	return 0;

} // End driver