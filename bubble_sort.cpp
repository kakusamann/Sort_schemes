/**************************************************************************************************
 * Bubble Sort
 * By kakusama
 * 2021/2/21
 **************************************************************************************************/
#include <iostream>
using namespace std;

/* To sort integers */
void bubble_sort(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = 0; j < (arr_size-i); ++j)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
            }
        }
    }
}

/* To print integers */
void show_info(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
	// Init a array
    int arr_to_sort[] = {1, 22, 33, 24, 19, 26, 5, 100, 4, -5, -99, 0, 1000, 2021, 1226, -999};
    int arr_size = sizeof(arr_to_sort)/sizeof(int);

    // Print the array which before sorting
    cout << "--Before sorting!" << endl;
    show_info(arr_to_sort, arr_size);

    // Sorting!
	bubble_sort(arr_to_sort, arr_size);

	// Print the array which after sorting
	cout << "--After sorting!" << endl;
    show_info(arr_to_sort, arr_size);

	getchar();
    cout << "Program ending !!!" << endl;
    getchar();
    return 0;
}
