#  Ludo Game Simulation (C++)

This project is a simple **Ludo game simulation** implemented in C++. It demonstrates core programming concepts like loops, conditionals, and random number generation by simulating a 4-player Ludo match.

---

##  About the Project

This program simulates a Ludo game between four players:

* Player 1 (Red)
* Player 2 (Blue)
* Player 3 (Green)
* Player 4 (Yellow)

Each player rolls a dice, and their position updates accordingly until one player reaches the winning position.

---

##  Features

*  **Random Dice Rolls**
  Uses `rand()` to simulate dice (1–6)

*  **Turn-Based Simulation**
  All 4 players take turns automatically

*  **Winning Condition**
  First player to reach position **57** wins

*  **Unlock Mechanism**
  Players can only start moving after rolling a **6**

*  **Bonus Turns**
  Rolling a 6 gives extra chances

---

##  Concepts Used

* C++ Basics
* Loops (`while`)
* Conditional Statements (`if-else`)
* Random Number Generation (`rand()`, `srand()`)
* Game Logic Implementation

---

##  Code Overview

* Each player starts at position `-6` (locked state)
* A player must roll a **6** to start moving
* If a player rolls a 6:

  * They unlock and move forward
  * They get additional rolls
* If position exceeds 57, the move is reverted
* The game ends when any player reaches exactly **57**

---

##  How to Run

###  Compile the Code

```bash
g++ ludo.cpp -o ludo
```

### ▶️ Run the Program

```bash
./ludo
```

*(On Windows, run `ludo.exe`)*

---

##  Sample Output

```
p2 is winner!
```

---

##  Learning Outcomes

* Understanding basic game simulation logic
* Working with randomness in C++
* Managing multiple variables and game states
* Implementing real-world rules in code

---

##  Future Improvements

*  Add graphical interface (GUI)
*  Add real user input instead of simulation
*  Implement smarter game logic
*  Display board visualization
*  Add multiple tokens per player

---

## Author

* **Lumia Qureshi**
  BS Computer Science Student

---

## License

This project is for educational purposes.


* Add **GUI using SFML or Qt**
* Or make a **multiplayer version**
