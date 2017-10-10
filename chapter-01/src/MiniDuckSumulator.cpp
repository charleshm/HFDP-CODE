#include "MallardDuck.h"

using namespace duck;

int main() {
    Duck* mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
}