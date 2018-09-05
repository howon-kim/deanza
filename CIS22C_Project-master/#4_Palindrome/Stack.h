//
//  Stack.h
//  Stack
//
//  Created by HOWON KIM on 1/20/16.
//  Copyright © 2016 HOWON KIM. All rights reserved.
//


#ifndef STACK_H_
#define STACK_H_

#include <string>
#include <cstddef>
using namespace std;


class Stack
{
public:
    /**constructors and destructors*/
    
    Stack();
    //initializes an empty stack
    //postcondition: an empty stack
    
    Stack(const Stack &stack);
    //initializes stack to have same elements as another stack
    //postcondition: a copy of stack
    
    ~Stack();
    //frees memory allocated to the stack
    //postcondition: memory for stack has been freed
    
    void pop();
    //removes an element from the top of the stack
    //postcondition: an element has been removed from the top of the stack
    
    void push(string data);
    //adds an element to the top of the stack
    //postcondition: an element added to the top of the stack
    
    /**accessors*/
    
    string get_top();
    //returns the element at the top of the stack
    //precondition: the stack is not empty
    
    int get_size();
    //returns the size of the stack
    
    /**additional stack operations*/
    void print();
    //prints the elements in the stack in a programmer-specified format to stdout
    
    bool operator==(const Stack &stack);
    //returns whether this stack is equal to another stack
    
    
private:
    struct Node
    {
        string data;
        Node* nextnode;
        Node(): nextnode(NULL), data(""){}
        Node(string data): nextnode(NULL), data(data){}
        
    };
    typedef Node* Nodeptr;
    
    Nodeptr top;
    int size;
    
};



#endif /* STACK_H_ */