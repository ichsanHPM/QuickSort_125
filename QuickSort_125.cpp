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
{
    int pivot, i, j;
    if (low > high)                             //Langkah algoritma no 1
        return;

    //partition the list into two parts :
    //one containing elements less that or equal to pivot
    //outher conntainning

    pivot = arr[low];                           ////Langkah algoritma no 2

    i = low + 1;                                //Langkah algoritma no 3
    j = high;                                   //Langkah algoritma no 4


    while (i <= j)                              //Langkah algoritma no 10
    {
        //search for an elements greather than pivot
        while ((arr[i] <= pivot) && (j <= high))        //langkah algoritma no 5
        {
            i++;                                       //langkah algoritma no 6
            cmp_count++;
        }
        cmp_count++;

        while ((arr[j] > pivot) && (low))
        {
            j--;
            cmp_count++;
        }
        cmp_count++;

        if (i < j)
        {
            swap(i, j);
            mov_count++;
        }
    }
    if (low < j)
    {
        swap(low, j);
        mov_count++;
    }
    q_short(low, j);
    q_short(j + 1, high);
}

void display()
{
    cout << "/n---------------" << endl;
    cout << "sorted array" << endl;
    cout << "-----------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "n\nNumber of comparasion: " << cmp_count << endl;
    cout << "Number of data movements" << mov_count << endl;
}

int main()
{
    input();
    q_short(0, n - 1);
    display();
    system("pause");

    return 0;
}

