#include <iostream>
double balance = 1000;
double cash = 100;
std::string choice;
double withdrawl;
double deposite;
int day = 1;



int main() {
  for(int i = 1; i > 0; i++){

  std::cout << "\n\nBANK OF AMERICA\n";
  std::cout << "-------------------------------------------------\n";
  std::cout << "Welcome to this bank your current balance is: " << balance << " dollars.\n\n";
  std::cout << "You have " << cash << "$ on hand\n";
  std::cout << "Would you like to withdrawl(1) or deposite(2)... ";
  std::cin >> choice;


  if(choice == "1" and balance != 0){
    std::cout << "How much would you like to withdrawl?: ";
    std::cin >> withdrawl;
    if(withdrawl > balance){
      std::cout << "You are trying to crack the system by taking more money than you have in your bank. NICE TRY";
    }
    balance = balance - withdrawl;
    std::cout << "\nYour balance is " << balance << "$ See you tommorrow!";
    cash = cash + withdrawl;
  }


  else if(choice == "2"){
    std::cout << "How much would you like to deposite?: ";
    std::cin >> deposite;
    if(deposite < balance){
      std::cout << "You are trying to crack the system by taking more money than you have in your bank. NICE TRY";
    }
    balance = balance + deposite;
    std::cout << "\n Your balance is " << balance << "$ See you tommorrow!";
    cash = cash - deposite;
  }


  else if(balance == 0){
    std::cout << "Your balance is 0 so you cannot take any money out.";
    std::cout << "How much would you like to deposite?: ";
    std::cin >> deposite;
    balance = balance + deposite;
    std::cout << "\n Your balance is " << balance << "$ See you tommorrow!";
    cash = cash - deposite;
  }
  }
}
