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
