//
//  System.cpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#include "System.hpp"
#include <ncurses.h>
#include <curses.h>
#include <thread>
#include <chrono>
#include <cmath>
#define getch() wgetch(stdscr)
static string name_u;
static string contact_u;
void System::show_progress_bar(int count,string message)
{
    int x,y;
    x=count;
    y=0;
        
        for(int i=0;i < count; i++){
            cout <<" \n\t\t\t\t\t" << message << endl << "<";
       

            
            for(int j=0;j<y;j++)
            {
                cout << "=" ;
            }
            for(int j=0;j<x;j++)
            {
                cout << " " ;
            }
            x--;
            y++;
            cout <<">"<<i<<"%"<<endl;
            cout << R"(
                                     ___________________________.
                                    |;;|                     |;;||
                                    |[]|---------------------|[]||
                                    |;;|                     |;;||
                                    |;;|                     |;;||
                                    |;;|                     |;;||
                                    |;;|                     |;;||
                                    |;;|                     |;;||
                                    |;;|                     |;;||
                                    |;;|_____________________|;;||
                                    |;;;;;;;;;;;;;;;;;;;;;;;;;;;||
                                    |;;;;;;_______________ ;;;;;||
                                    |;;;;;|  ___          |;;;;;||
                                    |;;;;;| |;;;|         |;;;;;||
                                    |;;;;;| |;;;|         |;;;;;||
                                    |;;;;;| |;;;|         |;;;;;||
                                    |;;;;;| |;;;|         |;;;;;||
                                    |;;;;;| |___|         |;;;;;||
                                    \_____|_______________|_____||
                                    ~~~~~^^^^^^^^^^^^^^^^^~~~~~~

            )" ;
            fflush(stdout);
            usleep(10000);
           
            system("clear && printf '\e[3J'");

                    }
        
}



System::System(){
    
    /*
    User y(1, 1, "service-desk", "Mariusz Janik", "mariusz.janik@ss.pl", "Polanka");
    users.push_back(y);
    User l(2, 2, "servers", "Mirek Miętka", "mirek.miętka@ss.pl", "Polanka");
    users.push_back(l);
    User g(4, 3, "infra", "Mikołaj Śrama", "Mikołaj.Śrama@ss.pl", "Taszewo");
    users.push_back(g);
    User h(1, 4, "service-desk", "Marcel Mróz", "Marcel.Mróz@ss.pl", "jankowice");
    users.push_back(h);
    User j(3, 5, "help-desk", "Filip Dubiel", "Filip.Dubiel@ss.pl", "Poznań");
    users.push_back(j);
     */
    update_d();
    update_u();
    update_t();
    system("clear && printf '\e[3J'");
    system("clear && printf '\e[3J'");
    system("clear && printf '\e[3J'");
    cout << R"(
    ███╗░░░███╗██████╗░  ████████╗██╗░█████╗░██╗░░██╗███████╗████████╗░██████╗
    ████╗░████║██╔══██╗  ╚══██╔══╝██║██╔══██╗██║░██╔╝██╔════╝╚══██╔══╝██╔════╝
    ██╔████╔██║██████╔╝  ░░░██║░░░██║██║░░╚═╝█████═╝░█████╗░░░░░██║░░░╚█████╗░
    ██║╚██╔╝██║██╔═══╝░  ░░░██║░░░██║██║░░██╗██╔═██╗░██╔══╝░░░░░██║░░░░╚═══██╗
    ██║░╚═╝░██║██║░░░░░  ░░░██║░░░██║╚█████╔╝██║░╚██╗███████╗░░░██║░░░██████╔╝
    ╚═╝░░░░░╚═╝╚═╝░░░░░  ░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚═╝╚══════╝░░░╚═╝░░░╚═════╝
            
                            ▐▓█▀▀▀▀▀▀▀▀▀█▓▌░▄▄▄▄▄░
                            ▐▓█░░▀░░▀▄░░█▓▌░█▄▄▄█░
                            ▐▓█░░▄░░▄▀░░█▓▌░█▄▄▄█░
                            ▐▓█▄▄▄▄▄▄▄▄▄█▓▌░█████░
                            ░░░░▄▄███▄▄░░░░░█████░

    )" ;

    system( "read -n 1 -s -p \"\"" );
    system("clear && printf '\e[3J'");
    show_progress_bar(100,"Restore Database");
}


void System::menu(){

    bool end=true;

    
    string name;
    printf("\n------------------------------------------------------------------");
    printf("\n                   Write Name and Surname                             ");
    printf("\n------------------------------------------------------------------\n");
    getline(cin,name);
    
    while(test(name))
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                   Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,name);
    }
    name_u=name;
    string contact;
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                    Write Contact to you                              ");
    printf("\n------------------------------------------------------------------\n");
    getline(cin,contact);
    while(contact.size()==0)
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                          Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,contact);
    }
    contact_u=contact;
    while(end)
    {
        system("clear && printf '\e[3J'");
            cout<<"\n\n\n\n\n";
            cout<<"=========================================";
        cout << R"(
        
        
 ███╗░░░███╗███████╗███╗░░██╗██╗░░░██╗
 ████╗░████║██╔════╝████╗░██║██║░░░██║
 ██╔████╔██║█████╗░░██╔██╗██║██║░░░██║
 ██║╚██╔╝██║██╔══╝░░██║╚████║██║░░░██║
 ██║░╚═╝░██║███████╗██║░╚███║╚██████╔╝
 ╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚══╝░╚═════╝

        )" ;
        cout<<"\n=========================================";
        cout<<"\n Logged: "<<name_u;
        cout<<"\n=========================================";

        cout<<"\n\n\n 1. Create Incident";
    cout<<"\n 2. Display your tickets";

    cout<<"\n 9. Exit";
    cout<<"\n\n Your Choice : ";
        int x=choose();
    switch(x)
    {
        case 1:
        {
            refresh();
            system("clear && printf '\e[3J'");
            add_ticket();
            system("clear && printf '\e[3J'");
            save_t();
            save_d();
            save_u();
            break;
        }
        case 2:
        {
            refresh();
            system("clear && printf '\e[3J'");
            display_u();
            system("clear && printf '\e[3J'");
            
            break;
        }
        default:
            system("clear && printf '\e[3J'");
            cout<<"\n\n Invalid Value...Please try Again...";
    }
    
    
    }
    
    
    
}
void System::refresh(){
    update_d();
    update_u();
    update_t();
}
void System::display_u(){
    system("clear && printf '\e[3J'");
    system("clear && printf '\e[3J'");
    for(int i=0;i<tickets.size();i++)
    {
        if(tickets[i].get_contact()==contact_u)
        {
        print_ticket(tickets[i]);
        }}
    
    
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
}

