# Shell Hath No Fury...
![Mario_Kart_Blue_Shell](https://user-images.githubusercontent.com/119973248/231492817-64f7a76c-7378-4619-bbc8-e20656931aeb.png)

## Authors

Karis Richardson and Mike Bilbee

## Synopsis

This is a very basic shell, a program that takes user input and interprets it for use by the program or operationg system.

| **File**       | **Description**                                                                                                 |
|----------------|-----------------------------------------------------------------------------------------------------------------|
| main.c         | **shell**: Prompts user / **main**: Starting point                                                              |
| input.c        | **_get_line**: Takes user input / **_strlen**: Returns string length                                            |
| split.c        | **split**: Separates input into it's arguments                                                                  |
| check_command.c| **check_builtin_command**: Checks and executes given function                                                   |
| builtin_funcs.c| **_cd**: Changes directory / **_env**: Prints environment variables / **_stop**: Frees argv[] and calls function|
| exec.c         | **_execve**: Executes another program/**search_path** Finds a string in the PATH                                |

Per the instructions of the project, please see the man page for more details on use 

We really enjoyed the process of creating this shell. Even though it is very small and has low functionality, it gave us appreciation for how much there is behind the scenes of the terminal.

![image](https://github.com/user-attachments/assets/dcbff4e3-ee33-4085-a94b-4bc68f5e67bc)
