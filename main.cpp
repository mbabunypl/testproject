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