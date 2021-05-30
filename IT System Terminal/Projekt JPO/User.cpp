//
//  User.cpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#include "User.hpp"
User::User()
{
    //cout<<"Tworzę użytkownika"<<endl;
}
User::User(unsigned int id_,int id_user_,string name_,string name_user,string contact_,string address_):
id_user(id_user_),name(name_user),contact(contact_),address(address_)
{
    set(id_, name_);
    //cout<<"Tworzę użytkownika"<<endl;
}
User::~User(){};

void User::print(){
    
    int ws=14;
    int wx=25;
    string line=" | "+ string(ws+wx+3,'-')+" | \n" ;
    string line2="\n + "+ string(ws+wx+3,'*')+" + \n" ;

    cout<<line2;
    cout << " | " << setw(ws) << "User ID" << " | " << setw(wx) << id_user << " | "<<'\n' ;
    cout<<line;
    cout << " | " << setw(ws) << "User Name" << " | " << setw(wx) << name << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "User Group" << " | " << setw(wx) << get_name() << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "User Contact" << " | " << setw(wx) << contact << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "User Address" << " | " << setw(wx) << address << " | "<<'\n' ;
    
    cout<<line2;
    

    
}
string User::get_name_user()
{
    return name;
}
int User::get_id_user()
{
    return id_user;
}

string User::get_contact()
{
    return contact;
}

string User::get_address()
{
    return address;
}




void User::change_d(int x,string y)
{
    set(x,y);
    
}

void User::change_a(string x){
    
    address=x;
}

void User::change_c(string x){
    
    contact=x;
}
