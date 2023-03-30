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
    }

}


int main()
{
    std::cout << "Hello World!\n";
}