void System::show_d(){
    int ws=20;
    int id=8;
    string sep=" | ";
    string line=" | "+ string(ws+id+3,'-')+" | \n" ;
    string line2=" + "+ string(ws+id+3,'*')+" + \n" ;

    cout<<line2;
    cout<<sep<< std::setw(id) << "Group ID" << sep << std::setw(ws) << "Group Name" << sep<<"\n";
    cout<<line2;
    for(int i=0;i<departments.size();i++)
    {

        cout<<sep<< std::setw(id) << departments[i].get_id() << sep << std::setw(ws) << departments[i].get_name() << sep<<"\n";
        cout<<line;
    }
    cout<<line2<<"\n";
}


string System::name_d(int x){
    return departments[x].get_name();
}

void System::department_menu(){
    bool end=true;
    while(end)
    {
        system("clear && printf '\e[3J'");

        cout << R"(
        
        
    ╭━━━╮╱╱╱╱╱╱╱╱╱╱╭╮╱╱╱╱╱╱╱╱╱╭╮
    ╰╮╭╮┃╱╱╱╱╱╱╱╱╱╭╯╰╮╱╱╱╱╱╱╱╭╯╰╮
    ╱┃┃┃┣━━┳━━┳━━┳┻╮╭╋╮╭┳━━┳━╋╮╭╋━━╮
    ╱┃┃┃┃┃━┫╭╮┃╭╮┃╭┫┃┃╰╯┃┃━┫╭╮┫┃┃━━┫
    ╭╯╰╯┃┃━┫╰╯┃╭╮┃┃┃╰┫┃┃┃┃━┫┃┃┃╰╋━━┃
    ╰━━━┻━━┫╭━┻╯╰┻╯╰━┻┻┻┻━━┻╯╰┻━┻━━╯
    ╱╱╱╱╱╱╱┃┃
    ╱╱╱╱╱╱╱╰╯

        )" ;
            cout<<"\n=========================================";
    
cout<<"\n\n\n 1. Add new Department";
cout<<"\n 2. Display All Departments";
cout<<"\n 9. Exit";
cout<<"\n\n Your Choice : ";
    int x=choose();
    system("clear && printf '\e[3J'");

switch(x)
{
case 1:
{
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                    Type name of new department                             ");
    printf("\n------------------------------------------------------------------\n");
    string x;
    cin.ignore();
    getline(cin, x);
    while(test_d(x))
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                   Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,x);
    }
    cout<<x<<"  "<<departments.size()<<" "<< endl;
    Department y(departments.size()+1,x);
    //y.show();
    departments.push_back(y);
    //departments[departments.size()-1].show();
    system("clear && printf '\e[3J'");
    show_d();
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    break;
}
    case 2:
    {
        show_d();
        
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
}
case 3:
    {
        change_department();
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        
        break;
    }
    case 4:
    {
        change_address();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
    }
    case 5:
    {
        change_contact();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
    }
    case 9:
    {
        end=false;
        break;
    }
default:
    {
        system("clear && printf '\e[3J'");
    cout<<"\n\n Invalid Value...Please try Again...";
}
        system("clear && printf '\e[3J'");
}
    }
    
}

void System::menu_users(){
    bool end=true;
    while(end)
    {
        system("clear && printf '\e[3J'");

        cout << R"(
        
        
    ██╗░░░██╗░██████╗███████╗██████╗░░██████╗
    ██║░░░██║██╔════╝██╔════╝██╔══██╗██╔════╝
    ██║░░░██║╚█████╗░█████╗░░██████╔╝╚█████╗░
    ██║░░░██║░╚═══██╗██╔══╝░░██╔══██╗░╚═══██╗
    ╚██████╔╝██████╔╝███████╗██║░░██║██████╔╝
    ░╚═════╝░╚═════╝░╚══════╝╚═╝░░╚═╝╚═════╝░

        )" ;
cout<<"\n\n\n 1. Add new Employee";
cout<<"\n 2. Display All Employee";
cout<<"\n 3. Change Department";
cout<<"\n 4. Change Address";
cout<<"\n 5. Change Contact";
cout<<"\n 9. Exit";
cout<<"\n\n Your Choice : ";
    int x=choose();
    system("clear && printf '\e[3J'");

switch(x)
{
case 1:
{
    user_add();
    
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    break;
}
    case 2:
    {
        users_print();
        
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
}
case 3:
    {
        change_department();
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        
        break;
    }
    case 4:
    {
        change_address();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
    }
    case 5:
    {
        change_contact();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
    }
        
    case 9:
    {
        end=false;
        break;
    }
default:
    {
        system("clear && printf '\e[3J'");
    cout<<"\n\n Invalid Value...Please try Again...";
}
        system("clear && printf '\e[3J'");
}

    }
}

