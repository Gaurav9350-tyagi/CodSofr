//Tic Tac Toe 
#include<iostream>
using namespace std;

void board(char draw[3][3]){
    cout<<"-------------\n";
    for(int i=0;i<3;i++){
        cout<<"|";
        for(int j=0;j<3;j++){
            cout<< draw[i][j]<<"|";
        }
        cout<<"\n-------------\n";
    }
}

bool win(char draw[3][3],char player){

    for(int i=0;i<3;i++){
        if (draw[i][0] == player && draw[i][1] == player && draw[i][2] == player)
            return true;
        if (draw[0][i] == player && draw[1][i] == player && draw[2][i] == player)
            return true;
    }
    if (draw[0][0] == player && draw[1][1] == player && draw[2][2] == player)
        return true;
    if (draw[0][2] == player && draw[1][1] == player && draw[2][0] == player)
        return true;
    return false;
}

int main(){
    char draw[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char player='X';
    int row,col;
    bool over= false;

    while (!over){
        board(draw);
        cout << "Player " << player << ", enter row and column (0, 1, or 2): ";
        cin >> row >> col;

        if (draw[row][col] == ' ') {
            draw[row][col] = player;
            if (win(draw, player)) {
                board(draw);
                cout << "Player " << player << " wins!\n";
                over = true;
            } else {
                player = (player == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Error!!\n";
        }
        bool tie = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (draw[i][j] == ' ') {
                    tie = false;
                    break;
                }
            }
        }
        if (tie) {
            board(draw);
            cout << "It's a tie!\n";
            over = true;
        }
    }
        
    

    return 0;

}