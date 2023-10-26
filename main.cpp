//
//  main.cpp
//  P9-2
//
//  Created by Jakob Hammond on 10/26/23.
//

#include <iostream>
using namespace std;

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);
int main(void){
    int values[6];
    int size = 6;
    //take user input
    for(int i = 0; i < size; i++){
        cout << "Enter integer #" << i << ": ";
        cin >> values[i];
    }
    //outputs
    if(isSortedIncreasing(values, size)) cout << "The data are increasing." << endl;
    else cout << "The data are not increasing." << endl;
    if(isSortedDecreasing(values, size)) cout << "The data are decreasing." << endl;
    else cout << "The data are not decreasing." << endl;
    if(hasAdjacentDuplicates(values, size)) cout << "The data has adjacent duplicates." << endl;
    else cout << "The data does not have adjacent duplicates." << endl;
    if(hasDuplicates(values, size)) cout << "The data has duplicates." << endl;
    else cout << "The data does not have duplicates.";
    return 0;
    
    
}

bool isSortedIncreasing(int values[], int size){
    bool inc = true;
    for(int i = 1; i < size; i++){
        if(values[i] < values[i - 1]) inc = false;
    }
    return inc;
}

bool isSortedDecreasing(int values[], int size){
    bool dec = true;
    for(int i = 1; i < size; i++){
        if(values[i] > values[i - 1]) dec = false;
    }
    return dec;
}

bool hasAdjacentDuplicates(int values[], int size){
    bool adjacentVal = false;
    for(int i = 0; i < size; i++){
        if(values[i] == values[i + 1]) adjacentVal = true;
    }
    return adjacentVal;
}

bool hasDuplicates(int values[], int size){
    bool duplicates = false;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(values[i] == values[j]) duplicates = true;
        }
    }
    return duplicates;
}
