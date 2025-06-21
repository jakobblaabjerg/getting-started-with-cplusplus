#include <iostream>
#include <cmath>

using namespace std;


double computePi(const int n){

    srand(time(0));


    int counter = 0;

    for(int i=0; i<n; ++i){
        double x = rand() / (double)RAND_MAX;
        double y = rand() / (double)RAND_MAX;
        if(sqrt(x*x+y*y) <=1){
            ++counter;
        }
    }

    double estimate = 4*counter/static_cast<double>(n);

    return estimate;
}



int main(){

    int n = 5000000;
    double estimate = computePi(n);
    cout << "Pi has been estimated to: " << estimate << endl;

    // cout << x << endl;
    // cout << y << endl;




}