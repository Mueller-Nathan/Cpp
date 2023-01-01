/*rock paper scissor lizard sprock
based on big bang theory show*/

#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));
int computer = rand() % 5 + 1;
int user = 0;
  //live long and prosper
  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "====================\n";

  std::cout << "1) ROCK\n";
  std::cout << "2) PAPER\n";
  std::cout << "3) SCISSORS\n";
  std::cout << "4) LIZARD\n";
  std::cout << "5) SPOCK\n";

  std::cout << "SHOOOOOOT! ";

  std::cin >> user;

if (user == 1 && computer == 1){
  std::cout << "Tie!\n";
}
else if (user == 1 && computer == 2){
  std::cout << "computer wins!\n";
}
else if (user == 1 && computer == 3){
  std::cout << "user wins!\n";
}
else if (user == 1 && computer == 4){
  std::cout << "user wins!\n";
}
else if (user == 1 && computer == 5){
  std::cout << "computer wins\n";
}
else if (user == 2 && computer == 1){
  std::cout << "user wins!\n";
}
else if (user == 2 && computer == 2){
  std::cout << "Tie!\n";
}
else if (user == 2 && computer == 3){
  std::cout << "computer wins\n";
}
else if (user == 2 && computer == 4){
  std::cout << "computer wins!\n";
}
else if (user == 2 && computer == 5){
  std::cout << "user wins!\n";
}
else if (user == 3 && computer == 1){
  std::cout << "computer wins!\n";
}
else if (user == 3 && computer == 2){
  std::cout << "user wins!\n";
}
else if (user == 3 && computer == 3){
  std::cout << "Tie!\n";
}
else if (user == 3 && computer == 4){
  std::cout << "user wins!\n";
}
else if (user == 3 && computer == 5){
  std::cout << "computer wins!\n";
}
else if (user == 4 && computer == 1){
  std::cout << "computer wins!\n";
}
else if (user == 4 && computer == 2){
  std::cout << "user wins!\n";
}
else if (user == 4 && computer == 3){
  std::cout << "computer wins!\n";
}
else if (user == 4 && computer == 4){
  std::cout << "Tie!\n";
}
else if (user == 4 && computer == 5){
  std::cout << "user wins!\n";
}
else if (user == 5 && computer == 1){
  std::cout << "user wins!\n";
}
else if (user == 5 && computer == 2){
  std::cout << "computer wins!\n";
}
else if (user == 5 && computer == 3){
  std::cout << "user wins!\n";
}
else if (user == 5 && computer == 4){
  std::cout << "computer wins!\n";
}
else{
  std::cout << "Tie!\n";
}
  return 0;
}