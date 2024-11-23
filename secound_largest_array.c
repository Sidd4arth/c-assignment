#include<stdio.h>
int main()
{
    int x[10], y, largest, smallest, secondLargest;
    
    for(y = 0; y <= 9; y++)
    {
        printf("Enter a number: ");
        scanf("%d", &x[y]);
    }
    
    largest = x[0];
    smallest = x[0];
    secondLargest = x[0];
    

    for(y = 1; y <= 9; y++)
    {
        if(x[y] > largest)
        {
            largest = x[y];
        }
        if(x[y] < smallest)
        {
            smallest = x[y];
        }
    }


    if(largest == smallest)
    {
        printf("All elements of the array are the same\n");
    }
    else
    {
        secondLargest = smallest;

        for(y = 0; y <= 9; y++)
        {
            if(x[y] > secondLargest && x[y] < largest)
            {
                secondLargest = x[y];
            }
        }

        printf("The second largest number is %d\n", secondLargest);
    }
    
    return 0;
}
