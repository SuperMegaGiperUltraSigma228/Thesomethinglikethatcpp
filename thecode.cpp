include <iostream>
using namespace std;
int main(){
    int n; cout << "GIMME IT TO ME GIMMI TO ME! "; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i<n; i++){
        cout << "NOW GIMMI ME THE NUMBER FOR THE " << i << "ELEMENT: "; cin arr[i];
    }
    int m;
    cout << "NOW GIVE ME THE NUMBER! "; cin >> m;
    for (int i = 0; i<n; i++){
        arr[i]*=m;
    }
    cout << "HAHAHHAHAHAA!" << endl << "YOUR ARRAY IS CORRUPTED!";
    for (int i = 0; i < n; i++){
        cout << arr[i];
    }
    delete[] arr;
    arr = nullptr;

}