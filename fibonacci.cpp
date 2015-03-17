#include<iostream>


using namespace std;

int one, zero;

int fibonacci(int n){
    if(n == 0){
        //cout << "0";
        zero ++;
        return 0;
    }
    else if(n == 1){
        //cout << "1";
        one ++;
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void){


    int t, n;
    int temp;
    cin >> t;

    for(int i=0; i<t; i++){
        n = -1;
        one = 0;
        zero = 0;

        cin >> n;
        
        temp = fibonacci(n-1);

        cout << temp << endl;

    }

    return 0;

}
