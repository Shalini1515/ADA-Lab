#include<stdio.h>
#include<conio.h>

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

void main()
{
    int a[10][10],n;

    printf("Enter number of states: ");
    scanf("%d",&n);

    printf("\nEnter path weights in order:\n* 0 to self state\n* 1000 if no path \n ");
    for(int i=0;i<n;i++)
    {
        printf("\nPath weights from state %d:",i+1);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j] = min(a[i][j],(a[i][k]+a[k][j]));
            }
        }
    }

    printf("\nThe shortest path matrix is: \n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    getch();
}