#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student
{
    private:
        std::string  name;
        int  age;

    public: 
        Student();
        ~Student();

        void setName(std::string& s);
        void setAge(int i);

        std::string getName()const;
        int getAge() const; 
};


#endif