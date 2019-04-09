/* write c program for tower of hanoi */
#include <stdio.h>
 
/* This program created by Sujit Mandal */
 
void tower(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("\nThe Tower of Hanoi are :\n");
    tower(num, 'A', 'C', 'B');
    return 0;
}
void tower(int num, char x, char y, char z)
{
    if (num == 1)
    {
        printf("\nstep 1 from %c to %c", x, y);
        return;
    }
    tower(num - 1, x, y, z);
    printf("\nstep %d from %c to %c", num, x, y);
    tower(num - 1, z, y, x);
}
