#include <stdio.h>
int main(){
    int n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    /*The integer entered by the user is stored in variable n.
     * Then the while loop is iterated until the test expression n != 0 is evaluated to 0 (false).*/

    while(n != 0){
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}