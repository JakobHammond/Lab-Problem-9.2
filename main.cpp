//
//  main.cpp
//  P9-2
//
//  Created by Jakob Hammond on 10/26/23.
//

#include <iostream>
using namespace std;

int main(void){
    
}

bool isSortedIncreasing(int values[], int size){
    bool inc = true;
    for(int i = 1; i < size; i++){
        if(values[i] < values[i - 1]) inc = false;
    }
    return inc;
}

bool isSortedDec(int values[], int size){
    bool dec = true;
    for(int i = 1; i < size; i++){
        if(values[i] > values[i - 1]) dec = false;
    }
    return dec;
}

bool hasAdjecentDuplicates(int values[], int size){
    bool adjacentVal = false;
    for(int i = 0; i < size; i++){
        if(values[i] == values[i + 1]) adjacentVal = true;
    }
    return adjacentVal;
}

bool hasDuplicates(int values[], int size){
    bool dupe = false;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; i < size; j++){
            if(values[i] == values[j]) dupe = true;
        }
    }
    return dupe;
}
