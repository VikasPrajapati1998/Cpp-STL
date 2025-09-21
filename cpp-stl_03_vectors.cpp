#include <bits/stdc++.h>

using namespace std;

void print_vector(vector<int> v){
    cout << "[";
    for(int i=0; i<v.size(); i++){
        cout << v[i];
        if(i+1 != v.size()){cout << ", ";}
    }
    cout << "]" << endl;
}

int main() {
    // array
    int arr[10];

    // vector
    vector<int> v;
    int n, x;
    cout << "Enter the size of vector: "; cin >> n;
    for(int i=0; i<n; i++){
        x = 0;
        cout << "Enter " << i+1 << " Value: ";
        cin >> x;
        v.push_back(x);
    }

    cout << "Size of Vector: " << v.size() << endl;
    print_vector(v);
    

    return 0;
}
