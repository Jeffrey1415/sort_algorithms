#pragma once
#include<iostream>
#include"Sort.h"
#include<vector>
using namespace std;

class BubbleSort:public Sort
{
public:

	BubbleSort();

	virtual int* sort(int old[],int size);
};