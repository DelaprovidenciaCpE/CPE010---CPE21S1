#include <iostream>


int sumofTwoNumbers(int fNum, int lNum);
void sumTwoNum(int fNum, int lNum);

int main() {
    std::cout << "Output: " <<  sumofTwoNumbers(27, 10)<<std::endl;
    sumTwoNum(8, 10);

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
    


