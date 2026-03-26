#include <iostream>
#include "pl5.h"
Counter::Counter(){
this->counter = 0;
}
void Counter::setCounter() {
int c;
std::cout << "What's the new value?";
std::cin >> c;
if (c < 0) {
std::cout << "Not a valid number";
}
this->counter = c;
}
void Counter::increment() {
this->counter ++;
}
void Counter::decrement() {
if (this->counter > 0) {
this->counter --;
}
}
void Counter::printCounter() {
std::cout << "The counter value is: " << this->counter << std::endl;
}

CounterUi::CounterUi(){
this->contador = Counter();
}
int CounterUi::readOption(){
int op;
do{
std::cout << "Enter an option: \n1 - Set a new value\n2 - Increment counter\n3 -
Decrement counter\n";
std::cin >> op;
}while(op <= 0 || op > 4);
return op;
}
void CounterUi::action(int op) {
switch (op) {
case 1: this->contador.setCounter(); break;
case 2: this->contador.increment(); break;
case 3: this->contador.decrement(); break;
}
}
void CounterUi::run(){
int op;
bool finishing = false;
do{
op = readOption();
action(op);
contador.printCounter();
finishing = exit();
} while(finishing == false);
}
bool CounterUi::exit(){
char op;
do{
std::cout << "Exit? (y/n): ";
std::cin >> op;
} while(op != 'y' && op != 'n' && op != 'Y' && op != 'N');
if(op == 'y' || op== 'Y')
return true;
return false;
}
