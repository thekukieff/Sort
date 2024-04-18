#include <iostream>
#include <cstdlib>
using namespace std;

void Fill(int arr[], int size);

void Cout(int arr[], int size);

void insertionSort(int list[], int listLength);

void SelectionSort(int arr[], int size);

void Bubble(int arr[], int size);

int main() {
	setlocale(LC_ALL, "ru");
	const int SIZE = 10;
	int arr_1[SIZE];
	int arr_2[SIZE];
	int arr_3[SIZE];
	Fill(arr_1, SIZE);
	Cout(arr_1, SIZE);
	
	Fill(arr_2, SIZE);
	Cout(arr_2, SIZE);
	
	Fill(arr_3, SIZE);
	Cout(arr_3, SIZE);
	cout << "ƒо сортировки "<<endl;
	
	insertionSort(arr_1, SIZE);//метод вставки.  Aлгоритм сортировки, который работает путем прохода по списку 
	//данных и постепенной сборки отсортированной последовательности в начале списка.
	cout << "ћетод вставки"<<endl;
	Cout(arr_1, SIZE);

	SelectionSort(arr_2, SIZE);//метод выбора. Aлгоритм сортировки, который на каждой итерации находит минимальный элемент в неотсортированной части массива и мен€ет
	//его местами с первым элементом в неотсортированной части массива.
	cout << "ћетод вставки" << endl;
	Cout(arr_2, SIZE);

	Bubble(arr_3, SIZE);//метод пузырька(долго, но прсто в разработке)
	cout << "ћетод пузырька" << endl;
	Cout(arr_3, SIZE);



}

void Fill(int arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
	
}

void Cout(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;



}
void insertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;
		while (j >= 0 && arr[j] > arr[j + 1])
		{
			swap(arr[j], arr[j + 1]);
			j--;
		}
	}
}


void SelectionSort(int arr[], int size) {

	int i, j, min;
	for (i = 0; i < size-1; i++)
	{
		min = i;
		for (j = i+1; j < size; j++)
		{
			if (arr[j]<arr[min])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	
	}



}

void Bubble(int arr[], int size) {
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}