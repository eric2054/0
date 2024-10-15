#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[4][5];
    float ans;
    
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cin >> Score[i][j];
    
   for(int i=0;i<4;i++){
       int sum=0;
       for(int j=0;j<5;j++){
           sum+=Score[i][j];
       }
       ans=sum/5.0;
       cout<<ans<<" ";
   }
}