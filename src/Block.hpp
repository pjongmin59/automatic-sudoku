#ifndef __BLOCK__
#define __BLOCK__
#include <cassert>
#include <iostream>
#include <algorithm>

class Block {
private:
    int number;          // 해당 블록에 할당된 숫자 
                         // 0으로 초기화되며, 0일 시 미계산된 경우
                         //                  0이 아닐 시 계산된 것이다.
    bool fixed;          // true일 시 수정될 수 없다. 완전한 고정값
    int candidates[10] = {};   // 후보 숫자. 0번은 쓰지 않는다. 

public:
    // Constructors
    Block();
    Block(int number, bool fixed = false) ;
    Block(int* candidates, int size);


    // Getter and Setter
    int getNumber();

	bool setNumber(int number);

    bool getFixed();

    bool setFixed(bool fixed);

    bool isFixed();

    int* getCandidates();

    bool setCandidates(int* candidates, int size);


    // Method
    void printNumber()

    void printCandidates()

};

#endif