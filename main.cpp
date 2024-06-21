#include"Sort.h"
#include<iostream>
#include"BubbleSort.h"

using namespace std;

int main(void)
{

	Sort *a;
	a = new BubbleSort();
	int arr[5]={1,3,2,4,5};
	int* out = a -> sort(arr,5);
	for (int i=0;i<5;i++)
	{
		cout<<*out<<endl;
		out+=1;

	}
	return 0;
}