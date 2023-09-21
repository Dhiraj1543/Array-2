// Q.no 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={5,2,1,7,3,9};
//     int x;
//     cin>>x;
//     int count=0;
//     for (int i = 0; i <6; i++)
//     {
//         if (arr[i]>x)
//         {
//             count++;
//         }
//     }
//     cout<<count;
// }

// Q.no 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {4, 5, 4, 4, 81, 20};
//     int max = arr[0];
//     int smax = arr[0];
//     int tmax = arr[0];
//     for (int i = 0; i < 6; i++)
//     {
//         if (max < arr[i])
//         {
//             tmax = smax;
//             smax = max;
//             max = arr[i];
//         }
//         else if (smax < arr[i])
//         {
//             tmax = smax;
//             smax = arr[i];
//         }
//         else if
//             (tmax <  arr[i])
//             {
//                 tmax = arr[i];
//             }
//     }
//     cout << "The Three Maximum elements in the array are "<<max<<","<< smax<<","<<tmax;
//     return 0;
// }

// Q.no 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {1, 2, 8, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             flag = true;
//             cout << "Array is Not Sorted";
//             break;
//         }
//     }
//     if (flag == false)
//     {
//         cout << "Array is Sorted";
//     }
//     return 0;
// }

// Q.no 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sume = 0;
//     int sumo = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             sume = sume + arr[i];
//         }
//         else if (arr[i] % 2 != 0)
//         {
//             sumo = sumo + arr[i];
//         }
//     }
//     cout << "The Difference betwwn even and odd indices is :" << (sume - sumo);
//     return 0;
// }

// Q.no 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             arr[i] = arr[i] + 10;
//         }
//         else if (arr[i] % 2 != 0)
//         {
//             arr[i] = 2 * arr[i];
//         }
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Q.no 5
//#include <iostream>
// using namespace std;
// int main()
// {
//     int arr[9] = {1, 2, 1, 4, 4, 3, 4, 5, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = true;
//         for (int j = 0; j < n; j++)
//         {
//             if (j == i)
//             continue;
//             if (arr[i] == arr[j])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag == true)
//         {
//             cout<<arr[i];
//             break;
//         }
//     }
// }

// Q.no 6
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, n)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}

//Q.no 7
Find the error.

double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}

Solution:- The error in your code is in the way we are calling the getAverage function and passing the arguments.

