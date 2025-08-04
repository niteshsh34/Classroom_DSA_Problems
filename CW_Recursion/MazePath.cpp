#include<iostream>
using namespace std;
//We can go only right and down
int maze(int sr, int sc, int er, int ec){
if(sr>er || sc>ec) return 0;
if(sr==er && sc==ec) return 1;
int rightways = maze(sr,sc+1,er,ec);
int downway = maze(sr+1,sc,er,ec);
int totalways = rightways + downway;
return totalways;
}
void printpath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int main(){
    printpath(1,1,3,3,"");
return 0;
}