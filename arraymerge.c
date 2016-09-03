/*** Merging of two arrays in sorted form ***/
/*** Author: Sumit Kumar ***/

#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"

int *arr;
int* create(int);
void sort(int *,int);
void display(int *,int);
int* merge(int *,int *,int,int);
int main()
{	
	int s1,s2;
	int *a,*b,*c;
	printf("enter the size of array1\n");
	scanf("%d",&s1);
	printf("enter elements for first array\n");
	a=create(s1);
	
	printf("enter the size of second array2\n");
	scanf("%d",&s2);
	printf("enter elemets for second array\n");
	b=create(s2);
	
	sort(a,s1);
	sort(b,s1);

	printf("first array\n");
	display(a,s1);

	printf("second array\n");
	display(b,s2);
	
	printf("after merging\n");
	c=merge(a,b,s1,s2);
	display(c,s1+s2);
	
	return 0;
}

int* create(int size)
{
	int *arr,i;
	arr=(int *)malloc(sizeof(int)* size);
	for(i=0;i<size;i++)
	{
		printf("enter the element number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	return arr;
}

void sort(int *arr,int size)
{
	int temp,i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void display(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int* merge(int *a,int *b,int s1,int s2)
{
	int i,j,k;
	int *arr;
	int size=s1+s2;
	arr=(int *)malloc(sizeof(int)* (size));
	for(k=0,j=0,i=0;i<=size;i++)
	{
		if(a[k]<b[j])
		{
			arr[i]=a[k];
			k++;
			if(k>=s1)
			{
				for(i++;j<s2;j++,i++)
				arr[i]=b[j];
			}
		}
		
		else
		{
			arr[i]=b[j];
			j++;
			if(j>=s2)
			{
				for(i++;k<s1;k++,i++)
				arr[i]=a[k];
			}
		}
	}
	return arr;
}
