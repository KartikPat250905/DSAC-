/*
Class is like struct but with object i.e functions specific to it.
Objects can be of different types:-
    Public:
    Can be used everywhere in the file
    Private:
    Can be used only in the class and not anywhere else
    Protected:

Getter & Setter:
So if a object is private and u wanna use it in some functions or main you
can use getter and setter they are kind of function we make inside the class
which allow us to access private object as we wish.

Initialization
    Static-
    Hero hero1;
    Dynamic-
    Hero *hero1 = new Hero;

Access elements
    Static-
    hero1.health = 25;
    Dynamic-
    hero1 ->health = 25;

Constructor-
    If u dont define any constructor it takes default constructor
    For example :
    Hero hero1;
    Here the default constructor which is hero1.Hero();is called by the compiler

Paramaterised Constructor-
    So in our class we can define paramaterised constructor like this
    Hero(int health,char level)
    {
        this->health = health;
        this->level = level;
    }
    So we can use it in main like this
    Hero hero1(25,'A');

this keyword-
    It is a keyword which stores adderess of the object in our case
    hero1 so we can access that particular memory without confusing it
    with the input if they are of same name.

Copy Constructor-
    We can use copy constructor when our object have same data val
    For example if health of the object and level are same
    By default copy constructor is created by the program itself
    which can be called like this :-
    Hero hero2(hero1);

    So here we copy content of hero1 in hero2.
    Hero <new object name> (&<existing object to be copied>);
    So this way we copy each value to same as hero1.

    We can even write our own copy constructor like this-
    Hero (Hero& temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

Note :
    Whenever we write our own COPY CONSTRUCTOR OR CONSTRUCTOR the default ones get
    destroyed and can not be used.
    If u forget to allocate memory when needed in your class there would be
    no output and program will quit .

Calling a function from a class-
    Its same as accessing the value of struct
    Hero.print();
    this calls the print function which is user defined inside the class Hero

Types of copy:
    1.Shallow copy:
        The default copy constructor uses shallow copy i.e if u have some property
        in your class which uses dynamic allocation the copied object will have
        same address in memory So if u change one of them the changes will be
        reflected in both of them.
        Example:
            Hero ramesh(25,'A');
            char name[] = "Ramesh";
            ramesh.setName(name);
            ramesh.print();
            Hero S(ramesh);
            S.print();
            ramesh.name[0] = 'S';
            cout << endl << endl;
            ramesh.print();
            S.print();

    2.Deep Copy:
        We can define our own copy constructor which can deep copy.
        Deep copy means changes in one object does not reflect in copied object.

        Hero(Hero &temp)
        {
            char *ch = new char[strlen(temp.name)];
            strcpy(ch,temp.name());
            this->name = ch;
            this->health = temp.health;
            this->level = temp.level;
        }
        So here since we dynamically allocate name when copying we just
    We can also copy just normally
    ramesh = S;
    it copies S properties to ramesh.

Destructor :
    It is inbuilt like constructor .
    If the object is statically allocated than the destructor is automatically
    called.
    But if the object is dynamically allocated than we need to manually call the 
    destructor.
    Destructor's syntax is same as constructor but with ~in the start.
    ~Hero()
    {
        cout <<"Destructor called";
    }
    You can delete dynamically allocated objs like this
    delete <obj name>;

Static keyword:
    Static variable in a class can be accessed even without creating a object
    Initializing static without creating a object-
    <data type of static> <class name>::<static variable's name> = <Value>;

    Accessing value of a static variable
    <class name>::<static name>;

Static Functions:
    No need to create object to access static functions.
    They dont have this keyword.You cant use normal properties u can only use 
    static data types.
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;
    Hero()
    {
        cout << "Default constructor called";
        this->name = new char[100];
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        this->name = new char[100];
    }
    void print()
    {
        cout << "Name is " << this->name << endl;
        cout << "Health is " << this->health << endl;
        cout << "Level is " << this->level << endl;
    }
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name)];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    int getHealth()
    {
        return this->health;
    }
    void setHealth(int h)
    {
        this->health = h;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero ramesh(25, 'A');
    char name[] = "Ramesh";
    ramesh.setName(name);
    ramesh.print();
    Hero S(ramesh);
    S.print();
    ramesh.name[0] = 'S';
    cout << endl
         << endl;
    ramesh.print();
    S.print();
}