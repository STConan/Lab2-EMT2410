////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Title                : Lab 2 "Min & Max of an array"                                                        //
//Author               : Wellington Verduga Macias                                                            //
//Version and Date     : V0.1 09/30/2022                                                                      //
//Copyright disclaimer :                                                                                      //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{

    float ArrayNumbers[5] = {2.6f, 10.6f, 7.8f, 4.4f, 5.5f}; //Set up of literal array of floats
    float ArrayUserNumbers[5]; //Set up array for User's numbers
    float MinNumber = ArrayNumbers[0]; //Container for the smallest number in the array
    float MaxNumber = ArrayNumbers[0]; //Container for the biggest number in the array
    float UserMin = ArrayUserNumbers[0]; //Container for User's smallest number in User's Array
    float UserMax = ArrayUserNumbers[0];
    int UserInput; //Container for User Input expected to be 0 or 9

    //Loop to check every number in the array
    for (int i=0; i < 5; i++)
    {
        if (ArrayNumbers[i] < MinNumber) //Compares the current number in the array against the number already stored in MinNumber
        {
            MinNumber = ArrayNumbers[i]; //If statement is true, replaces MinNumber for the number in the array
        }

        if (ArrayNumbers[i] > MaxNumber) //Compares the current number in the array against the number already stored in MaxNumber
        {
            MaxNumber = ArrayNumbers[i]; //If statement is true, replaces MaxNumber for the number in the array
        } 
    }
    
    cout << "Press 9 for the max number or 0 for the min number contained in my array.\n";
    cin >> UserInput;

    if (UserInput == 9)
    {
        cout << "The max number in my array is " << MaxNumber << ".\n";
    }
    else if (UserInput == 0)
    {
        cout << "The min number in my array is " << MinNumber << ".\n";
    }
    else
    {
        cout << "Please pick either 0 or 9 only.\n";
    }

    cout << "The program requires you to give it 5 decimal numbers.\n";

    for (int i=0; i < 5; i++)
    {
        cout << "Please, input your decimal number:\n";
        cin >> ArrayUserNumbers[i];
    }

    for (int i=0; i < 5; i++)
    {
        if (ArrayUserNumbers[i] < UserMin) //Compares the current number in the array against the number already stored in UserMin
        {
            UserMin = ArrayUserNumbers[i]; //If statement is true, replaces UserMin for the number in the array
        }

        if (ArrayUserNumbers[i] > UserMax) //Compares the current number in the array against the number already stored in UserMax
        {
            UserMax = ArrayUserNumbers[i]; //If statement is true, replaces UserMax for the number in the array
        } 
    }

    cout << "Press 9 for the max number or 0 for the min number contained in your array.\n";
    cin >> UserInput;

    if (UserInput == 9)
    {
        cout << "The max number in your array is " << UserMax << ".\n";
    }
    else if (UserInput == 0)
    {
        cout << "The min number in your array is " << UserMin << ".\n";
    }
    else
    {
        cout << "Please pick either 0 or 9 only.\n";
    }

    return 0;
}