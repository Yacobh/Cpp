// Example program
#include <iostream>
#include <string>


void displayInstructions();
void showBoard(char board[]);
int getMove(char board[]); // return a move
bool checkWin(char board[]);
bool checkDraw(char board[]);


int main()
{
  int player1, player2;
  char board[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ' };
  displayInstructions();
  int game = 1;
  while (game == 1){
    std::cout<< "player 1 turn" << std:: endl;
    player1 = getMove(board);
    board[player1] ='x';
    showBoard(board);
    if ( checkWin(board) ) {
        std::cout<< "player 1 wins";
        game = 0;
    } else if (checkDraw(board) ) {
        std::cout<< "Game is draw";
        game = 0;
    } else {
        std::cout<< "player 2 turn" << std:: endl;
        player2 = getMove(board);
        board[player2] ='o';
        showBoard(board);
        if ( checkWin(board) ) {
            std::cout<< "player 2 wins!!!";
            game = 0;
        } else if (checkDraw(board) ) {
            std::cout<< "Game is draw";
            game = 0;
        }
    }
    if ( game == 0 ) {
        char answer;
        std::cout<< "You want to play another game" << std::endl;
        std::cin >> answer;
        if (answer == 'y' || answer == 'Y'){
            game = 1;
            for (int i = 0; i < 9; i++ ) board[i] = ' '; // initialize the board
        }
    }
  }
 
}


void displayInstructions(){
    std::cout << "This is a Tic-Tac-Toe game for two players" << std::endl;
}


void showBoard(char board[]){
    std::cout << std::endl;
    std::cout << board[0] << " | " << board[1] << " | " << board[2] << std::endl ;
    std::cout << "----------" << std::endl;
    std::cout << board[3] << " | " << board[4] << " | " << board[5] << std::endl ;
    std::cout << "----------" << std::endl;
    std::cout << board[6] << " | " << board[7] << " | " << board[8] << std::endl ;
    std::cout << std::endl;
}


int getMove(char board[]){
    int move = -1;
    while (move == -1 ){
        
        std::cout << std::endl;
        std::cout << "Enter a number between 1 and 9 " << std::endl << "to play in that position" << std::endl;
        std::cin >> move;
        if (move < 1 || move > 9  || board [move-1] != ' ') {
            move = -1;
            std::cout << " bad move, try again " << std::endl;
        }
    }
    return move - 1;
}


bool checkWin(char board[]){
    if (board[0] == board[1] && board[1] == board[2] && board[2] != ' ' )  return true;
    if (board[0] == board[3] && board[3] == board[6] && board[6] != ' ' )  return true;
    if (board[0] == board[4] && board[4] == board[8] && board[8] != ' ' )  return true;
    if (board[1] == board[4] && board[4] == board[7] && board[7] != ' ' )  return true;
    if (board[2] == board[4] && board[4] == board[6] && board[6] != ' ' )  return true;
    if (board[2] == board[5] && board[5] == board[8] && board[8] != ' ' )  return true;
    if (board[3] == board[4] && board[4] == board[5] && board[5] != ' ' )  return true;
    if (board[6] == board[7] && board[7] == board[8] && board[8] != ' ' )  return true;
    return false;
}


bool checkDraw(char board[]){
    for ( int i = 0; i < 9; i++){
        if ( board [i] == ' ' ) return false;
    }
    return true;
}
