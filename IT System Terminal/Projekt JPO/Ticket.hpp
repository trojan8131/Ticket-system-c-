//
//  Ticket.hpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#ifndef Ticket_hpp

#define Ticket_hpp
#include<string>
#include <stdio.h>
using namespace std;
class Ticket {
private:
    //id danego zgłoszenia
    int id;
    //Priorytet sla 1,2,3 Serive level agreement
    int sla;
    //Affected CI Czyli której aplikacji dotyczy problem
    //AC ci;
    string topic;
    string note;
    //Asssinged to:
    int assigned;
    int status;
    string date;
    //Contact to affected user:
    string contact;
    
    
public:
    Ticket();
    ~Ticket();
    Ticket(int id,int sla,string topic,string note,int assigned,int status,string date,string contact);
    void print();
    
    string get_topic();
    string get_note();
    string get_date();
    string get_contact();
    int get_id();
    int get_sla();
    int get_assigned();
    int get_status();
    void set_sla(int);
    void set_status(int);
    void set_assigned(int);
    void set_id(int);
    
};
#endif /* Ticket_hpp */
