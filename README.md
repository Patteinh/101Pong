# 101Pong 🏓

Welcome to **101pong**.

This project is inspired by the classic games of Pong and Breakout, focusing on the 3D motion of a ball in a virtual space.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** 101pong

## Project Overview 📜

The goal of this project is to simulate the 3D trajectory of a ball in a Pong game. Your program will calculate and display the following:

- The velocity vector of the ball.
- The coordinates of the ball after a given amount of time.
- The angle at which the ball will hit the paddle, if applicable.

### Usage

`./101pong x0 y0 z0 x1 y1 z1 n`

#### DESCRIPTION
- `x0`: Ball abscissa at time t - 1
- `y0`: Ball ordinate at time t - 1
- `z0`: Ball altitude at time t - 1
- `x1`: Ball abscissa at time t
- `y1`: Ball ordinate at time t
- `z1`: Ball altitude at time t
- `n`: Time shift (greater than or equal to zero, integer)

### Suggested Bonuses

- Ball acceleration management.
- A graphical interface.
- Complete 2D and 3D Pong/Breakout games.
- A spherical paddle.

## Examples

### Example 1
`Input: ./101pong 1 3 5 7 9 -2 4` <br>

`Output:` <br>
`The velocity vector of the ball is:` <br>
`(6.00, 6.00, -7.00)` <br>
`At time t + 4, ball coordinates will be:` <br>
`(31.00, 33.00, -30.00)` <br>
`The ball won’t reach the paddle.` <br>

### Example 2
`Input: ./101pong 1.1 3 5 -7 9 2 4`<br>

`Output:`<br>
`The velocity vector of the ball is:`<br>
`(-8.10, 6.00, -3.00)`<br>
`At time t + 4, ball coordinates will be:`<br>
`(-39.40, 33.00, -10.00)`<br>
`The incidence angle is:`<br>
`16.57 degrees`<br>


*Note: The incidence angle should be between 0 and 90 degrees. Pay attention to the precision of float numbers.*

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Run the program: `./101pong x0 y0 z0 x1 y1 z1 n`.
4. For detailed guidelines, refer to `101pong.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.
