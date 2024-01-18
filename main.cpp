#include <iostream>
#include <string>
#include <queue>
#include <memory>
using namespace std;


struct Node{
    int x;
    int y;

    Node(int a=0,int b=0);
};

Node::Node(int a,int b){
    this->x = a;
    this->y = b;
}


int square(int &x){
    x = x*x;
    return x;
}

int square(int &&x){
    x = x*x;
    return x;
}


int cube(int &x){
    x= x*x;
    return x;
}

int cube(int &&x){
    x = x*x;
    return x;
}



int main(){
    std::cout << Node(3,2).x << std::endl;

}