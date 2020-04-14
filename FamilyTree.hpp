/**
 * Author: Meir Nizri
 * Second assignment in cpp course
 * Date: 2020-04-12
 */

#pragma once
#include <string>
#include <stdbool.h>
using namespace std;

namespace family {
    class Tree {
        struct Person {
			string name;
			string relation;
            bool isMale;   // true if male, false if female
            Person* father;
            Person* mother;
	    };
        Person* root;
        unsigned int size;
    public:
        Tree(string name);
        Tree& addFather(string son, string father);
        Tree& addMother(string son, string mother);
        Tree& remove(string name);
        void display();
        string relation(string name);
        string find(string relation);
    };
}
