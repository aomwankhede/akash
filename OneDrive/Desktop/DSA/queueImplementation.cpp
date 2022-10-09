#include <iostream>
using namespace std;
class queue
{
  int *arr;
  int size;
  int inEnd = -1;
  int outEnd = 0;
public:
    queue (int a)
  {
    this->size = a;
  }
  void inqueu (int b)
  {
    if (!isFull ())
      {
	inEnd += 1;
	arr[inEnd] = b;
      }
    else
      {
	cout << "Queue Overflow" << endl;
      }
  }
  int dequeu ()
  {
        int p=arr[0];
    if (!isEmpty ())
      {
	for (int i = 0; i < inEnd; i++)
	  {
	    arr[i] = arr[i + 1];
	  }
	inEnd = inEnd - 1;
	return (p);
      }
    else
      {
	cout << "Queue Overflow" << endl;
	return 5050;
      }
  }
  bool isEmpty ()
  {
    if (inEnd == -1)
      {
	return true;
      }
    return false;
  }
  bool isFull ()
  {
    if (inEnd == size-1)
      {
	return true;
      }
    return false;
  }
  int peek ()
  {
    return arr[inEnd];
  }
};

int
main ()
{
  queue q (5);
  q.inqueu (4);
  q.inqueu (3);
  q.inqueu (1);
  q.inqueu (9);
  cout<<"Peek operation :"<<q.peek()<<endl;
  cout<<q.dequeu()<<endl;
  cout<<"Peek Opertion :"<<q.peek()<<endl;
  cout<<q.isEmpty()<<endl;
   q.inqueu (1);
  q.inqueu (9);
  cout<<q.isFull();
  q.dequeu(); q.dequeu(); q.dequeu(); q.dequeu(); q.dequeu();
  cout<<q.isEmpty()<<endl;
  return 0;
}
