#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr=arr;
    int i,j,temp;
    
    printf("=== Array: Even/Odd & Sort (Using Pointer) ===\n");
    printf("Enter 5 intgers:\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",ptr+i);
    }
    printf("\nPointer traversal (ptr= &a[0]):\n");
    for(i=0;i<5;i++)
    {
        if(*(ptr+i)%2==0){printf("*(ptr+%d)=%d -> Even\n",i,*(ptr+i));}
        else{printf("*(ptr+%d)=%d -> Odd\n",i,*(ptr+i));}
    }
    printf("\nSorting In Ascending Order \n");
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("Sorted Array :");
    printf("[");
    for(i = 0; i < 5; i++) {
        printf(" %d ", *(ptr + i));
        if(i<4){printf(",");}
    }
    printf("]");
    return 0;
}