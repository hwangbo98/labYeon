#include <stdio.h>

void sub1(int *arr, int n);
void sub2();

int main(){
sub1();
sub2();

return 0;
}

int sub1(int *arr, int n)
{
    int min_index;
    int temp;
    int i;

    for (i = 0; i < n - 1; i++) {
	min_index = 0;

	for (j = i + 1; j < n; j++) {
	    if (arr[j] < arr[min_index])
		min_index = j;
	}
        temp = arr[i];
	arr[i] = arr[min_index];
	arr[min_index] = temp; 
    } 
}

