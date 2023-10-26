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
