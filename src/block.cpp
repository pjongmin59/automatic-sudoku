#include <cassert>
#include <iostream>
#include <algorithm>


// Constructors
Block::Block()                                 : number(0),        fixed(false)    { }
Block::Block(int number, bool fixed = false)   : number(number),   fixed(fixed)    { }
Block::Block(int* candidates, int size)                   : number(0),        fixed(false)    {
        setCandidates(candidates, size);
}

// Getter and Setter
int Block::getNumber() {
	return this->number;
}

bool Block::setNumber(int number) {
    if(!((number >= 0)&&(number <= 9)))
         return false;   
	this->number = number;
    return true;       	
}

bool Block::getFixed(){
    return this->fixed;
}

bool Block::setFixed(bool fixed){
    if(number == 0)
        return false;
    this->fixed = fixed;
    return true;
}

bool Block::isFixed(){
    return getFixed();
}

int* Block::getCandidates(){
    return candidates;
}

bool Block::setCandidates(int* candidates, int size){
    for (int i = 0; i < size; i++){
        int candidateNumber = candidates[i];

        if(!((candidateNumber >= 0)&&(candidateNumber <= 9)))
            return false;

        this->candidates[candidateNumber] = candidateNumber;
    }

    return true;
}


    // Method
void Block::printNumber(){
    std::cout << number << std::endl;
}

void Block::printCandidates(){
    for (int i = 1; i < 9; i++)
        std::cout << candidates[i] << ", ";
        
    std::cout << candidates[9] << std::endl;
}
};
