#include <stdlib.h>

void towerOfHanoi(int n, char from_rod,char to_rod, char spare_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c \n",from_rod,to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, spare_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c \n",n,from_rod,to_rod);
    towerOfHanoi(n - 1, spare_rod, to_rod, from_rod);
}


int main()
{
    int n ;
    printf("Enter no. of disks : ");     // Number of disks
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');     //names of rods are A,B&C
    return 0;
}
