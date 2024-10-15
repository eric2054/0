#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i=0;i<N;i++) {
        cin>>arr[i];
    }
    int num;
    cin>>num;
    if (num==1){
        for (int i=N-1;i>=0;i--){
            if(arr[i]%2==1){
                cout<<arr[i]<<" ";
            }
        }
    } else if(num==2){
        for(int i=N-1;i>=0;i--){
            if(arr[i] % 2 == 0){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}
