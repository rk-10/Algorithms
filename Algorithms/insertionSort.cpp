//
//  insertionSort.cpp
//  Algorithms
//
//  Created by Rohan Khaneja on 30/08/18.
//  Copyright © 2018 Rohan Khaneja. All rights reserved.
//

#include <stdio.h>
#include <iostream>

void insertionSort(int arr[], int size, bool asc) {
    for(int i = 0; i < size; i++){
        std::cout << arr[i];
    }
    
    int key, j;
    for(int i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        //inserting the key
        if(asc == true) {
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j--;
            }
        } else {
            while(j >= 0 && arr[j] < key){
                arr[j + 1] = arr[j];
                j--;
            }
        }
        arr[j + 1] = key;
    }
    
    std::cout << "\n";
    
    for(int i = 0; i < size; i++){
        std::cout << arr[i];
    }
}


int main(int argc, const char * argv[]) {
    int ar[] = {1,7,2,5,4,3,6};
    //Ascending order
    insertionSort(ar, 7, 1);
    
    std::cout << "\n";
    
    //Descending order
    insertionSort(ar, 7, 0);
    
    return 0;
}


