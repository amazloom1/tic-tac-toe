#include <iostream>

#include "ttt.hpp"

int main() {

  greet();

  char board[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }

  int moves = 0;
  int u1move = 0;

  std::string player1 = "Player 1 wins!\n";
  std::string player2 = "Player 2 wins!\n";

  int player = 1;

  for (int i = 0; i <= 9; i++) {
    if (i < 9) {
      if (player == 1) {
        user1turn(board);
        player++;
        printBoard(board);
        if (checkWin(board) == player1) {
          std::cout << checkWin(board);
          break;
        }
      } else if (player == 2) {
        user2turn(board);
        player--;
        printBoard(board);
        if (checkWin(board) == player2) {
          std::cout << checkWin(board);
          break;
        }
      }
    } else {
      std::cout << "Draw";
    }
  }
  std::cout << "Thank you for playing!\n";
}
