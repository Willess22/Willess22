//Joseph Willess
// 9/11/21
// vaccine

#include <iostream>
using namespace std;


void bubbleSort(int[], int);
void swap(int&, int&);

int main()
{
    const int SIZE = 6;


    int vaccines[SIZE] = { 26, 31, 15, 22, 41, 36 };

    
    cout << "The unsorted vaccines:\n";
    for (auto element : vaccines)
        cout << element << " ";
    cout << endl;

    cout << "total number of vaccine does distributed:\n";
    for (auto element : vaccines)
        cout << element << " ";
    cout << endl;
    
    bubbleSort(vaccines, SIZE);

   
    cout << "The sorted vaccines:\n";
    for (auto element : vaccines)
        cout << element << " ";
    cout << endl;
   
   

    bubbleSort(vaccines, SIZE);
    cout << "total number of vaccine does not distributed:\n";
    for (auto element : vaccines)
        cout << element << " ";
    cout << endl;

    return 0;
}


void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}