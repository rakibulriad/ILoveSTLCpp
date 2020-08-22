/* This sample will show you how to implement
    Vectors in C++
    Level: 01
    Author: Md. Rakibul Hassan (Riad)
    */

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> A)
{
    // Optimized printing (less coding)
    for (int i : A)
        cout << i << " ";

    // Regular printing (very common)
    // .............................
    // for(int i=0; i != A.end(); i++)
    //    cout << A[i] << " ";
    // .............................
}

int main()
{
    // Vector Initialization
    // vector<int> A = {1, 2, 33, 4, 21, 10}; or,
    vector<int> A;
    A = {1, 2, 33, 4, 21, 10};

    // Add an element at the end
    A.push_back(4);
    A.push_back(-3);

    // New Vector after Adding: A = {1, 2, 33, 4, 21, 10, 4, -3};
    // Printing the vector
    printVector(A);

    // Sorting a vector
}
