#include <iostream>
#include <cstdlib>
 
int main() {
 
  // Your future is here
  std::cout << "MAGIC 8-BALL: \n";

  srand(time(NULL));
  
  int answer = std::rand() % 10;

  if (answer == 0){
    std::cout << " It is certain.";
  }
  else if (answer == 1){
    std::cout << " ask again later";
  }
  else if (answer == 2){
    std::cout << " YAS \n";
  }
  else if (answer == 3){
    std::cout << " outlook good";
  }
  else if (answer == 4){
    std::cout << " most likely";
  }
  else if (answer == 5){
    std::cout << " nope sorry";
  }
  else if (answer == 6){
    std::cout << " better luck next time loser";
  }
  else if (answer == 7){
    std::cout << " cannot predict";
  }
  else if (answer == 8){
    std::cout << " mcdonalds";
  }
  else{
    std::cout << " Very doubtful.";
  }
}