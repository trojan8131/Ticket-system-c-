//
//  Department.hpp
//  Projekt JPO
//
//  Created by Maciej Piotrowski on 22/03/2021.
//

#ifndef Department_hpp
#define Department_hpp
#include <iomanip>
class Department{
private:
    string name_d;
    int id_d;
    
public:
    Department();
    ~Department();
    Department(int,string);
    void set(int,string);
    string get_name();
    int get_id();
    void show();
};
#include <stdio.h>

#endif /* Department_hpp */
