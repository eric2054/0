#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

const int rows = 8;
const int columns = 4;

void move(int* record, const int x, const int y){
    int dx = abs(record[0] - x);
    int dy = abs(record[1] - y);
    if (dx >= dy) {
        record[0] += (x > record[0]) ? 1 : -1;
    } else {
        record[1] += (y > record[1]) ? 1 : -1;
    }
}

bool same_line(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (x1 == x2 && x2 == x3) || 
           (y1 == y2 && y2 == y3) || 
           ((y2 - y1 == x2 - x1) && (y3 - y2 == x3 - x2)) || 
           ((y2 - y1 == -(x2 - x1)) && (y3 - y2 == -(x3 - x2)));
}

void Eliminate_Points(vector<vector<int> >& locate) {
    for (int i = 0; i < locate.size(); i++) {
        for (int j = i + 1; j < locate.size(); j++) {
            for (int k = j + 1; k < locate.size(); k++) {
                if (same_line(locate[i][0], locate[i][1], locate[j][0], locate[j][1], locate[k][0], locate[k][1])) {
                    locate.erase(locate.begin() + k);
                    k--;
                }
            }
        }
    }
}

string shape(vector<vector<int> >& locate){
    int size = locate.size();
    if (size == 1) return "point";
    if (size == 2) return "line";
    if (size == 3) return "triangle";
    if (size == 4) return "parallelogram";
    if (size == 5) return "pentagon";
    return "";
}

int main(){
    int record[2] = {};
    vector<vector<int> > locate;
    int input[2][2];

    cin >> record[0] >> record[1]; 
    locate.push_back({record[0], record[1]});

    for(int i = 0; i < 2 ; i++){
        cin >> input[i][0] >> input[i][1];
        move(record, input[i][0], input[i][1]);

        locate.push_back({record[0], record[1]});
        locate.push_back({input[i][0], input[i][1]});
    }

    Eliminate_Points(locate);
    string res = shape(locate);
    cout << res << endl;

    return 0;
}