void System::menu_su(){
    bool end=true;
    while(end)
    {
        system("clear && printf '\e[3J'");
    cout<<"\n\n\n\n\n";
        cout << R"(
        
 
        ██████╗░░█████╗░████████╗░█████╗░██████╗░░█████╗░░██████╗███████╗
        ██╔══██╗██╔══██╗╚══██╔══╝██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔════╝
        ██║░░██║███████║░░░██║░░░███████║██████╦╝███████║╚█████╗░█████╗░░
        ██║░░██║██╔══██║░░░██║░░░██╔══██║██╔══██╗██╔══██║░╚═══██╗██╔══╝░░
        ██████╔╝██║░░██║░░░██║░░░██║░░██║██████╦╝██║░░██║██████╔╝███████╗
        ╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝╚═════╝░╚══════╝

        )" ;

cout<<"\n\n\t\t\t\tControl Panel";
cout<<"\n\n\n 1. Save Users Database";
cout<<"\n 2. Restore Users Database";
cout<<"\n 3. Save Department Database";
cout<<"\n 4. Restore Department Database";
    cout<<"\n 5. Save Tickets Database";
    cout<<"\n 6. Restore Tickets Database";
    cout<<"\n 7. Save all Database";
    cout<<"\n 8. Restore all Database";
cout<<"\n 9. Exit";
cout<<"\n\n Your Choice : ";
    
    int x=choose();
    system("clear && printf '\e[3J'");

switch(x)
{
case 1:
{
    system("clear && printf '\e[3J'");
    show_progress_bar(65,"saving Database");
    printf("\n------------------------------------------------------------------");
    printf("\n                          Saving                              ");
    printf("\n------------------------------------------------------------------\n");
    save_u();
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    system("clear && printf '\e[3J'");
    break;
}
    case 2:
    {
        system("clear && printf '\e[3J'");
        show_progress_bar(100,"Restore Database");
        printf("\n------------------------------------------------------------------");
        printf("\n                          Restoring                              ");
        printf("\n------------------------------------------------------------------\n");
        update_u();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        system("clear && printf '\e[3J'");

        break;
}
    case 3:
        {
            system("clear && printf '\e[3J'");
            show_progress_bar(100,"Saving Database");
            printf("\n------------------------------------------------------------------");
            printf("\n                          Saving                              ");
            printf("\n------------------------------------------------------------------\n");
            save_d();
            system( "read -n 1 -s -p \"Press any key to continue...\"" );
            system("clear && printf '\e[3J'");
            break;
        }
        case 4:
        {
            system("clear && printf '\e[3J'");
            show_progress_bar(100,"Restore Database");
            printf("\n------------------------------------------------------------------");
            printf("\n                          Restoring                              ");
            printf("\n------------------------------------------------------------------\n");
            update_d();
            system( "read -n 1 -s -p \"Press any key to continue...\"" );
            system("clear && printf '\e[3J'");

            break;
        }
        
    case 5:
        {
            system("clear && printf '\e[3J'");
            show_progress_bar(100,"Saving Database");
            printf("\n------------------------------------------------------------------");
            printf("\n                          Saving                              ");
            printf("\n------------------------------------------------------------------\n");
            save_t();
            system( "read -n 1 -s -p \"Press any key to continue...\"" );
            system("clear && printf '\e[3J'");
            break;
        }
    case 6:
    {
        system("clear && printf '\e[3J'");
        show_progress_bar(100,"Restore Database");
        printf("\n------------------------------------------------------------------");
        printf("\n                          Restoring                              ");
        printf("\n------------------------------------------------------------------\n");
        update_t();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        system("clear && printf '\e[3J'");

        break;
    }
    case 7:
    {
        system("clear && printf '\e[3J'");
        show_progress_bar(100,"Saving Database");
        printf("\n------------------------------------------------------------------");
        printf("\n                          Saving                              ");
        printf("\n------------------------------------------------------------------\n");
        save_t();
        save_d();
        save_u();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        system("clear && printf '\e[3J'");

        break;
    }
    case 8:
    {
        system("clear && printf '\e[3J'");
        show_progress_bar(100,"Restore Database");
        printf("\n------------------------------------------------------------------");
        printf("\n                          Restoring                              ");
        printf("\n------------------------------------------------------------------\n");
        update_t();
        update_d();
        update_u();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        system("clear && printf '\e[3J'");

        break;
    }
    case 9:
    {
        end=false;
        break;
    }
default:
    {
        system("clear && printf '\e[3J'");
    cout<<"\n\n Invalid Value...Please try Again...";
}
        system("clear && printf '\e[3J'");
}

    }
}


bool System::test_d(string temp){
  
    if(temp[0]==32)
    {
        return true;
    }
    
    
    for(int i=0;i<temp.length();i++)
    {
        if((temp[i]>64 and temp[i]<91) or(temp[i]>96 and temp[i]<123) or temp[i]==32)
        {
            
            
        }
        else
        {return true;}

    }
    if(temp.length()==0)
    {
        return true;
    }

    
    return false;
}
bool System::test(string temp){
    int spacja=0;
    if(temp[0]==32)
    {
        return true;
    }
    
    
    for(int i=0;i<temp.length();i++)
    {
        if((temp[i]>64 and temp[i]<91) or(temp[i]>96 and temp[i]<123) or temp[i]==32)
        {
            
            if(temp[i]==32)
            {
                spacja++;
            }
            
        }
        else
        {return true;}

    }
    if(temp.length()==0)
    {
        return true;
    }
    if(spacja!=1)
    {
        return true;
    }
    
    return false;
}

bool System::test_int_d(string temp)
{
    if(temp[0]==32)
    {
        return true;
    }
    if(temp.size()==0)
    {
        return true;
    }
    
    for(int i=0;i<temp.length();i++)
    {
        if(temp[i]>47 and temp[i]<58)
        {
            
        }
        else
        {return true;}

    }
    int d=stoi(temp);
    if(d>departments.size() or d<1)
    {
        return true;
    }
    return false;
    
    
}
bool System::test_int_s(string temp)
{
    if(temp[0]=='1')
    {
        return false;
    }
   
    if(temp[0]=='2')
    {
        return false;
    }
    if(temp[0]=='3')
    {
        return false;
    }

    return true;
    
    
}
bool System::test_int_t(string temp)
{
    if(temp[0]==32)
    {
        return true;
    }
    if(temp.size()==0)
    {
        return true;
    }
    
    for(int i=0;i<temp.length();i++)
    {
        if(temp[i]>47 and temp[i]<58)
        {
            
        }
        else
        {return true;}

    }
    int d=stoi(temp);
    if(d>tickets.size() or d<1)
    {
        return true;
    }
    return false;
    
}
bool System::test_int_u(string temp)
{
    if(temp[0]==32)
    {
        return true;
    }
    if(temp.size()==0)
    {
        return true;
    }
    
    for(int i=0;i<temp.length();i++)
    {
        if(temp[i]>47 and temp[i]<58)
        {
            
        }
        else
        {return true;}

    }
    int d=stoi(temp);
    if(d>users.size() or d<1)
    {
        return true;
    }
    return false;
    
    
}


bool System::test_int(string temp)
{
    if(temp[0]==32)
    {
        return true;
    }
    if(temp.size()==0)
    {
        return true;
    }
    
    for(int i=0;i<temp.length();i++)
    {
        if(temp[i]>47 and temp[i]<58)
        {
            
        }
        else
        {return true;}

    }
    
    return false;
    
    
}
void System::user_add(){
    
    
    system("clear && printf '\e[3J'");
    cin.ignore();
    string name;
    printf("\n------------------------------------------------------------------");
    printf("\n                   Write Name and Surname                             ");
    printf("\n------------------------------------------------------------------\n");
    getline(cin,name);
    
    while(test(name))
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                   Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,name);
    }
    //cout<<name;
    string contact;
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                   Write Contact to this person                            ");
    printf("\n------------------------------------------------------------------\n");
    getline(cin,contact);
    //cout<<contact;
    system("clear && printf '\e[3J'");
    string address;
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                       Write address                           ");
    printf("\n------------------------------------------------------------------\n");
    getline(cin,address);
    //cout<<address;
    system("clear && printf '\e[3J'");
    string dep;
    printf("\n------------------------------------------------------------------");
    printf("\n                       Choose ID Department                           ");
    printf("\n------------------------------------------------------------------\n");
    this->show_d();
    getline(cin,dep);
    while(  test_int_d(dep))
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                  Choose ID Department Again                           ");
        printf("\n------------------------------------------------------------------\n");
        this->show_d();
        getline(cin,dep);
        
    }
    int d=stoi(dep);
    cout<<"ID_D: "<<dep<<" Name"<<departments[d-1].get_name()<<endl;
    
    string name_d=departments[d-1].get_name();
    unsigned long long int  size=users.size()+1;
    User x(d, size, name_d, name, contact, address);
    users.push_back(x);
    system("clear && printf '\e[3J'");

    x.print();

    
}

