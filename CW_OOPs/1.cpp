#include<iostream>
using namespace std;
class Player(){
    public:
    int name;
    int health;
    void showhealth(){
        cout<<"Health is"<<health;
    }
    void showscore(){
        cout<<score;
    }
};
int main(){
    Player amit;
    amit.score = 10;
}