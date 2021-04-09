#include <iostream>
#include <vector>
#include "BigInt.cc"

int main() {
    std::vector<int> integerVector;
    integerVector.push_back(-1);
    integerVector.push_back(2);
    integerVector.push_back(2);

    std::vector<int> integerVector2;
    integerVector2.push_back(2);
    integerVector2.push_back(2);
    integerVector2.push_back(2);
    
    //integerVector2.push_back(1);

    BigInt A = BigInt(integerVector);
    BigInt B = BigInt(integerVector2);

    
    std::cout<<(A*B)<<std::endl;
    //bool answer = (A=B);

    //std::cout<< "TorF A = B: "<<answer<<std::endl;
    //BigInt answer = A - B;
    //answer.allNums();
    //cout << answer;
    //cout << answer.getFirstNum();
    
    return 0;
}