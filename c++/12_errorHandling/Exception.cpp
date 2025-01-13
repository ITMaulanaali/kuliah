#include <iostream>
using namespace std;

int bagi(int a, int b){
    if(a==0 || b==0){
        throw "ada exception nol";
    }else{
        return a/b;
    }
}

int main(){

    try{
        cout << bagi(5,0) << endl;
    }catch(const char* e){
        cout << "ada exception: " << endl << endl << e << endl;
    }

    cin.get();
    return 0;
}