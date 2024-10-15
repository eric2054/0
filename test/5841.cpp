#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[6],total=0;
    for (int i = 0; i < 6; i++)
        cin >> Score[i];
    total=Score[0]+Score[1]+Score[2]+Score[3]+Score[4]+Score[5];
    cout<<total;
}