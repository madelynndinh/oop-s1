#ifndef ADDITION_H
#define ADDITION_H

class Addition {
public:
    int add(int lhs, int rhs) {
        return lhs + rhs;
    }

    int substract(int lhs, int rhs){
        return lhs - rhs;
    }

    int multiple(int lhs, int rhs){
        return lhs * rhs;
    }

    int divide(int lhs, int rhs){
        return lhs / rhs;
    }
};

#endif 