#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

std::vector<int> leggiInput() {

    int len,val;
    std::cin >> len;

    for( int i = 0 ; i < len ; ++i ) {
        std::cin >> val;
        arr.push_back(val);
    }

    return arr;
}

int somma(vector<int> &arr){
    int somma = 0;

    for(int i = 0; i < arr.size(); ++i)
        somma += arr.at(i);
    return somma;
}

int prodotto(vector<int> &arr){
    int prod = 1;

    for(int i = 0; i < arr.size(); ++i)
        prod *= arr.at(i);
    return prod;
}

void stampa(vector<int> &arr){
    for(int i = 0; i < arr.size(); ++i)
        cout<<arr[i]<<‘ ‘;
    cout<<endl;
}


int main() {
vector<int> arr = leggiInput();
cout<<somma(arr)<<endl;
cout<<prodotto(arr)<<endl;
sort(arr.begin(), arr.end());
stampa(arr);
return 0; }
