#include <iostream> 
using namespace std;

void flip(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if ((arr[i]) != (arr[i - 1]))
        {
            if (arr[i] != arr[0])
            
                cout << "from " << i << " to ";
            
            else
                cout << (i - 1) << endl;
            
        }




    }
    if (arr[n-1]!= arr[0])
    cout<< n-1;
}

int main()
{
    int arr[]{ 1,0,0,0,1,0,1,1,0 };
    flip(arr, 9);

}

// #include<iostream>
// using namespace std;

// void flip(int arr[], int n)
// {
//     int i{};
//     int a = arr[0];
//     for (i = 0; i < n; i++)
//     {
//         while (arr[i] == a && i<n)
//         {
//             i++;
//         }
//         cout << "From " << i << " to ";
//         while (arr[i] != a && i<n)
//         {
//             i++;
//         }
//         cout << i-1 << endl;
//     }
// }

// int main()
// {
//     int arr[]{1,0,1,1,1,0,0,1,0,1,0};
//     flip(arr,11);
// }