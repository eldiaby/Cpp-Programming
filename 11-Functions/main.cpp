#include <iostream>
using namespace std;

void print(int arr[], int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  print(arr, 5);
}

void print(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << endl;
}