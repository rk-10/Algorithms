//
//  selectionSort.cpp
//  Algorithms
//
//  Created by Rohan Khaneja on 20/09/18.
//  Copyright © 2018 Rohan Khaneja. All rights reserved.
//

#include <stdio.h>
#include <iostream>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size; i++){
        std::cout << arr[i];
    }
    
    int i,j,min_element;
    for(i = 1; i < size - 1; i++){
        min_element = i;
        // Find minimum element in the sub array
        for(j = i + 1; j < size; j++) {
            if(arr[j] < arr[min_element]) {
                min_element = j;
            }
        }
        //swap the minimum element with the first element in the sub array
        swap(&arr[min_element], &arr[i]);
    }
    
    std::cout << "\n";
    
    for(int i = 0; i < size; i++){
        std::cout << arr[i];
    }
}


int main(int argc, const char * argv[]) {
    int ar[] = {1,7,2,5,4,3,6};
    //Ascending order
    selectionSort(ar, 7);
    
    return 0;
}
