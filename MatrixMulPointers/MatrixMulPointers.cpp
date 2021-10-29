

#include <iostream>

using namespace std;


void MatrixMultiplication(int* arr[2][2], int size)
{

    int s;
    cout << " Enter size of an array: ";
    cin >> s;

    cout << "Enter entries: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> *arr[i][j];
            cout << endl;
        }
        cout << endl;
    }

    *arr[0][0] = (*arr[0][0] * *arr[0][0]) + (*arr[0][1] * *arr[1][0]);
    *arr[0][1] = (*arr[0][0] * *arr[0][1]) + (*arr[0][1] * *arr[1][1]);

    *arr[1][0] = (*arr[1][0] * *arr[0][0]) + (*arr[1][1] * *arr[0][1]);
    *arr[1][1] = (*arr[1][0] * *arr[0][1]) + (*arr[1][1] * *arr[1][1]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Result: ";
            cout << *arr[i][j];
        }
    }



}


int main()

{
    int** arr[2][2] = {};
    
    int size =2 ;
    MatrixMultiplication((int*(*)[2])arr, size);
   

    return 0;
}
