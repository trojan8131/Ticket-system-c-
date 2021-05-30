//
//  main.cpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//


#include <iostream>
#include <string>
#include<stdlib.h>
#include <cstdlib>
#include "System.cpp"
using namespace std;



int main() {
    system("users.txt");
    System ts;
    ts.menu();
    return 0;
}
