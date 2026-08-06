def print_board(board):
    print("\n")
    print(f" {board[0]} | {board[1]} | {board[2]}")
    print("---+---+---")
    print(f" {board[3]} | {board[4]} | {board[5]}")
    print("---+---+---")
    print(f" {board[6]} | {board[7]} | {board[8]}")
    print()


def check_winner(board, player):
    win_positions = [
        [0,1,2], [3,4,5], [6,7,8],   # Rows
        [0,3,6], [1,4,7], [2,5,8],   # Columns
        [0,4,8], [2,4,6]             # Diagonals
    ]

    for pos in win_positions:
        if board[pos[0]] == board[pos[1]] == board[pos[2]] == player:
            return True
    return False


def board_full(board):
    return " " not in board


board = [" "] * 9
current_player = "X"

print("====== TIC TAC TOE ======")
print("Positions:")
print("1 | 2 | 3")
print("4 | 5 | 6")
print("7 | 8 | 9")

while True:
    print_board(board)

    try:
        move = int(input(f"Player {current_player}, enter position (1-9): ")) - 1

        if move < 0 or move > 8:
            print("Invalid position!")
            continue

        if board[move] != " ":
            print("Position already taken!")
            continue

        board[move] = current_player

        if check_winner(board, current_player):
            print_board(board)
            print(f"🎉 Player {current_player} Wins!")
            break

        if board_full(board):
            print_board(board)
            print("🤝 It's a Draw!")
            break

        current_player = "O" if current_player == "X" else "X"

    except ValueError:
        print("Please enter a number from 1 to 9.")