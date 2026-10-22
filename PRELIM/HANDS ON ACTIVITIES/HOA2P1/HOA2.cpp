#include <iostream>
#include <string.h>

class Student{
private: 
    std::string studentName; 
    int studentAge; 
public:
//Constructor
    Student(std::string newName = "John Doe", int newAge = 18) {
    studentName = newName;
    studentAge = newAge;
    std::cout << "Constructor was called" << std::endl;
}
//Destructor
~Student(){
    std::cout <<"Destructor was called" <<std::endl;
}

 //Copy Constructor
Student(const Student &copyStudent){
   std::cout << "Copy Constructor Called" << std::endl;
   studentName = copyStudent.studentName;
   studentAge = copyStudent.studentAge;
}
  
  //Copy Assignment Operator 
 Student& operator = (const Student& copyStudent ){
 std:: cout << "Copy Assignment operator called" << std:: endl;
    if (this != &copyStudent) {
    studentName = copyStudent.studentName;
    studentAge = copyStudent.studentAge;
    }
    return *this;
 }
 //Display Attributes
 void printDetails(){
    std :: cout<< this ->studentName << " " << this ->studentAge << std::endl;
 }
};

int main() {
    const size_t j = 5;
    Student studentList[j] = {};
    std::string namesList[j] = {"Carly", "Freddy", "Sam", "Zack", "Cody"};
    int ageList[j] = {15, 16, 18, 19, 16};
    for(int i = 0; i < j; i++){ //loop A
        Student *ptr = new Student(namesList[i], ageList[i]);
        studentList[i] = *ptr;
}
    for(int i = 0; i < j; i++){ //loop B
        studentList[i].printDetails();
}
return 0;
}