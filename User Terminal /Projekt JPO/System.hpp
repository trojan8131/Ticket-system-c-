//
//  System.hpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#ifndef System_hpp

#define System_hpp
#include "Ticket.cpp"
#include "Department.cpp"
#include "User.cpp"

#include<vector>
#include<iostream>
#include<string>
#include <fstream>
#include <thread>
#include <chrono>
#include <cmath>
#include <unistd.h>
#include <ctime>
#include<stdio.h>
#include<string.h>
#include <iomanip>
class System{
private:
    vector<Ticket> tickets;
    vector<User> users;
    vector<Department> departments;
    
public:
    System();
    void menu();
    void menu_users();
    void menu_su();
    void menu_ticket();
    void create_ticket();
    void display_u();
    void show_d();
    void refresh();
    void user_add();
    void users_print();
    void ticket_print();
    void department_menu();
    void change_address();
    void change_contact();
    void change_department();
    void save_u();
    void update_u();
    void save_d();
    void update_d();
    void core();
    void add_ticket();
    void save_t();
    void update_t();
    void show_c();
    string name_d(int);
    bool test(string);
    bool test_int(string);
    bool test_int_d(string);
    bool test_int_u(string);
    bool test_int_s(string);
    bool test_int_t(string);
    bool test_d(string);
    int choose();
    void show_progress_bar(int,string);
    void print_ticket(Ticket x);
    
};
#include <stdio.h>

#endif /* System_hpp */
