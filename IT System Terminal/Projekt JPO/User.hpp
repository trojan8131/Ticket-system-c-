//
//  User.hpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#ifndef User_hpp

#define User_hpp
#include <stdio.h>
#include <iomanip>
class User:public Department{
protected:
    int id_user;
    string name;
    string address;
    string contact;
    
    
public:
    User();
    ~User();
    void change_d(int,string);
    void change_a(string);
    void change_c(string);
    User(unsigned int,int,string,string,string,string);
    void print();
    string get_name_user();
    int get_id_user();
    string get_address();
    string get_contact();
};


#endif /* User_hpp */
