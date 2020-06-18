/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  30 days of code/day 4 class
 */
using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge>=0) age=initialAge;
        else
        {
            age=0;
            cout<<"Age is not valid, setting age to 0."<<endl;
        }

    }

    void Person::amIOld(){
        
        if(age<13) cout<<"You are young."<<endl;
        else if(age>=13&&age<18) cout<<"You are a teenager."<<endl;
        else if(age>=18) cout<<"You are old."<<endl;

    }

    void Person::yearPasses(){
        ++age;
    }
