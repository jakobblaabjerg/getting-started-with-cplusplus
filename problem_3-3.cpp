# include <iostream>
using namespace std;


// check is num is prime
bool isPrime(int num) {
    if(num<=1) {return false;}
    for(int i = 2; i*i<=num; ++i)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main(){
    // read a number N from the user
    int N;
    cout << "Enter a number:" << endl;
    cin >> N;

    // find the first N primes 
    int counter = 0;
    int num = 0;
    while(counter<N)
    {
        ++num;
        if(num==2 || num % 2 != 0)
        {
            if(isPrime(num))
            {
                cout << num << endl;
                counter +=1;
            }
        }
    }
}