/**
 * Author: Meir Nizri
 * Second assignment in cpp course
 * Date: 2020-04-12
 */

#include "FamilyTree.hpp"
#include <string>

using namespace std;
using namespace family;

Tree::Tree(string name) {
    // root->name = name;
    // size = 1;
}
Tree& Tree::addFather(string son, string father) {
    return *this;
}
Tree& Tree::addMother(string son, string mother) {
    return *this;          
}
Tree& Tree::remove(string name) {
    return *this;          
}
void Tree::display() {
    return;            
}
string Tree::relation(string name) {
    return " ";            
}
string Tree::find(string relation) {
    return " ";              
}
