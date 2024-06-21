#include<iostream>
#include"Sort.h"
#include"BubbleSort.h"
#include<vector>

BubbleSort::BubbleSort(){}

int* BubbleSort::sort(int arr[],int size)
{
	// int cur;
	// for(int i=0;i<size-2;i++)
	// {
	// 	for(int j=i;i<size-2;i++)
	// 	{
	// 		if (old[j]>old[j+1])
	// 		{
	// 			cur=old[j];
	// 			old[j]=old[j+1];
	// 			old[j+1]=cur;
	// 		}
	// 	}
	// }

	//11111
	// int cur;

	// for (int i= size-1;i>0;i--)
	// {
	// 	for (int j=i;j>(size-1-i);j--)
	// 	{
	// 		if (old[j-1]>old[j])
	// 		{
	// 			cur=old[j-1];
	// 			old[j-1]=old[j];
	// 			old[j]=cur;
	// 		}
	// 	}
	// }

	// int cur;
	// int times=0;
	// while(old[0]>old[1])
	// {
	// 	for (int i=0;i<size-1-times;i++)
	// 	{
	// 		if (old[i]>old[i+1])
	// 		{
	// 			cur =old[i];
	// 			old[i]=old[i+1];
	// 			old[i+1]=cur;
	// 		}
	// 	}
	// 	times+=1;
	// }

	for(int i=0;i<size-1;i++){
    	for(int j=0;j<size-1-i;j++){
  			if(arr[j]>arr[j+1]){
    			swap(arr[j],arr[j+1]);

   			}
    	}
    }

	
	
	return arr;
}
