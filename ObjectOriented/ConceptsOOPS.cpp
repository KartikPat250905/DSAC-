/*
Encapsulation (Data hiding \ Information hiding):
    It is like wrapping up data members and functions so that they work as same
    intity.We wrap them in a class.
    ->Fully encapsulated class- A class where all the data members are private 
      marked.
    
    Why encapsulation?
        ->Since the members are private marked it provides as with data hiding 
          ability which increase our security.
        ->If we want we can make the classes read only by only writing getters
          and not setters.
        ->It increases our code reusibility.
        ->It helps in unit testing.

Inheritance:
    A class(sub class) inheriting some or all properties of the parent/Super class.
    How to inherit:
    class <child name>: <Mode (public,private or protected)> <Parent class name>{

    };
    In the inheritance example we can access data members of human with class Male since Male inherits members
    from Human.

    Access Modifier         Mode of inheritance
    (Parent)                (Sub / Child class)
    public                  public                 -> public
    public                  private                ->private
    public                  protected              ->protected
    protected               public                 ->protected
    protected               private                ->private
    protected               protected              ->protected
    private                 public                 ->N.A
    private                 protected              ->N.A
    private                 private                ->N.A

    private member of any class cannot be inherited.
    Protected mode is similar to private but here u can access it inside a child class or can be accessed
    inside that particular function.We can use protected using getters and setters.
    
    Types of inheritance:
    1.Single inheritance
        You have a basic class (like the Car Blueprint) called the "base class" or "parent class." 
        Then, you create a new class (like the Sports Car Blueprint) called the 
        "derived class" or "child class" 
        that inherits everything from the base class and adds its own special features.
            A
            |
            B
    2.Multilevel inheritance
        A
        |
        B
        |
        C
        and so on.
        So here all functions of A can be used by the last class if not private.
    3.Multiple inheritance
        A    B
        |    |
        -----
          |
          C 
        Combination of 2 classes So inherites both A and B.
        Note:
        You can inherit multiples classes this way 
        class <New class name> : <Access modifier> <Parent1>, <Access modifier> <Parent2>{

        };
    4.Heirarchical inheritance
        One class serve as parent class for more than 1 child classes.
        Structure is like binary tree and parent is kind of the root node which is parent of all other nodes.
    5.Hybrid inheritance
        Combination of more than one inheritance types

    Inheritance Ambiguity :
    For example - class A and B have a function with same name and a class C 
    inherits both of them then when the function is called which of the 2 func 
    would be called.
    So to resolve this problem we use scope resolution operator '::'.
    obj.A::func();
    obj.B::func();
    So with the above line we can call the functions from specific classes.

Polymorphism:
    When a single thing is existing in multiple forms we can tell that polymorphism
    is there.Ex - father is son , husband and a brother.

    Types of Polymorphism:
    1.Compile time polymorphism - 
        Types of Compile time polymorphism

        1.Function overloading

        With function overloading we can create functions in a class with same
        name and there would be no problems.
        Ex- 
        void Sayhello()
        {
            cout<<"hi";
        }
        void Sayhello(string name)
        {
            cout <<"hi";
        }
        So here since we have different arguments to function call both Sayhello 
        functions are treated differently.If u change the return type of the 
        function it wont work.

        2.Operator overloading
        With this we can change the function of the operator for ex - + can be 
        used to substract.


    2.Run time polymorphism (a.k.a dynamic polymorphism) - 
    So when u have a function in parent as well as child with same name and
    different implementation than.If the the function is called than child
    function has more priority and if there is no such function in child than only
    the function in parent will be called.

Abstraction :
    Showing only essential information and hiding irrelevant information
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

class A{
    public:
    int a;
    int b ;
    int add()
    {
        return a + b;
    }
    void operator+(A &obj)
    {
        int value1 = this ->a;
        int val = obj.a;
        cout << "output"<<val - value1 << endl;
    }
};

int main()
{
    A obj1,obj2;
    obj1.a = 7;
    obj2.a = 4;
    obj1 + obj2;//Here obj1 is this -> and obj2 is input arg
}