//
//  main.cpp
//  Dynamic_Arrays
//
//  Created by Raphael Godoy on 27.03.22.
//

#include <iostream>
#include <iostream>

using namespace std;

int main() {
    
    int rows = 5;
    int columns = 5;
    
    // // Unidimensional Dynamic Array
    // Allocating
    int * array = new int[rows];
    
    // Assigning values to the array
    for (int r = 0; r < rows; ++r){
        array[r] = (r + 1) * 10;
    }
    
    // Reading and printing the values from the array
    for (int r = 0; r < rows; ++r){
        cout << "array[" << r << "]: " << array[r] << endl;
    }
    
    // Deallocating
    delete [] array;
    array = NULL;

    // // Multidimensional Dynamic Array
    
    return 0;
}
