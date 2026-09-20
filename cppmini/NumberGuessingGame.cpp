#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"====Welcome to the Number Guessing Game!===="<<endl;
    srand(time(0));
    int secretNumber;
    int maxAttempts;
    int choice;
    cout<<"Choose a difficulty level:"<<endl;
    cout<<"1. Easy (unlimited attempts)"<<endl;
    cout<<"2. Medium (10 attempts)"<<endl;
    cout<<"3. Hard (7 attempts)"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            secretNumber = rand() % 50 + 1;
            cout<<"Select a number between 1 and 50;"<<endl;
            maxAttempts = - 1;
            break;
        case 2:
            secretNumber = rand() % 100 + 1;
            cout<<"Select a number between 1 and 100;"<<endl;
            maxAttempts = 10;
            break;
        case 3:
            secretNumber = rand() % 500 + 1;
            cout<<"Select a number between 1 and 500;"<<endl;
            maxAttempts = 7;
            break;
        default:
            cout<<"Invalid choice. exiting the game."<< endl;
            return 0;
    }
    int attempts = 0;
    int guess = 0;
    while(guess != secretNumber){
        if(maxAttempts != -1 && attempts >= maxAttempts){
            cout<<"you have reached the attempt limit. The secret number was "<<secretNumber<<endl;
            break;
        }
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