void System::users_print(){
    
    printf("\n------------------------------------------------------------------");
    printf("\n             1-Sort by id 2-Sort by Departmen                       ");
    printf("\n------------------------------------------------------------------\n");
    int y=choose();
    switch (y) {
        case 1:
        {
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            printf("\n                          All Emplyee                         ");
            printf("\n------------------------------------------------------------------\n");
            for(int i=0;i<users.size();i++)
            {

                
                users[i].print();
  

            }
            break;
        }
        case 2:
        {
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            printf("\n                          All Emplyee                         ");
            printf("\n------------------------------------------------------------------\n");
            for(int j=0;j<departments.size();j++)
            {
                
                
                for(int i=0;i<users.size();i++)
                {
                    if(users[i].get_id()==j)
                    {
                    users[i].print();
                    
                    }
                }
            }
            break;
        }
        default:
            break;
    }
    
    
    
    
    
}



void System::change_department(){
    
    printf("\n------------------------------------------------------------------");
    printf("\n                          All Emplyee                         ");
    printf("\n------------------------------------------------------------------\n");
    for(int i=0;i<users.size();i++)
    {

        
        users[i].print();
        
    }
    printf("\n------------------------------------------------------------------");
    printf("\n                     Choose User By ID                         ");
    printf("\n------------------------------------------------------------------\n");
    string usr;
    cin.ignore();
    cout<<">>";
    getline(cin,usr);
    while(  test_int_u(usr))
    {
        printf("\n------------------------------------------------------------------");
        printf("\n                  Choose ID User Again                           ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,usr);
        
    }
    int x=stoi(usr);
    //users[x-1].print();
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                     Type new Department ID                        ");
    printf("\n------------------------------------------------------------------\n");
    show_d();
    string dep;
    cout<<">>";
    getline(cin,dep);
    while(  test_int_d(dep))
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                  Choose ID Department Again                           ");
        printf("\n------------------------------------------------------------------\n");
        this->show_d();
        getline(cin,dep);
        
    }
    int y=stoi(dep);
    //departments[y-1].show();
    users[x-1].change_d(y,departments[y-1].get_name());
    system("clear && printf '\e[3J'");
    users[x-1].print();
    
    
}


