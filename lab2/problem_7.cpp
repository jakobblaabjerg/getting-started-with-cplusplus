#include <iostream>
using namespace std;



int stringLength(char * str){

    char current = str[0]; 
    int size = 0;
    for(int i = 0; current != '\0'; current = str[++i]) {
        ++size;
    }
    return size;
}

void swapIntegers(int &x, int &y) {
    int placeHolder;
    placeHolder = x;
    x = y;
    y = placeHolder;


}



void swapIntegers2(int *a, int *b) {

    int placeHolder = *b;
    *b = *a;
    *a = placeHolder;

}


void swapPointers(int **ptr1, int **ptr2) {

    int * placeHolder = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = placeHolder;

}



int main(){
    //char myString[] = "hello";
    char * str = "hello";
    cout << stringLength(str) << endl;

    int a = 3;
    int b = 5;





    //swapIntegers2(&a, &b);

    int* ptr1 = &a, * ptr2 = &b;
    swapPointers(&ptr1, &ptr2);




    cout << "a is now: " << a << endl;
    cout << "and b is now: " << b << endl;

    cout << "ptr1 is now: " << *ptr1 << endl;
    cout << "and ptr2 is now: " << *ptr2 << endl;



    char *oddOrEven = "Never odd or even ";

    // 1
    char *nthCharPtr = &oddOrEven[5];
    
    
    cout << "The current value is: " << *nthCharPtr << endl;

    // 2
    nthCharPtr = nthCharPtr-2;

    // 3
    cout << "The current value is: " << *nthCharPtr << endl;

    // 4
    char ** pointerPtr = &nthCharPtr;
    
    // 5
    cout << "The current value of pointerPtr is: " << pointerPtr << endl;

    // 6 
    cout << "The value pointed to by nthCharPtr using pointerPtr is: " << **pointerPtr << endl;


    // 7 
    nthCharPtr = nthCharPtr+1;
    cout << "The current value is: " << *nthCharPtr << endl;


    //8
    cout << "The current value is: " << nthCharPtr - oddOrEven << endl;
    // cout << *b << endl;

}