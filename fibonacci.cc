
#include <iostream>
using namespace std; 


int* fibonacci(int num)
{
	int *arr = new int(50);
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr;
}

int main() {
	int count, *array; 
	int i;
	int one = 0, two = 1, final; 
	 
	cout << "How much do you want to count?: " << endl;
	cin >> count;
	
	array = fibonacci(count); 

	for (int i = 0; i < count; i++)
	{
		cout << *(array + i) << " ";
	}

	
}

