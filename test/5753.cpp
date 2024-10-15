#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int N, H;
    cin >> N >> H;
    vector<vector<int>> arr(N);
    for (int i=0;i<N;i++) {
        int K;
        cin >> K;
        arr[i].resize(K);
        for (int j=0;j<K;j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<H;i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    
    return 0;
}
