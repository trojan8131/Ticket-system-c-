//
//  Ticket.cpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#include "Ticket.hpp"
#include<iostream>
using namespace std;
Ticket::Ticket(){
    //cout<<"Wypisuje";
}
Ticket::~Ticket(){
    //cout<<"Niszczę";
}
Ticket::Ticket(int id_,int sla_,string topic_,string note_,int assigned_,int status_,string date_,string contact_):id(id_),sla(sla_),topic(topic_),note(note_),assigned(assigned_),status(status_),date(date_),contact(contact_)
{
    
    //cout<<"Tworzę zgłoszenie"<<endl;
    
}
string Ticket::get_topic()
{
    return topic;
}
string Ticket::get_note()
{
    return note;
}
string Ticket::get_date()
{
    return date;
}
string Ticket::get_contact()
{
    return contact;
}
int Ticket::get_id()
{
    return id;
}
int Ticket::get_sla()
{
    return sla;
}
int Ticket::get_assigned()
{
    return assigned;
}
int Ticket::get_status()
{
    return status;
}
void Ticket::set_sla(int s){
    sla=s;
}
void Ticket::set_status(int s){
    status=s;
}
void Ticket::set_assigned(int s){
    assigned=s;
}
void Ticket::set_id(int s){
    id=s;
}
