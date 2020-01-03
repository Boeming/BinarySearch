#pragma once

template <class T>

unsigned int binarySearch(T *arr, T item, unsigned int size)
{
  int low = 0;
	int high = size - 1;
	while (low <= high)
	{
		unsigned int mid = (low + high)/2;
		T guess = arr[mid];
		if (guess == item)	return mid;
		if (guess > item) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
