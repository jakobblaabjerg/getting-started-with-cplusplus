#include <iostream >
using namespace std;



// int main ()
// {
// short number ;
// cout << " Enter a number : ";
// cin >> number ;

// //int sign(number<0 ? -1 : 1);
// //number *= sign;

// if(number < 0)
// {
//     cout << "Factorial is not defined for negative numbers.\n";
//     return 1;
// }

// cout << "The factorial of " << number << " is ";

// long long accumulator = 1;
// for (; number > 0; accumulator *= number --);
// cout << accumulator << ".\n";
// //cout << sign*accumulator << ".\n";

// return 0;
// }


int main ()
{
short number;
int result;

cout << " Enter a number : ";
cin >> number ;

if(number < 0)
{
    cout << "Factorial is not defined for negative numbers.\n";
    return 1;
}

switch(number)

{
case 0: 
case 1: result = 1; break;
case 2: result = 2; break;
case 3: result = 6; break;
case 4: result = 24; break;
case 5: result = 120; break;
case 6: result = 720; break;
case 7: result = 5040; break;
case 8: result = 40320; break;
case 9: result = 362880; break;
case 10: result = 3628800; break;
default:
    cout << "This program only supports inputs from 0 to 10.\n";
    return 1;
}
cout << "The factorial of " << number << " is ";
cout << result << ".\n";
return 0;
}