void System::change_address(){
    
    printf("\n------------------------------------------------------------------");
    printf("\n                          All Emplyee                         ");
    printf("\n------------------------------------------------------------------\n");
    for(int i=0;i<users.size();i++)
    {

        
        users[i].print();
        
    }
    printf("\n------------------------------------------------------------------");
    printf("\n                     Choose User By ID                         ");
    printf("\n------------------------------------------------------------------\n");
    string usr;
    cin.ignore();
    getline(cin,usr);
    while(  test_int_u(usr))
    {
        printf("\n------------------------------------------------------------------");
        printf("\n                  Choose ID User Again                           ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,usr);
        
    }
    int x=stoi(usr);
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                     Type new address                               ");
    printf("\n------------------------------------------------------------------\n");
    string y;
    getline(cin,y);
    users[x-1].change_a(y);
    system("clear && printf '\e[3J'");
    users[x-1].print();
}



void System::change_contact(){
    
    printf("\n------------------------------------------------------------------");
    printf("\n                          All Emplyee                         ");
    printf("\n------------------------------------------------------------------\n");
    for(int i=0;i<users.size();i++)
    {

        
        users[i].print();
        
    }
    printf("\n------------------------------------------------------------------");
    printf("\n                     Choose User By ID                         ");
    printf("\n------------------------------------------------------------------\n");
    string usr;
    cin.ignore();
    getline(cin,usr);
    while(  test_int_u(usr))
    {
        printf("\n------------------------------------------------------------------");
        printf("\n                  Choose ID User Again                           ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,usr);
        
    }
    int x=stoi(usr);
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                     Type new contact                               ");
    printf("\n------------------------------------------------------------------\n");
    string y;
    getline(cin,y);
    users[x-1].change_c(y);
    system("clear && printf '\e[3J'");
    users[x-1].print();
    
    
}



void System::save_u(){

    ofstream writer("./Desktop/users.txt") ;
    for (int i=0;i<users.size();i++) {
        writer << users[i].get_id() << '|' << users[i].get_name() << '|' << users[i].get_id_user()<< '|' << users[i].get_name_user()<< '|' << users[i].get_contact()<< '|' << users[i].get_address()<<"\r";
    }
    writer.close();

    
    
}
void System::save_d(){

    ofstream writer("./Desktop/departments.txt") ;
    for (int i=0;i<departments.size();i++) {
        writer << departments[i].get_id() << '|' << departments[i].get_name()<<"\r";
    }
    writer.close();

    
    
}
void System::update_d(){
    departments.clear();
    string temp;
    fstream writer("./Desktop/departments.txt") ;
    while(!writer.eof())
    {
        
        string idd,name;
        int id;
                getline(writer, idd, '|');
        
        if(idd=="")
                {
                    break;
                }
        
        getline(writer, name, '\r');

        id=stoi(idd);

        Department x(id, name);
        departments.push_back(x);
//        printf("\n------------------------------------------------------------------");
//        printf("\n                         Department Created                             ");
//        printf("\n------------------------------------------------------------------\n");
//        x.show();
//        printf("\n------------------------------------------------------------------\n");
        
    }
    
    
}

void System::update_u(){
    users.clear();
    string temp;
    fstream writer("./Desktop/users.txt") ;
    while(!writer.eof())
    {
        
        string name,name_u,contact,address,idd,iddd;
        int id,id_u;
                getline(writer, idd, '|');
        
        if(idd=="")
                {
                    break;
                }
        
                getline(writer, name, '|');
        getline(writer, iddd, '|');
        getline(writer, name_u, '|');
        getline(writer, contact, '|');
        getline(writer, address, '\r');
        id=stoi(idd);
        id_u=stoi(iddd);
        User x(id, id_u, name, name_u, contact, address);
        users.push_back(x);
//        printf("\n------------------------------------------------------------------");
//        printf("\n                          User Created                             ");
//        printf("\n------------------------------------------------------------------\n");
//        x.print();
//        printf("\n------------------------------------------------------------------\n");
        
    }
    
    
}

int System::choose(){
    string type;
    cin>>type;
    while(test_int(type))
    {

        printf("\n------------------------------------------------------------------");
        printf("\n                   Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        cin.ignore();
        getline(cin,type);
    }
    
    
    int x=stoi(type);
    return x;
    
    
}






/////////////////////////////////////////////TICKETS!//////////////////////////////////////////
void System::menu_ticket(){
    bool end=true;
    while(end)
    {
        system("clear && printf '\e[3J'");
        cout << R"(
        
        ████████╗██╗░█████╗░██╗░░██╗███████╗████████╗░██████╗
        ╚══██╔══╝██║██╔══██╗██║░██╔╝██╔════╝╚══██╔══╝██╔════╝
        ░░░██║░░░██║██║░░╚═╝█████═╝░█████╗░░░░░██║░░░╚█████╗░
        ░░░██║░░░██║██║░░██╗██╔═██╗░██╔══╝░░░░░██║░░░░╚═══██╗
        ░░░██║░░░██║╚█████╔╝██║░╚██╗███████╗░░░██║░░░██████╔╝
        ░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚═╝╚══════╝░░░╚═╝░░░╚═════╝░

        )" ;
    
cout<<"\n\n\n 1. Displaying Tickets";
        cout<<"\n 2. Add new Ticket ";
        cout<<"\n 3. Change Assigned user ";
        cout<<"\n 4. Change SLA ";
        cout<<"\n 5. Change Status ";
        cout<<"\n 6. Close Ticket ";
cout<<"\n 9. Exit";
cout<<"\n\n Your Choice : ";
    int x=choose();
    system("clear && printf '\e[3J'");

    switch(x)
{
case 1:
{
    system("clear && printf '\e[3J'");
    ticket_print();
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    break;
}
    case 3:
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        string wybor;
        cin.ignore();
        getline(cin,wybor);
        while (test_int_t(wybor)) {
            
        
        if(wybor=="show")
        {
            
            system("clear && printf '\e[3J'");

            printf("\n----------------------------------------------------------------\n");
            for(int i=0;i<tickets.size();i++)
            {
                print_ticket(tickets[i]);
            }

            
        }
        printf("\n------------------------------------------------------------------");
        printf("\n                  Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,wybor);
        }
        system("clear && printf '\e[3J'");

        printf("\n------------------------------------------------------------------");
        printf("\n                  Write ID User or show to display Users                      ");
        printf("\n------------------------------------------------------------------\n");
        string user;
        getline(cin,user);
        while (test_int_u(user)) {
            
        
        if(user=="show")
        {
            
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            printf("\n                      Users loaded                            ");
            printf("\n------------------------------------------------------------------\n");
            for(int i=0;i<users.size();i++)
            {

                
                users[i].print();
                printf("\n------------------------------------------------------------------\n");

            }
            
        }
        printf("\n------------------------------------------------------------------");
        printf("\n               Write ID User or show to display Users                       ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,user);
        }
        system("clear && printf '\e[3J'");
        int w=stoi(wybor);
        int id=stoi(user);
        tickets[w-1].set_assigned(id);
        print_ticket(tickets[w-1]);
        
        
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
}
    case 2:
    {
        add_ticket();
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
}
    case 4:
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n               Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        string wybor;
        cin.ignore();
        getline(cin,wybor);
        while (test_int_t(wybor)) {
            
        
        if(wybor=="show")
        {
            
            system("clear && printf '\e[3J'");
       printf("\n------------------------------------------------------------------\n");
            for(int i=0;i<tickets.size();i++)
            {
                print_ticket(tickets[i]);
            }

            
        }
        printf("\n------------------------------------------------------------------");
        printf("\n                 Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,wybor);
        }
        system("clear && printf '\e[3J'");

        printf("\n------------------------------------------------------------------");
        printf("\n                       Write New SLA 1,2,3                      ");
        printf("\n------------------------------------------------------------------\n");
        string user;
        getline(cin,user);
        while (test_int_s(user)) {
            system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                   Write Again New SLA 1,2,3                        ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,user);
        }
        system("clear && printf '\e[3J'");
        int w=stoi(wybor);
        int id=stoi(user);
        tickets[w-1].set_sla(id);
        print_ticket(tickets[w-1]);
        
        
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
}
    case 5:
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                  Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        string wybor;
        cin.ignore();
        getline(cin,wybor);
        while (test_int_t(wybor)) {
            
        
        if(wybor=="show")
        {
            
            system("clear && printf '\e[3J'");
  printf("\n------------------------------------------------------------------\n");
            for(int i=0;i<tickets.size();i++)
            {
                print_ticket(tickets[i]);
            }

            
        }
        printf("\n------------------------------------------------------------------");
        printf("\n                Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,wybor);
        }
        system("clear && printf '\e[3J'");

        printf("\n------------------------------------------------------------------");
        printf("\n                       Write New Status                     ");
        printf("\n                       1.Work In progress                     ");
        printf("\n                       2.Waiting for Enduser                   ");
        printf("\n                       3.Waiting for External                    ");
        printf("\n------------------------------------------------------------------\n");
        string user;
        getline(cin,user);
        while (test_int_s(user)) {
            system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
            printf("\n                       Write New Status                     ");
            printf("\n                       1.Work In progress                     ");
            printf("\n                       2.Waiting for Enduser                   ");
            printf("\n                       3.Waiting for External                    ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,user);
        }
        system("clear && printf '\e[3J'");
        int w=stoi(wybor);
        int id=stoi(user);
        tickets[w-1].set_status(id);
        print_ticket(tickets[w-1]);
        
        
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
}
        
    case 6:
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                 Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        string wybor;
        cin.ignore();
        getline(cin,wybor);
        while (test_int_t(wybor)) {
            
        
        if(wybor=="show")
        {
            
            system("clear && printf '\e[3J'");
 printf("\n------------------------------------------------------------------\n");
            for(int i=0;i<tickets.size();i++)
            {
                print_ticket(tickets[i]);
            }

            
        }
        printf("\n------------------------------------------------------------------");
        printf("\n                 Write ID or show to display Tickets                        ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,wybor);
        }
        int i=stoi(wybor);
        
        
        ofstream writer("./Desktop/tickets_c.txt",ios_base::app) ;

            writer <<tickets[i].get_id()<< '|' << tickets[i].get_sla()<< '|' << tickets[i].get_topic()<< '|' << tickets[i].get_note()<< '|' << tickets[i].get_assigned()<< '|' << tickets[i].get_status()<< '|' << tickets[i].get_date()<< '|' <<tickets[i].get_contact()<< '}';
        
        writer.close();

        
        tickets.erase(tickets.begin()+(i-1));

        for(int i=0;i<tickets.size();i++)
        {
            tickets[i].set_id(i+1);
        }
        //system("clear && printf '\e[3J'");
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        break;
    }
        
        
    case 9:
    {
        end=false;
        break;
    }
default:
    {
        system("clear && printf '\e[3J'");
    cout<<"\n\n Invalid Value...Please try Again...";
}
        system("clear && printf '\e[3J'");
}

    }
}



void System::ticket_print(){
    bool end=true;
    while(end)
    {
        system("clear && printf '\e[3J'");
    cout<<"\n\n\n\n\n";
        system("clear && printf '\e[3J'");
        cout << R"(
        
        ██████╗░██╗░██████╗██████╗░██╗░░░░░░█████╗░██╗░░░██╗
        ██╔══██╗██║██╔════╝██╔══██╗██║░░░░░██╔══██╗╚██╗░██╔╝
        ██║░░██║██║╚█████╗░██████╔╝██║░░░░░███████║░╚████╔╝░
        ██║░░██║██║░╚═══██╗██╔═══╝░██║░░░░░██╔══██║░░╚██╔╝░░
        ██████╔╝██║██████╔╝██║░░░░░███████╗██║░░██║░░░██║░░░
        ╚═════╝░╚═╝╚═════╝░╚═╝░░░░░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░
        
        )" ;
cout<<"\n\n\n 1. Sorted by ID";
    cout<<"\n 2. Sorted by Department ";
    cout<<"\n 3. Sorted by Users ";
    cout<<"\n 4. Sorted by SLA ";
    cout<<"\n 5. Pick by Assigned ";
    cout<<"\n 6. Pick by Group ";
    cout<<"\n 7. Show Work in progress ";
    cout<<"\n 8. Show Waiting for Enduser";
    cout<<"\n 9. Show Waiting for External ";
    cout<<"\n 10. Show Closed ";
    cout<<"\n 11. Show in Sequence ";
cout<<"\n 12. Exit";
cout<<"\n\n Your Choice : ";
    int y=choose();

    switch (y) {
        case 1:
        {
            system("clear && printf '\e[3J'");
            for(int i=0;i<tickets.size();i++)
            {
                print_ticket(tickets[i]);
            }
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            break;
        }
        case 2:
        {
            system("clear && printf '\e[3J'");

            for(int j=0;j<departments.size();j++)
            {
                printf("\n\n + *************************************************************************************** + ");
                printf("\n                                       ");
                cout<<departments[j].get_name();
                printf("\n + *************************************************************************************** + \n\n");
                
                for(int i=0;i<tickets.size();i++)
                {
                    User x=users[tickets[i].get_assigned()-1];
                    if(x.get_id()-1==j)
                    {
                        print_ticket(tickets[i]);

                    }
                }
                
                
                
            }
            
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            break;
            
        }
        case 3:
        {
            system("clear && printf '\e[3J'");

            
            for(int j=0;j<users.size();j++)
            {
                printf("\n\n + *************************************************************************************** + \n");
                printf("                                    ");
                cout<<users[j].get_name_user();
                printf("\n + *************************************************************************************** + \n\n");
                
                for(int i=0;i<tickets.size();i++)
                {
                                 
                    if(tickets[i].get_assigned()-1==j)
                    {
                        print_ticket(tickets[i]);

                    }
                }
                
                
                
            }
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            break;
        }
        case 4:
        {
            system("clear && printf '\e[3J'");

            for(int j=1;j<4;j++)
            {
                     printf("\n + *************************************************************************************** + ");
                printf("\n                                        SLA:    ");
                cout<<j;
                printf("\n + *************************************************************************************** + \n");
                
                for(int i=0;i<tickets.size();i++)
                {
                                 
                    if(tickets[i].get_sla()==j)
                    {
                        print_ticket(tickets[i]);
                    }
                 
                
                }
         
            }
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            break;
        }
        case 5:
        {
            system("clear && printf '\e[3J'");

            for(int i=0;i<users.size();i++)
            {

                
                users[i].print();


            }
            string idd;
            cin.ignore();
            getline(cin,idd);
            while(test_int_u(idd))
            {
                printf("\n------------------------------------------------------------------");
                printf("\n                   Type Again                              ");
                printf("\n------------------------------------------------------------------\n");
                getline(cin,idd);
            }
            int assigned=stoi(idd);
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            users[assigned-1].print();
            printf("\n------------------------------------------------------------------\n");
            
            system("clear && printf '\e[3J'");
            for(int i=0;i<tickets.size();i++)
            {
                             
                if(tickets[i].get_assigned()==assigned)
                {
                    print_ticket(tickets[i]);

                }
            }
            
            
        
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            break;
        }
        case 6:
        {
            system("clear && printf '\e[3J'");

            show_d();
            string idd;
            cin.ignore();
            getline(cin,idd);
            while(test_int_d(idd))
            {
                printf("\n------------------------------------------------------------------");
                printf("\n                   Type Again                              ");
                printf("\n------------------------------------------------------------------\n");
                getline(cin,idd);
            }
            int group=stoi(idd);
            system("clear && printf '\e[3J'");
            departments[group-1].show();
            
            
            for(int i=0;i<tickets.size();i++)
            {
                User x=users[tickets[i].get_assigned()-1];
                if(x.get_id()==group)
                {
                    print_ticket(tickets[i]);

                }
            }
            
            
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            
            break;
        }
            
        case 7:
        {
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            printf("\n                          Work in progress                          ");
            printf("\n------------------------------------------------------------------\n");
            
            for(int i=0;i<tickets.size();i++)
            {
                if(tickets[i].get_sla()==1)
                {
                    print_ticket(tickets[i]);

                }
            }
            
            
        
            
            
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            
            break;
        }
        case 8:
        {
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            printf("\n                          Waiting for Enduser                         ");
            printf("\n------------------------------------------------------------------\n");
            
            for(int i=0;i<tickets.size();i++)
            {
                if(tickets[i].get_sla()==2
                   )
                {
                    print_ticket(tickets[i]);

                }
            }
            
            
        
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            
        
            
            break;
        }
        case 10:
        {
            system("clear && printf '\e[3J'");
            show_c();
            
            
            break;
        }
        case 9:
        {
            system("clear && printf '\e[3J'");
            printf("\n------------------------------------------------------------------");
            printf("\n                          Waiting for External                         ");
            printf("\n------------------------------------------------------------------\n");
            
            for(int i=0;i<tickets.size();i++)
            {
                if(tickets[i].get_sla()==3)
                {
                    print_ticket(tickets[i]);

                }
            }
            system( "read -n 1 -s -p \"Press any key to continue...\"" );

            break;
        }
        case 11:
        {
            
            for(int i=0;i<tickets.size();i++)
            {
                
                    system("clear && printf '\e[3J'");

                    
                    print_ticket(tickets[i]);
                cout<<endl;
                    system( "read -n 1 -s -p \"NEXT -->\"" );
                
            }
            system( "read -n 1 -s -p \"  \"" );

            break;
        }
        case 12:
        {
            end=false;
            break;
        }
        default:
            break;
    }
    
}
    
    
    
}


void System::add_ticket(){
    
    //id danego zgłoszenia
    unsigned long long int id=tickets.size()+1;
    //Priorytet sla 1,2,3
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
    string slaa;
    string idd;
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                          Write Topic                              ");
    printf("\n------------------------------------------------------------------\n");
    cin.ignore();
    getline(cin,topic);
    while(topic.size()==0)
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                         Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,topic);
    }
    system("clear && printf '\e[3J'");
    printf("\n------------------------------------------------------------------");
    printf("\n                       Write DESCRIPTION                              ");
    printf("\n------------------------------------------------------------------\n");
    getline(cin,note);
    while(note.size()==0)
    {
        system("clear && printf '\e[3J'");
        printf("\n------------------------------------------------------------------");
        printf("\n                          Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,note);
    }
    contact=contact_u;
    time_t now=time(0);
    date=strtok(ctime(&now), "\n");
    
    
    assigned=0;
    system("clear && printf '\e[3J'");
    status=0;
    
    
    system("clear && printf '\e[3J'");
    
    printf("\n----------------------------------------------------------------------------------");
    printf("\n                   Choose SLA:                              ");
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\n----------------------------------------------------------------------------------");
    printf("\n    Priority 1 (P1) – A complete business down situation.      ");
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\n----------------------------------------------------------------------------------");
    printf("\n    Priority 2 (P2) – A major component of the clients ability   ");
    printf("\n    to operate is affected.  ");
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\n----------------------------------------------------------------------------------");
    printf("\n    Priority 3 (P3) – The clients core business is unaffected");
    printf("\n    but the issue is affecting efficient operation by one or more people."   );
    printf("\n----------------------------------------------------------------------------------\n");
    string slaaa;
    getline(cin,slaaa);
    //cout<<"prio:"<<slaaa<<endl;
    while(test_int_s(slaaa) )
    {
        printf("\n------------------------------------------------------------------");
        printf("\n                   Type Again                              ");
        printf("\n------------------------------------------------------------------\n");
        getline(cin,slaaa);
        //cout<<"prio:"<<slaaa<<endl;
    }
    sla=stoi(slaaa);
    //cout<<"prio:"<<sla<<endl;
    Ticket x(id, sla, topic, note, assigned, status, date, contact);
    tickets.push_back(x);
    system("clear && printf '\e[3J'");
    print_ticket(x);
    
    printf("\n------------------------------------------------------------------");
    printf("\n                   Add Again?    y or n                         ");
    printf("\n------------------------------------------------------------------\n");
    string b;
    getline(cin, b);
    if(b =="y" or b=="Y")
    {
        add_ticket();
    }
    
    
    
    
}




void System::print_ticket(Ticket x){
    string st;
    int ws=14;
    int wx=70;
    string line=" | "+ string(ws+wx+3,'-')+" | \n" ;
    string line2="\n + "+ string(ws+wx+3,'*')+" + \n" ;
    switch(x.get_status())
    {
        case 0:
            st="Not Opened";
        case 1:
             st="Work in Progress";
            break;
        case 2:
             st="Waiting for Enduser";
            break;
        case 3:
             st="Waiting for External";
            break;
        case 4:
             st="Closed";
            break;
            
    }
    cout<<line2;
    cout << " | " << setw(ws) << "ID" << " | " << setw(wx) << x.get_id() << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "Topic" << " | " << setw(wx) << x.get_topic() << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "Desrciption" << " | " << setw(wx) << x.get_note() << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "Contact" << " | " << setw(wx) << x.get_contact() << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "Status" << " | " << setw(wx) << st << " | "<<'\n' ;
    cout<<line;
    cout << " | " <<setw(ws) << "Prio" << " | " << setw(wx) << x.get_sla() << " | "<<'\n' ;
    cout<<line;
    if(x.get_assigned()==0)
    {
        cout << " | " <<setw(ws) << "Assigned to" << " | " << setw(wx) << "" << " | "<<'\n' ;
        cout<<line;
        cout << " | " <<setw(ws) << "Group" << " | " << setw(wx) << "" << " | "<<'\n' ;
    }
    else{
        cout << " | " <<setw(ws) << "Assigned to" << " | " << setw(wx) << users[x.get_assigned()-1].get_name_user() << " | "<<'\n' ;
        cout<<line;
        cout << " | " <<setw(ws) << "Group" << " | " << setw(wx) << users[x.get_assigned()-1].get_name() << " | "<<'\n' ;
    }


    cout<<line;
    cout << " | " <<setw(ws) << "Creation date" << " | "
    << setw(wx) << x.get_date() << " | ";
    cout<<line2;
       
}



void System::save_t(){

    ofstream writer("./Desktop/tickets.txt") ;
    for (int i=0;i<tickets.size();i++) {
        writer <<tickets[i].get_id()<< '|' << tickets[i].get_sla()<< '|' << tickets[i].get_topic()<< '|' << tickets[i].get_note()<< '|' << tickets[i].get_assigned()<< '|' << tickets[i].get_status()<< '|' << tickets[i].get_date()<< '|' <<tickets[i].get_contact()<< '}';
    }
    writer.close();

    
    
}
void System::update_t(){
    tickets.clear();
    string temp;
    fstream writer("./Desktop/tickets.txt") ;
    while(!writer.eof())
    {
        
        int id;
        //Priorytet sla 1,2,3 Serive level agreement
        int sla;
        //Affected CI Czyli której aplikacji dotyczy problem
        //AC ci;
        string topic,idd,iddd;
        string note;
        //Asssinged to:
        int assigned;
        int status;
        string date;
        //Contact to affected user:
        string contact,as,st;
        
        getline(writer, idd, '|');
        
        if(idd=="")
                {
                    break;
                }
        
                getline(writer, iddd, '|');
        
        getline(writer, topic, '|');
        getline(writer, note, '|');
        getline(writer, as, '|');
        getline(writer, st, '|');
        getline(writer, date, '|');
        getline(writer, contact, '}');
        id=stoi(idd);
        assigned=stoi(as);
        status=stoi(st);
        sla=stoi(iddd);
        Ticket x(id, sla, topic, note, assigned, status, date, contact);
        tickets.push_back(x);
//
//        for(int i=0;i<tickets.size();i++)
//        {
//            print_ticket(tickets[i]);
//        }
//        printf("\n------------------------------------------------------------------\n");
        
    }
    
    writer.close();
}


void System::show_c(){
    string temp;
    fstream writer("./Desktop/tickets_c.txt") ;
    vector<Ticket> closed;
    while(!writer.eof())
    {
    
        int id;
        //Priorytet sla 1,2,3 Serive level agreement
        int sla;
        //Affected CI Czyli której aplikacji dotyczy problem
        //AC ci;
        string topic,idd,iddd;
        string note;
        //Asssinged to:
        int assigned;
        int status;
        string date;
        //Contact to affected user:
        string contact,as,st;
        
        getline(writer, idd, '|');
        
        if(idd=="")
                {
                    break;
                }
        
                getline(writer, iddd, '|');
        
        getline(writer, topic, '|');
        getline(writer, note, '|');
        getline(writer, as, '|');
        getline(writer, st, '|');
        getline(writer, date, '|');
        getline(writer, contact, '}');
        id=stoi(idd);
        assigned=stoi(as);
        status=stoi(st);
        sla=stoi(iddd);
        Ticket x(id, sla, topic, note, assigned, status, date, contact);
        closed.push_back(x);

        
    }
    system("clear && printf '\e[3J'");
    for(int i=0;i<closed.size();i++)
    {
        closed[i].set_status(4);
        print_ticket(closed[i]);
    }
    printf("\n------------------------------------------------------------------\n");
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    writer.close();
}


void System::core(){
    
    for(int i=0;i<tickets.size();i++)
    {

            system("clear && printf '\e[3J'");
        bool prawda=true;
        while(prawda)
        {
            
            prawda=true;
            system("clear && printf '\e[3J'");
            print_ticket(tickets[i]);
        cout<<endl;
    cout<<"\n\n\n 1. Next ticket";
        cout<<"\n 2. Previous ticket";
        cout<<"\n 3. Change Assigned user";
            cout<<"\n 4. Change SLA ";
            cout<<"\n 5. Change Status ";
            cout<<"\n 6. Close Ticket ";
        cout<<"\n 9. Exit";
        cout<<"\n\n Your Choice : ";
        
            int x;
            x=choose();
           
        switch(x)
        {
                
            case 1:{
                
                prawda=false;
                break;
            }
            case 2:{
                
                prawda=false;
                if(i==0)
                {
                    i--;
                }
                else
                {
                    i-=2;
                }
                break;
            }
            case 3:{

                system("clear && printf '\e[3J'");

                printf("\n------------------------------------------------------------------");
                printf("\n                  Write ID User or show to display Users                      ");
                printf("\n------------------------------------------------------------------\n");
                string user;
                cin.ignore();
                getline(cin,user);
                while (test_int_u(user)) {
                    
                
                if(user=="show")
                {
                    
                    system("clear && printf '\e[3J'");
                    printf("\n------------------------------------------------------------------");
                    printf("\n                      Users loaded                            ");
                    printf("\n------------------------------------------------------------------\n");
                    for(int i=0;i<users.size();i++)
                    {

                        
                        users[i].print();
                        printf("\n------------------------------------------------------------------\n");

                    }
                    
                }
                printf("\n------------------------------------------------------------------");
                printf("\n               Write ID User or show to display Users                       ");
                printf("\n------------------------------------------------------------------\n");
                getline(cin,user);
                }
                system("clear && printf '\e[3J'");
                int id=stoi(user);
                tickets[i].set_assigned(id);

                
                break;
                
                
            }
            case 4:
            {
                system("clear && printf '\e[3J'");

                printf("\n------------------------------------------------------------------");
                printf("\n                       Write New SLA 1,2,3                      ");
                printf("\n------------------------------------------------------------------\n");
                string user;
                cin.ignore();
                getline(cin,user);
                while (test_int_s(user)) {
                    system("clear && printf '\e[3J'");
                printf("\n------------------------------------------------------------------");
                printf("\n                   Write Again New SLA 1,2,3                        ");
                printf("\n------------------------------------------------------------------\n");
                getline(cin,user);
                }
                system("clear && printf '\e[3J'");
                int id=stoi(user);
                tickets[i].set_sla(id);
                print_ticket(tickets[i]);
                
                break;
        }
            case 5:
            {
        
                system("clear && printf '\e[3J'");

                printf("\n------------------------------------------------------------------");
                printf("\n                       Write New Status                     ");
                printf("\n                       1.Work In progress                     ");
                printf("\n                       2.Waiting for Enduser                   ");
                printf("\n                       3.Waiting for External                    ");
                printf("\n------------------------------------------------------------------\n");
                string user;
                cin.ignore();
                getline(cin,user);
                while (test_int_s(user)) {
                    system("clear && printf '\e[3J'");
                printf("\n------------------------------------------------------------------");
                    printf("\n                       Write New Status                     ");
                    printf("\n                       1.Work In progress                     ");
                    printf("\n                       2.Waiting for Enduser                   ");
                    printf("\n                       3.Waiting for External                    ");
                printf("\n------------------------------------------------------------------\n");
                getline(cin,user);
                }
                system("clear && printf '\e[3J'");
                int id=stoi(user);
                tickets[i].set_status(id);
                print_ticket(tickets[i]);
                
                
                
                system( "read -n 1 -s -p \"Press any key to continue...\"" );
                break;
        }
                
            case 6:
            {

                ofstream writer("./Desktop/tickets_c.txt",ios_base::app) ;

                    writer <<tickets[i].get_id()<< '|' << tickets[i].get_sla()<< '|' << tickets[i].get_topic()<< '|' << tickets[i].get_note()<< '|' << tickets[i].get_assigned()<< '|' << tickets[i].get_status()<< '|' << tickets[i].get_date()<< '|' <<tickets[i].get_contact()<< '}';
                
                writer.close();

                
                tickets.erase(tickets.begin()+(i));

                for(int j=0;j<tickets.size();j++)
                {
                    tickets[j].set_id(j+1);
                }
                //system("clear && printf '\e[3J'");
                system( "read -n 1 -s -p \"Press any key to continue...\"" );
                break;
            }
                
            case 9:
            {
                
                prawda=false;
                i=tickets.size();
            }
        
        
        
        
            default:
            {
                
            }
                save_t();
                save_d();
                save_u();
        }
        
        cout<<endl;
            
        
        
        
        
        
        
        
        }
        
        
    }
    system( "read -n 1 -s -p \"  \"" );
    
    
    
    
    
    
    
    
    
    
    
}
