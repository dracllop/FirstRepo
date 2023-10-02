/*
	*********************
	By dracllop@gmail.com
	*********************
	Date: ***************
*/
#include <stdio.h>

int main(void){
    int x = 42139;
    printf("%s", "Enter a five digits integer ");
    scanf("%d", &x);

    int first_digit = x / 10000;
    printf("%d ", first_digit);
    int second_digit = x % 10000 / 1000;
    printf("%d ", second_digit);
    int third_digit = x % 1000 / 100;
    printf("%d ", third_digit);
    int forth_digit = x % 100 / 10;
    printf("%d ", forth_digit);
    int fith_digit = x % 10;
    printf("%d", fith_digit);

    return 0;
}
