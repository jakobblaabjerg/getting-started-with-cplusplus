# include <iostream>
using namespace std;



int main()
{
    int n;
    const char *msg = "Hello, World!";
    cout << "Enter a nonnegative integer: " << endl;
    cin >> n; 

    cout << "\nFor loop:\n" << endl;

    for(int i=0; i < n; ++i)
    {
        cout << msg << endl;
    }


    cout << "\nWhile loop:\n" << endl;
    int i = 0; 
    while(i<n)
    {
        cout << msg << endl;
        ++i;
    }


    cout << "\nDo...while loop:\n" << endl;
    i = 0;
    if(n>0){
        do 
        {
            cout << msg << endl; 
            ++i;
        } while(i<n);
    }
 
    return 0;
}