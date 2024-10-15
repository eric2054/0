#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[3][4][5];
    for (int k = 0; k < 3; k++)
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 5; j++)
                cin >> Score[k][i][j];
                
                
    int stu[4]={0};
    int Allsco[5]={0};
    cout<<"同學總成績：";
    for(int i=0;i<4;i++){
        for(int k=0;k<3;k++){
            for(int j=0;j<5;j++){
                stu[i]+=Score[k][i][j];
            }
        }
        cout<<stu[i]<<" ";    
    }
    
    cout<<"科目總成績：";
    for(int j=0;j<5;j++){
        for(int k=0;k<3;k++){
            for(int i=0;i<4;i++){
                Allsco[j]+=Score[k][i][j];
            }
        }
        cout<<Allsco[j]<<" ";   
    }
}