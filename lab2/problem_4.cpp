# include <iostream>
using namespace std;


int sumIntegers(const int a, const int b) {
    return a+b;
}

double sumDoubles(const double a, const double b) {
    return a+b;
}


int sumIntegers1(const int a, const int b, const int c) {
    return a+b+c;
}


int sumIntegers2(const int a, const int b, const int c, const int d) {
    return a+b+c+d;
}


int sumIntegers3(const int a, const int b, const int c = 0, const int d = 0) {
    return a+b+c+d;
}


int singleSum(const int N, const int numbers[]) {
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += numbers[i]; 
    }
    return sum;
}



int recursiveSum(const int N, const int numbers[]) {

    if(N == 1){
        return *numbers;
    }

    else{
        return *numbers + recursiveSum(N-1, numbers+1);
    }

}





int main() {
    //int a = 1;
    //double b = 10.0;

    cout << sumIntegers(1, 10.0) << endl;
    cout << sumDoubles(1, 10.0) << endl;
    //cout << sumIntegers3(1, 2, 3, 4) << endl;
    cout << sumIntegers3(1, 2, 3) << endl;
    //cout << sumIntegers3(1, 2) << endl;
    
    const int N = 5;
    int arr[N] = {1, 2, 3, 4, 5};

    cout << singleSum(N, arr) << endl; 
    cout << recursiveSum(N, arr) << endl; 




}