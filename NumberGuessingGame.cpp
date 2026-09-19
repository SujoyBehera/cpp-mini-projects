#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"====Welcome to the Number Guessing Game!===="<<endl;
    cout<<"Guess a Number between 1 and 100"<<endl;
    int attempts = 0;
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    while(guess != secretNumber){
        cout<<"Enter your guess:";
        cin>>guess;
        attempts++;
        if(guess < secretNumber){
            cout<<"Too low!! Try again."<<endl;
        }
        else if ( guess > secretNumber){
            cout<<"Too high!! Try again"<<endl;
        }
        else{
            cout<<"CONGRATULATIONS!! you guessed the right number"<<endl;
            cout<<"you took "<<attempts<<" attempts"<<endl;
        }
    }

}