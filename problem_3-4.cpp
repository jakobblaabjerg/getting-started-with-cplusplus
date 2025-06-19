# include <iostream>
using namespace std;

int main(){

    int N;
    int result;

    while(true){

        cout << "Enter an integer:" << endl; 
        cin >> N;

        //result = N % 5 == 0 && N>= 0 ? N/5 : -1;
        
        if(N % 5 == 0 && N>= 0)
        {
            result = N/5;
            cout << result << endl;
            continue;
        }

        else if(N == -1 || N<0)
        {
            cout << "Goodbye" << endl;
            break;
        }
        
        continue;
    }   
}