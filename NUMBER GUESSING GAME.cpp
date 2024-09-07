//# CODSOFT
//C++ Internship Tasks
#include <iostream>
#include <cmath>
using namespace std;
class ran{
public:
    int r;
    ran(){
        srand(time(nullptr));
        r=rand();
        cout<<"I have generated a random number.\n";
        cout<<"Can you guess what it is?\n";
    }
};
int main(){
    ran x;
    while(true){
        cout<<"Enter your guess: ";
        int guess;
        cin>>guess;
        if(guess>x.r)
            cout<<"To high! Try again.\n";
        else if(guess<x.r)
            cout<<"To low! Try again.\n";
        else 
            cout<<"congratulations! You guessed the correct number: "
                <<x.r<<'\n';
    }
    return 0;
};
