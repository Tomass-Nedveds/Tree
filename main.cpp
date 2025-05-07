#include <iostream>
using namespace std;

class Tree{

};

class Node {
    public:
        int data;
        Node* left, *rigt;

        Node(int key) {
            data = key;
            left = nullptr;
            right = nullptr;
        }
};