#include "ttt.hpp"
#include <iostream>

void user1turn(char board[3][3]) {
  int user1;
  std::cout << "Player 1 turn: ";

  while (true) {
    std::cin >> user1;

    if (user1 == 1 && board[0][0] == ' ') {
      board[0][0] = 'x';
      break;
    } else if (user1 == 2 && board[0][1] == ' ') {
      board[0][1] = 'x';
      break;
    } else if (user1 == 3 && board[0][2] == ' ') {
      board[0][2] = 'x';
      break;
    } else if (user1 == 4 && board[1][0] == ' ') {
      board[1][0] = 'x';
      break;
    } else if (user1 == 5 && board[1][1] == ' ') {
      board[1][1] = 'x';
      break;
    } else if (user1 == 6 && board[1][2] == ' ') {
      board[1][2] = 'x';
      break;
    } else if (user1 == 7 && board[2][0] == ' ') {
      board[2][0] = 'x';
      break;
    } else if (user1 == 8 && board[2][1] == ' ') {
      board[2][1] = 'x';
      break;
    } else if (user1 == 9 && board[2][2] == ' ') {
      board[2][2] = 'x';
      break;
    } else {
      std::cout << "Invalid input\n";
      continue;
    }
  }
}

void user2turn(char board[3][3]) {
  int user2;

  while (true) {
    std::cout << "Player 2 turn: ";
    std::cin >> user2;

    if (user2 == 1 && board[0][0] == ' ') {
      board[0][0] = 'o';
      break;
    } else if (user2 == 2 && board[0][1] == ' ') {
      board[0][1] = 'o';
      break;
    } else if (user2 == 3 && board[0][2] == ' ') {
      board[0][2] = 'o';
      break;
    } else if (user2 == 4 && board[1][0] == ' ') {
      board[1][0] = 'o';
      break;
    } else if (user2 == 5 && board[1][1] == ' ') {
      board[1][1] = 'o';
      break;
    } else if (user2 == 6 && board[1][2] == ' ') {
      board[1][2] = 'o';
      break;
    } else if (user2 == 7 && board[2][0] == ' ') {
      board[2][0] = 'o';
      break;
    } else if (user2 == 8 && board[2][1] == ' ') {
      board[2][1] = 'o';
      break;
    } else if (user2 == 9 && board[2][2] == ' ') {
      board[2][2] = 'o';
      break;
    } else {
      std::cout << "Invalid input\n";
      continue;
    }
  }
}

void greet() {

  std::cout << "===========\n";
  std::cout << "Tic Tac Toe\n";
  std::cout << "===========\n";

  std::cout << "Instructions\nFor each players turn type one of the \n";
  std::cout << "following when asked to place an X or O in the spot: \n";
  std::cout << " 1 | 2 | 3 \n";
  std::cout << "-----------\n";
  std::cout << " 4 | 5 | 6 \n";
  std::cout << "-----------\n";
  std::cout << " 7 | 8 | 9 \n";
}

std::string checkWin(char board[3][3]) {
  std::string player1W = "Player 1 wins!\n";
  std::string player2W = "Player 2 wins!\n";
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') {
      return player1W;
      break;
    } else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') {
      return player1W;
      break;
    } else if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') {
      return player1W;
      break;
    } else if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x') {
      return player1W;
      break;
    } else if (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') {
      return player2W;
      break;
    } else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') {
      return player2W;
      break;
    } else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') {
      return player2W;
      break;
    } else if (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o') {
      return player2W;
      break;
    }
  }
  return "";
}

void printBoard(char board[3][3]) {
  std::cout << " " << board[0][0] << " | " << board[0][1] << " | "
            << board[0][2] << "\n";
  std::cout << "------------\n";
  std::cout << " " << board[1][0] << " | " << board[1][1] << " | "
            << board[1][2] << "\n";
  std::cout << "------------\n";
  std::cout << " " << board[2][0] << " | " << board[2][1] << " | "
            << board[2][2] << "\n";
}
