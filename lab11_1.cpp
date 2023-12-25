#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.\n";
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cin.get();
    cin.get();
    cin.get();
    int x = rand()%9;
    cout << "\nYou will get " << grade[x] << " in this 261102.";
}