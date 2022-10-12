#include<stdio.h>
int main()
{

//1.Number of resources and processes
int n,m;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    printf("Enter the number of resources : ");
    scanf("%d",&m);

//2.Accepting  allocated and maximum need of each process
int i,j;
int alloc[n][m],max[n][m];
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {

        printf("Resource allocated for each process[%d][%d] :",i+1,j+1);
        scanf("%d",&alloc[i][j]);

    }
    printf("\n");
}
    printf("\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
       printf("Max resource need for each process[%d][%d] :",i+1,j+1);
        scanf("%d",&max[i][j]);
     }
     printf("\n");
    }

    //printing allocation matrix

    printf("Allocation matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",alloc[i][j]);
        }
        printf("\n");
    }

    printf("\n");  //normal line gap



    //printing maximum matrix

    printf("Maximum matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",max[i][j]);
        }
        printf("\n");

    }

//3.calculating need matrix
printf("need matrix\n");

int need[n][m];
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d\t",need[i][j]=max[i][j]-alloc[i][j]);
        }
        printf("\n");
    }







}
