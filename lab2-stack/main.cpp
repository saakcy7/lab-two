#include <iostream>
#include "stack.h"
#include "Linkedliststack.h"
#include "Arraystack.h"
using namespace std;
int main()
{

     cout << "--------------------------------------" << endl;

     cout << "Stack Implementation" << endl;
     cout << "--------------------------------------" << endl;
     
     stack *s = new Linkedliststack();
     int value;
     // checking if the stack is empty
     if (s->isEmpty())
     {
          cout << "Stack is empty" << endl;
     }
     else
     {
          cout << "Stack is not empty";
     }
    

     cout << "Pushing data into the stack" << endl;
     s->push(1);
     s->push(2);
     s->push(3);
     s->push(4);
     s->push(5);
     s->traverse();

     cout<<"popping data from stack"<<endl;
     s->pop(value);
     s->pop(value);
     cout<< endl;
     cout<<"top element is"<<endl;
     s->top(value);


<<<<<<< HEAD
     

}
=======
     s->push(12);
     s->push(13);
     s->push(14);
     s->push(15);
     cout<<"The elements in the stack are"<<endl;
     s->traverse();
}
>>>>>>> 6b27a6703a9b4f934c5929452c75048fd012fe23
