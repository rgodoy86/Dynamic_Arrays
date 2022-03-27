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
    cout << "Unidimensional Dynamic Array" << endl;
    for (int r = 0; r < rows; ++r){
        cout << "array[" << r << "]: " << array[r] << endl;
    }
    cout << endl;
    
    // Deallocating
    delete [] array;
    array = NULL;

    // // Multidimensional Dynamic Array
    // Allocating
    int **table = new int*[rows];
    for (int r = 0; r < rows; ++r){
        table[r] = new int[columns];
    }
    
    // Assigning values to the array
    for(int r = 0; r < rows; ++r){
        for(int c=0; c < columns; ++c){
            table[r][c] = ((10 - (c + 1)) * 10) + c;
        }
    }
    // Reading and printing the values from the array
    cout << "Multidimensional Dynamic Array" << endl;
    for(int c = 0; c < columns; ++c){
        for(int r=0; r < rows; ++r){
            cout << "Table[" << r << "][" << c << "]: " << table[r][c] << endl;
        }
    }
    cout << endl;
    
    // Deallocating
    for(int r=0; r > rows; ++r){
        delete [] table[r];
        table[r] = NULL;
    }
    delete [] table;
    table = NULL;
    
    
    
    return 0;
}
