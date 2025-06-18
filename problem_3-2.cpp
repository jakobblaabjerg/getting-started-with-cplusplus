# include <iostream>
using namespace std;


int main(){

    double mean = 0; 
    int min, max, range, N, number;

    cout << "Enter the number of integers in the list: " << endl;
    cin >> N;

    // handle first number seperately
    cout << "Enter number 1:" << endl;
    cin >> number;

    min = number;
    max = number;
    mean += number;

    for(int i=1; i<N; ++i)
    {       
        cout << "Enter number " << i+1 << ":" << endl;
        cin >> number;

        mean += number;

        if(number<min)
        {min = number;}

        if(number>max)
        {max = number;}

    }
    
    range = max - min;
    mean = mean/N; 

    
    cout << "Mean: " << mean << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Range: " << range << endl;

    return 0;
}

