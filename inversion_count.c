// Inversion count

#include <stdio.h>

int inversion_count(int a[],int n)
{
  int i,j,c=0;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          // if next element is lesser than previous
          if(a[i]>a[j])
          {
              c++;
          }
      }
  }
  return c;
}


int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //calling function
    int k=inversion_count(arr,n);
    
    printf("Inversion count is: %d",k);
    return 0;
}
