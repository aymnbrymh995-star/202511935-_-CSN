#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;
    float average;

    // Input numbers
    cout  <<  "Enter 10 numbers:"  << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    // Calculate average
    average = sum / 10.0;

    // Display sum and average
    cout << "\nTotal Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    // Display numbers greater than average
    cout << "\nNumbers greater than average are:" << endl;

    for(int i = 0; i < 10; i++)
    {
        if(numbers[i] > average)
        {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
