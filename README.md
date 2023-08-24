# Terminal-based Chess Game in C

This is a simple terminal-based chess game implemented in C. The game allows you to play a basic game of chess against yourself, making moves by entering start and end positions for each move.

Please note that this implementation is very basic and lacks advanced features, validation, error handling, and a proper way to end the game. It serves as a starting point for further development.

## How to Play

1. Compile the C code using a C compiler (e.g., GCC):
```bash
gcc chess_game.c -o chess_game
```

2. Run the compiled executable:
```bash
./chess_game
```

3. The initial chess board will be displayed, with each piece represented by a character.

4. Enter the start and end positions for each move. Positions are entered in the format `x y`, where `x` is the row (0-7) and `y` is the column (0-7). For example, to move a pawn from (1,2) to (2,2), you would enter `1 2` as the start position and `2 2` as the end position.

5. The updated board will be displayed after each move.

6. The game currently doesn't have a built-in end condition or advanced rules. You can exit the game by pressing Ctrl+C in the terminal.

## Customization and Further Development

This implementation is intentionally kept simple. It can be extended and improved in various ways:

- Implementing movement rules for each piece.
- Validating moves to ensure they adhere to the rules of chess.
- Implementing capturing and removing pieces from the board.
- Detecting check, checkmate, and stalemate conditions.
- Adding support for castling, en passant, and pawn promotion.
- Enhancing the user interface for better user experience.

Feel free to fork this repository and build upon it to create a more complete and feature-rich chess game.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
