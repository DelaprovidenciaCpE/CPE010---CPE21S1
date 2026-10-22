#ifndef SINGLY_LL_H //header file name
#define SINGLY_LL_H // file name
class mode{

};

template <typename T> // this makes the class accept data types
class SingleList{
    public:
    T data; // data of node
    SingleList<T> *next = nullptr; // stores the address of the next node


  
};

template <typename T>
void listTraversal(SingleList<T>* head) {
    while (head != nullptr) {
        std:: cout << head -> data;

        if (head->next != nullptr){
            std::cout <<" ->";
        }
        head = head-> next;
    }
    std::cout<<std::endl;
}


template<typename T>
void sllinsertHead(T newData, SingleList<T>** currentHead){
    //Allocate memory for the new node
    SingleList<T>* newNode = new SingleList<T>;
   //Put our data into new node
    newNode->data = newData;
   //Set Next of the new node to point to the previous head
    newNode->next = *currentHead;
    //Reset Herad to point to the new node
    *currentHead = newNode;
}

template<typename T>
void sllGeneralinsertion(T newData, SingleList<T> * prevNode) {
    if(prevNode==nullptr){
        std::cout<< "Previous node cannot be null ." <<std::endl;
        return;
    }
    //Allocate new node
    SingleList<T>* newNode = new SingleList<T>;
    //Store data in new node
    newNode->data = newData;
  //Point new node to the previous node was pointing to
    newNode->next =prevNode->next;
   // point previous node to the new node
    prevNode->next = newNode;


}
template <typename T>
void sllinsertEnd(T newData, SingleList<T>** head){
    //Allocate new node
    SingleList<T>* newNode = new SingleList<T>;

    SingleList<T>* currentNode = *head; 

    newNode->data = newData;

    newNode->next = nullptr;


    if(currentNode == nullptr) {
        currentNode == newNode;
        return;

    }

    //Traverse the list until next of the node is null
    while (currentNode->next != nullptr){
        currentNode = currentNode->next;

    }
    currentNode->next = newNode;

}

template <typename T>
void sllDelete(T findData, SingleList<T>** head){
    if(*head == nullptr) return;

    SingleList<T>* currNode = *head;
    SingleList<T>* prevNode = nullptr;
    

    while(currNode != nullptr &&currNode->data != findData){
        prevNode = currNode;
        currNode = currNode->next;
    }
    //delete the head node(the head node is the findData)
    if(currNode == nullptr){
        *head = currNode->next;
    }else{
        prevNode->next = currNode->next;
    }

    delete currNode;
}
template <typename T>
void sllDeleteList(SingleList<T>** head){
    SingleList<T>* currentNode = *head;

    while(currentNode != nullptr){
        SingleList<T>* temp = currentNode;
        currentNode = currentNode->next;
        delete temp;
    } 
    *head = nullptr;
}


#endif