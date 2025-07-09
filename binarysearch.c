#include<stdio.h>
void sort(int ar[],int n);
int binarysearch( int a[],int n,int key);
int main()
{
  int b[10] = {5,2,11,7,9,6,18,-1,9,10};
  int i;
  for(i=0;i<10;i++)
  {
    printf("%d ",b[i]);
  }
  sort(b,10);
  for (i = 0; i < 10; i++)
  {
    printf("%d,", b[i]);
  }
  printf("\n");
  
  i = binarysearch(b,10,11);
  if (i != -1)
  {
    printf("data found at index %d\n", i);
  }
  else
  {
    printf("data not found\n");
  }
  
}
void sort(int ar[],int n)
{
  int temp;
  int i,j;
  
  for(i=0;i<n;i++)
  { 
    for(j=i+1;j<n;j++)
    {
      if(ar[i]>ar[j])
      {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j]= temp;
      }
    }  
     
  }
  printf("\nafter sorting : ");
}

int binarysearch( int a[],int n ,int key)
{ 
  
  int low = 0;
  int high = n;
  while(low <= high)
  {
    int mid = (low + (high - low)/2);
    if(a[mid] == key)
    {
      return mid;
    }
    else if(a[mid]<key)
    {
      low = mid + 1;      
    }
    else
    {
      high = mid - 1; 
    }
  }
  return -1;
}

