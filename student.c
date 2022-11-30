#include "student.h"
#include<stdio.h>
#include<string.h>

int squareOfSmallest(int array[], int length) {
	if (length >= 1)
	{
		int min = array[0];
		for (int i = 0; i < length; i++)
			if (array[i] < min)
				min = array[i];
		return min * min;    // find the min number and square
	}
	else
		return -1;
}

int findMin(int* nums, int numsSize) {
	if (numsSize >= 1)
	{
		int* p = nums;
		int min = *p;
		for (int i = 0; i < numsSize; i++)
		{
			if (*p < min)      //loop for finding the min
				min = *p;
			p++;
		}
		return min;
	}
	else
		return -1;
}

bool isPalindrome(char str[]) {
	char temp[20] = {0};
	for (int i = 0; i < strlen(str); i++)
	{
		temp[i] = str[strlen(str) - i - 1];
	}
	if (strcmp(temp, str) == 0)
		return true;
	else
		return false;
}

int freqOfChar(char str[], char key) {
	int len = strlen(str);
	if (len >= 0) //return when len greater than 0
	{
		int num = 0;
		for (int i = 0; i < len; i++) 
			if (str[i] == key)
				num++; // add 1 when key is str
		return num;
	}
	else
		return -1;
}

void sort(int array[], int length) {
	for (int i = 0; i < length - 1; i++)
		for (int j = i + 1; j < length; j++)
		{
			if (array[i] > array[j])
			{
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
}

int* twoSum(int* nums, int numsSize, int target) {
	int *result = malloc(2*sizeof(int));   //malloc the array
	for (int i = 0; i < numsSize - 1; i++)
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target) // return when target is the sum is target
			{
				result[0] = nums[i];
				result[1] = nums[j];
				return result;
			}

		}
	return NULL;
}



int* decryptPointer(int array[], int length, int* key[]) {
	
	int *result = malloc(length*sizeof(int));
	for (int i = 0; i < length; i++){
		result[i] = array[i] + *key[i];
		
	}
	return result;
}
