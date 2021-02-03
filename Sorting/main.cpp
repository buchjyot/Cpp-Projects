#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    int N;

    // How many numbers does the user want to sort?
    cout << "Enter Number: ";
    cin >> N;

    // Allocate memory
    int i,j,temp,input[N];

    // Get N numbers and store it into an array
    for(i=0;i<N;i++)
    {
        cin >> input[i];
    }

    // Bubble Sorting Algorithm
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(input[i]>input[j])
            {
                temp = input[j];
                input[j] = input[i];
                input[i] = temp;
            }
        }
    }

    // Display Sorted Array
    for(i=0;i<N;i++)
    {
        cout << input[i] << " ";
    }

    return 0;
}
