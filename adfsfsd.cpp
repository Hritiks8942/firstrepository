#include<iostream>
using namespace std;
int main() {
    // int arr[2];
    // for(int i=0; i<2; i++){
    //     cin >> arr[i];
    // }
    int a,b;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(i<=9 and i>=1){
            if(i==1){
                cout << "one" << endl;
            }else if(i==2){
                cout << "two" << endl;
            }else if(i==3){
                cout << "three" << endl;
            }else if(i==4){
                cout << "four" << endl;
            }else if(i==5){
                cout << "five" << endl;
            }else if(i==6){
                cout << "six" << endl;
            }else if(i==7){
                cout << "seven" << endl;
            }else if(i==8){
                cout << "eight" << endl;
            }else if(i==9){
                cout << "nine" << endl;
            }
        }else if(i>9){
            if(i%2==0){
                cout << "even" << endl;
            }else cout << "odd" << endl;
        }
        
    }
    return 0;
}