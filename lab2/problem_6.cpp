#include <iostream>
using namespace std;


void printArray(const int arr[], const int size){

    for(int i=0; i<size; ++i){
        i < size-1 ? cout << arr[i] << ", " : cout << arr[i] << endl;
    }
}

void reverseArray(int arr[], const int size){

    int placeHolder;

    for(int i=0; i<size/2; ++i){
        placeHolder = arr[i];
        arr[i] = arr[size-(i+1)];
        arr[size-(i+1)] = placeHolder;
    }
}



int const WIDTH = 2;
int const LENGTH = 4;

void transpose(const int input[][LENGTH], int output[][WIDTH]){

    for(int i=0; i<WIDTH; ++i){
        for(int j=0; j<LENGTH; ++j){
            output[j][i] = input[i][j];
        }
    }
}


void printMatrixInput(const int input[WIDTH][LENGTH]) {
    for(int i=0; i<WIDTH; ++i){
        for(int j=0; j<LENGTH; ++j){
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrixOutput(const int output[LENGTH][WIDTH]) {
    for(int i=0; i<LENGTH; ++i){
        for(int j=0; j<WIDTH; ++j){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}


void reverseArray2(int arr[], const int size){

    int placeHolder;

    for(int i=0; i<size/2; ++i){
        placeHolder = *(arr+i);
        *(arr+i) = *(arr+size-(i+1));
        *(arr+size-(i+1)) = placeHolder;
    }
}


int main(){
    int n = 4;
    int arr[] = {1, 2, 3, 4};
    printArray(arr, n);
    reverseArray2(arr, n);
    printArray(arr, n);


    int input[][LENGTH] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int output[LENGTH][WIDTH];
    transpose(input, output);

    printMatrixInput(input);
    printMatrixOutput(output);


}