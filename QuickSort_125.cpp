#include <iostream>
using namespace std;


int arr[20];                            //array integers to hold values
int cmp_count = 0;                      //
int mov_count = 0;                      //number of data movement
int n;

void input() {
    while (true)
    {
        cout << "Masukan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------" << endl;
    cout << "\nEnter Array Element";
    cout << "\n-------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

//swaps the element st index x with the element at index y
void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high)


int main()
{
    std::cout << "Hello World!\n";
}

