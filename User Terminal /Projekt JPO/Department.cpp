//
//  Department.cpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#include "Department.hpp"
#include<iostream>
Department::~Department(){
    //cout<<"Niszczę department"<<endl;
    
}
Department::Department(){
    //cout<<"Tworzę Department"<<endl;
    
    
}
Department::Department(int id,string name):id_d(id),name_d(name)
{
   // cout<<"Tworzę Department: "<<name<<endl;
    
    
}
void Department::set(int id_,string name_)
{
    id_d=id_;
    name_d=name_;
    
}

string Department::get_name()
{
    return name_d;
}
int Department::get_id()
{
    return id_d;
}

void Department::show(){
    int ws=20;
    int id=8;
    string sep=" | ";
    string line=" | "+ string(ws+id+3,'-')+" | \n" ;
    string line2=" + "+ string(ws+id+3,'*')+" + \n" ;
    cout<<line2;
    cout<<sep<< std::setw(id) <<left<< id_d << sep << std::setw(ws) <<left<< name_d << sep<<"\n";
    cout<<line2;

}
