#include <iostream> 
#include <stdlib.h>

using namespace std; 

char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}}; //creating a 2 dimenional array for our tik tac toe board 
int choice;
int choice2;  


void board () {
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<arr[0][0]<<"  | "<<arr[0][1]<<"   |  "<<arr[0][2]<< endl; 
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<arr[1][0]<<"  | "<<arr[1][1]<<"   |  "<<arr[1][2]<< endl; 
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<arr[2][0]<<"  | "<<arr[2][1]<<"   |  "<<arr[2][2]<< endl;
    cout<<"\t\t     |     |     "<<endl;

}

void game1() {
    cin >> choice; 

    if(choice == 1 and arr[0][0] != 'O') {
        arr[0][0] = 'X'; 
    }
    if(choice == 2 and arr[0][1] != 'O') {
        arr[0][1] = 'X';
    }
    if(choice == 3 and arr[0][2] != 'O') {
        arr[0][2] = 'X';
    }
    if(choice == 4 and arr[1][0] != 'O') {
        arr[1][0] = 'X';
    }
    if(choice == 5 and arr[1][1] != 'O') {
        arr[1][1] = 'X';
    }
    if(choice == 6 and arr[1][2] != 'O') {
        arr[1][2] = 'X';
    }
    if(choice == 7 and arr[2][0] != 'O') {
        arr[2][0] = 'X';
    }
    if(choice == 9 and arr[2][1] != 'O') {
        arr[2][1] = 'X';
    }
    if(choice == 9 and arr[2][2] != 'O') {
        arr[2][2] = 'X';
    } 

}

void game2() {
    cin >> choice2; 

    if(choice2 == 1 and arr[0][0] != 'X') {
        arr[0][0] = 'O'; 
    }
    if(choice2 == 2 and arr[0][1] != 'X') {
        arr[0][1] = 'O';
    }
    if(choice2 == 3 and arr[0][2] != 'X') {
        arr[0][2] = 'O';
    }
    if(choice2 == 4 and arr[1][0] != 'X') {
        arr[1][0] = 'O';
    }
    if(choice2 == 5 and arr[1][1] != 'X') {
        arr[1][1] = 'O';
    }
    if(choice2 == 6 and arr[1][2] != 'X') {
        arr[1][2] = 'O';
    }
    if(choice2 == 7 and arr[2][0] != 'X') {
        arr[2][0] = 'O';
    }
    if(choice2 == 8 and arr[2][1] != 'X') {
        arr[2][1] = 'O';
    }
    if(choice2 == 9 and arr[2][2] != 'X') {
        arr[2][2] = 'O';
    } 

}

bool gameover() {
    int q; 
    for(int i = 0; i < 3; i++) { //checking for rows 
        if(arr[i][0] == arr[i][1] and arr[i][0] == arr[i][2]) {
            if(arr[i][0] == 'X') {
                cout << "X has WON THE GAME"; 
                return true; 
            }
            else if(arr[i][0] == 'O') {
                cout << "O has WON THE GAME";
                return true; 
            }
        }

        if(arr[0][i] == arr[1][i] and arr[0][i]== arr[2][i]) { //checking for columns 
            if(arr[0][i] == 'X') {
                cout << "X has WON THE GAME"<< endl; 
                return true; 
            }
            else if(arr[0][i] == 'O') {
                cout << "O has WON THE GAME"<< endl; 
                return true; 
            }
        }
    }

         if(arr[0][0] == arr[1][1] and arr[0][0] == arr[2][2]) { //checking for diagonals1  
            if(arr[0][0] == 'X') {
                cout << "X has WON THE GAME"<< endl; 
                return true; 
            }
            else if(arr[0][0] == 'O') {
                cout << "O has WON THE GAME"<< endl; 
                return true; 
            }
        }
        if(arr[2][0] == arr[1][1] and arr[2][0] == arr[0][2]) { //checking for diagonals1  
            if(arr[2][0] == 'X') {
                cout << "X has WON THE GAME" << endl; 
                return true; 
            }
            else if(arr[2][0] == 'O') {
                cout << "O has WON THE GAME"<< endl; 
                return true; 
            }
        }  
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            if(arr[x][y] == 'X' or arr[x][y] == 'O') {
                q = q+1; 
            }

        }    
    }
    if(q == 9) {
        cout << "IT IS A TIE";
        return true; 
    }

    else{
        return false; 
    }
    
}

int main () {
    bool turn = 1; 
    cout << endl; 
    cout << "\tWelcome to your personal TIK TAC TOE GAME!!! " << endl; 
    cout << "\t\tThis is a 2 PLAYER GAME " << endl; 
    cout << endl << endl; 
    board();
    
while(gameover() == false) {
        if(turn == 1){
            game1();
            turn = 0;
            board();
        }
        else{
            game2();
            turn = 1;
            board();
        } 
    }
    return 0;  

    
}
