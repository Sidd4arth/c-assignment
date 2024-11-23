#include<stdio.h>
int main()
{   
    int choice;
    int x[3][3], y[3][3];
    int row_total, column_total, grandtotal;
    int row_index, column_index;
    do
    {
    printf("1.Accept Data\n");
    printf("2.Print Matrix\n");
    printf("3.Transpose Matrix\n");
    printf("4.Exit\n");
    printf("Enter your choice(1|2|3|4)");
    scanf("%d", &choice);
    if(choice<1 && choice>4)
    {
        printf("Invalid choice\n");
    }
    if(choice==1)
    {
        for(row_index=0;row_index<=2;row_index++)
        {
            for(column_index=0;column_index<=2;column_index++)
            {
                printf("enter data for (%d, %d)) cell:"row_index, column_index);
                scanf("%d", &x[row_index], x[column_index]);
            }
        }
        continue;
    }

    }
    return 0;
}