//Task 1: Number Guessing Game

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void feedback(int  guess_no,int find_no){
    if(guess_no<find_no)
        cout<<"Too low! try again."<<endl;

    
    else if(guess_no>find_no)
        cout<<"Too high! try again."<<endl;
    
    else if(guess_no==find_no)
        cout<<"Congratulations!! You guessed it."<<endl;

}

bool game_play(){
    srand(time(0));
    int codeguess=rand()%1000+1; //Generating a random number between 1-1000
    int guess_no;
    char decision;
    cout<<"Welcome to Number Gueesing Game!!"<<endl;
    cout<<"Can you guess the number that I am thinking(between 1-1000)?"<<endl;
    cout<<"Try your luck! All the best"<<endl;

do{
cout<<"Guess the number: ";
cin>>guess_no;
if(cin.fail()){
    cin.clear();
    cin.ignore(1000000,'\n');
    cout<<"please enter a number: "<<endl;
    continue;
}

    feedback(guess_no,codeguess);

    if (guess_no == codeguess) {
            cout << "Do you want to play again [Y/N]? ";
            cin >> decision;
            if (decision == 'Y' || decision == 'y') {
                return true; 
            } else {
                cout << "See you next time!!" << endl;
                return false; // End game
            }
        }

    } while (true);
} 

int main(){

     do {
        bool continueGame = game_play();
        if (!continueGame) 
        break; // Exit 
    } while (true);

    return 0;
}

