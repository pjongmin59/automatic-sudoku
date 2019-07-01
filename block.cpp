#include <cassert>

public class Block {
private:
    int number;         // 해당 블록에 할당된 숫자 
                        // 0으로 초기화되며, 0일 시 미계산된 경우
                        //                  0이 아닐 시 계산된 것이다.
    bool fixed;         // true일 시 수정될 수 없다. 완전한 고정값
    int candidate[9];   // 후보 숫자. 

public:
    // Constructors
    Block()                                 : number(0),        fixed(false)    { }
    Block(int number, bool fixed = false)   : number(number),   fixed(fixed)    { }

    // Getter and Setter
    int getNumber() {
		return this.number;
	}

	void setNumber(int number) {
		this.number = number;
	}

    bool getFixed(){
        return this.fixed;
    }

    void setFixed(bool fixed){
        this.fixed = fixed;
    }

    bool isFixed(){
        return getFixed();
    }

    int& getCandidate(){
        return this.candidate;
    }


}


int main(){
    b1 = Block(1, true);
    b2 = Block(2, true);
}