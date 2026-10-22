#include <iostream>


int sumofTwoNumbers(int fNum, int lNum);
void sumTwoNum(int fNum, int lNum);

int main() {
    std::cout << "Output: " <<  sumofTwoNumbers(6,7)<<std::endl;
    sumTwoNum(7,11);

    return 0;  
}  

    int sumofTwoNumbers(int fNum, int lNum){
        int total = fNum + lNum;
       

        return total;

    }

    void sumTwoNum(int fNum, int lNum){

        int total = fNum + lNum;
        std :: cout << "void output: " << total << std :: endl;
    }
    


