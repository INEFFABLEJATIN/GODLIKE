#include <iostream>
#include <vector>

using namespace std;

// Function to print the tic-tac-toe board
void print_board(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if there is a winner
bool check_winner(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, '-'));

    char player = 'X';
    int row, col;

    while (true) {
        print_board(board);

        cout << "Player " << player << ", enter row and column: ";
        cin >> row >> col;

        // Check if the input is valid
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '-') {
            board[row][col] = player;

            // Check if there is a winner
            if (check_winner(board, player)) {
                print_board(board);
                cout << "Player " << player << " wins!" << endl;
                break;
            }

            // Switch to the other player
            if (player == 'X') {
                player = 'O';
            } else {
                player = 'X';
            }
        } else {
            cout << "Invalid input. Try again." << endl;
        }
    }

    return 0;
}