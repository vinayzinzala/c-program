#include<stdio.h>
int main()
{
 int a[20],n,i,j,temp,key,first,mid,last;
printf("enter the size of array");
scanf("%d",&n);
printf("enter %d elements",n);
for ( i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
printf("given array elements are :");
 for( i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
for(i=0;i<n-1;i++)
{
   for(j=0;j<n-1;j++)
   {
     if(a[j]>a[j+1])
       {
        temp= a[j];
        a[j]=a[j+1];
        a[j+1]= temp;
       }
     }
  }
 printf("sorted array is...");
 for (i=0;i<n;i++)
   {
     printf("%d \t",a[i]);
     }
    printf("enter the key value to be searched");
    scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<=last)
    {
       mid=(first+last)/2;
       if(key==a[mid])
          {
             printf(" element %d found at location%d \n ",key,mid+1);
             return 0;
            }
          else if (key<a[mid])
          {
             last =mid-1;
           }
         else if(key > a[mid])
         {
          first= mid+1;
           }
     }
   printf("\n element %d not found in given array",key);
   return (1);
   }
