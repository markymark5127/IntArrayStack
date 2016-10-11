//
//  IntArrayStack.cpp
//

#include "IntArrayStack.h"
#include "Flags.h"
#include <csetjmp>
#include <csignal>
using namespace std;
/* **************************************************************** */

#if CONSTRUCTOR || ALL
// TODO: Constructor
IntArrayStack::IntArrayStack(void)
{
    cout<<"constructor being created"<<endl;
    top = -1;
    capacity = 1;
    stack = new int[0];

}
#endif

/* **************************************************************** */

#if DESTRUCTOR || ALL
// TODO: Destructor
IntArrayStack::~IntArrayStack(void)
{
    cout<<"constructor deleted"<<endl;
    delete[] stack;
}
#endif

/* **************************************************************** */

#if PUSH || ALL
// TODO: push()
void IntArrayStack :: push(int x)
{
    top++;
    if(top>=capacity)
    {
        resize(capacity*2);
    }
    stack[top] = x;
}
#endif

/* **************************************************************** */

#if POP || ALL
// TODO: pop()
int IntArrayStack :: pop(void)
{
    int moscola = 0;
    if( isEmpty( ) )
    {
        moscola = -1;
    }
    else
    {
        moscola = stack[top];
        top--;
    }
    return moscola;
}

#endif

/* **************************************************************** */

#if PEEK || ALL
// TODO: peek()
int IntArrayStack :: peek(void)
{
    int peeker = stack[top];
    if(isEmpty())
    {
        peeker = -1;
    }
    return peeker;
}
#endif

/* **************************************************************** */

#if ISEMPTY || ALL
// TODO: isEmpty()
bool IntArrayStack :: isEmpty(void)
{
    bool result = 0;
    if(top == -1)
    {
        result = 1;
    }
    return result;
}
#endif

/* **************************************************************** */

#if EMPTYSTACK || ALL
// TODO: emptyStack()
void IntArrayStack :: emptyStack()
{
    resize(1);
    top = -1;
}
#endif

/* **************************************************************** */

#if RESIZE || ALL
// TODO: resize()
void IntArrayStack :: resize(int newCapacity)
{

    int* newArr = new int[newCapacity];

    for(int i=0; i<capacity; i++)
    {
        newArr[i] = (stack[i]);
    }

    capacity = newCapacity;
    delete [] stack;
    stack = newArr;
}

#endif

/* **************************************************************** */
// Do NOT modify anything below this line
/* **************************************************************** */

#ifndef BUILD_LIB
void IntArrayStack::printStack()
{
    std::cout << std::endl;
    std::cout << "Current array size: " << capacity << std::endl;
    std::cout << "Number of ints in stack: " << top+1 << std::endl;
    for (int i=top; i >= 0; i--)
    {
        std::cout << stack[i] << " ";
    }
    std::cout << std::endl;
}


int IntArrayStack::getCapacity()
{
    return capacity;
}


int IntArrayStack::getSize()
{
    return top+1;
}


int IntArrayStack::getTop()
{
    return top;
}


void IntArrayStack::toArray(int* arr)
{
    for (int i=top; i >= 0; i--)
    {
        arr[i] = stack[i];
    }
}
#endif

/* **************************************************************** */

