#include <iostream>

void rotateLeft(const int src[], int dest[], int size, int k);

int main(void) 
{
    const int SIZE = 7;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int newList[SIZE];
    rotateLeft(list, newList, SIZE, 5);
    
    // Print the rotated array
    for (int i : newList) 
    {
        std::cout << i << ' ';
    }
}

void rotateLeft(const int src[], int dest[], int size, int k)
{
    int place = 0;
    for (int i = k; i < size; i++)
    {
        dest[place] = src[i];
        place++;
    }

    int x = k;
    for (int j = 0; j < k; j++)
    {
        dest[size - x] = src[j];
        x--;
    }

}