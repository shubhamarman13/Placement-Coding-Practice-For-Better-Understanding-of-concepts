#include <iostream>
using namespace std;
int main()
{
    int N;
    int diag1 = 0, diag2 = 0;
    cout << "For the NxN Matrix \nEnter the value of N " << endl;
    cin >> N;

    int arr[N][N];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                diag1 = diag1 + arr[i][j];
            }
            if ((i + j) == (N - 1))
            {

                diag2 = diag2 + arr[i][j];
            }
        }
    }

    cout << "The Sum of Diagonal 1 is : " << diag1 << endl;
    cout << "The Sum of Diagonal 2 is : " << diag2 << endl;
}
