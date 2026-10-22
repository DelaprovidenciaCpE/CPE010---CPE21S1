#include<iostream>
#include<queue>

void display(std::queue<char> r);


int main() {

  std::queue<char> q;


  q.push('c');
  q.push('p');
  q.push('e');
  q.push('0');
  q.push('1');
  q.push('0');

   // display
   display(q);

 //empty
 std::cout<<"is it empty? " << q.empty()<<std::endl;
 //size
 std::cout<<"Size: "<<q.size()<<std::endl;
 //front
 std::cout<<"Front: "<<q.front()<<std::endl;
 //back
 std::cout<<"Back: "<<q.back()<<std::endl;
 //pop
 q.pop();
 //display
 display(q);
 //push another element
q.push('D');
q.push('A');
q.push('N');
q.push('E');
 //display
 display(q);
 return 0;
}

void display(std::queue<char> r){
    //create a copy of the queue
    std::queue<char> c = r;

    while(!c.empty()){
        std::cout<< " "<<c.front();
        c.pop();
    }
    std::cout<<"\n";

}