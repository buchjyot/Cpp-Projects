#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    int N,sortingAlgoInput;

    // Which sorting algorithm user wants to test?
    cout << "1) Bubble Sort: " << endl;
    cout << "2) Insertion Sort: " << endl;
    cout << "3) Selection Sort: " << endl;
    cout << "Select sorting algorithm: ";
    cin  >> sortingAlgoInput;

    // How many numbers does the user want to sort?
    cout << "Enter the length of array: ";
    cin >> N;

    // Allocate memory
    int i,j,temp,input[N];

    // Get N numbers and store it into an array
    for(i=0;i<N;i++)
    {
        cin >> input[i];
    }

    // Switch case statements
    switch(sortingAlgoInput)
    {
        // Bubble Sorting Algorithm
        case 1:
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
        break;


        // Insertion Sort
        case 2:
            for(i=0;i<N;i++)
            {
                j = i;
                while(j>0)
                {
                    if(input[j-1]>input[j])
                    {
                        temp = input[j-1];
                        input[j-1] = input[j];
                        input[j] = temp;
                    }
                    j--;
                }
            }
        break;

        // Selection Sort
        case 3:
            int smallest;
            for(i=0;i<N-1;i++)
            {
                smallest = i;
                for(j=i+1;j<N;j++)
                {
                    if(input[j]<input[smallest])
                        smallest = j;
                }

                if(smallest!=i)
                {
                    temp = input[i];
                    input[i] = input[smallest];
                    input[smallest]= temp;
                }
            }
        break;

        default:
            cout << "Invalid option!" << endl;
    }

    // Display Sorted Array
    for(i=0;i<N;i++)
    {
        cout << input[i] << " ";
    }

    return 0;
}
