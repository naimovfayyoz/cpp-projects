#pragma once
#include <iostream>#include <string>#define MAX 100using namespace std;
void sorting(char arr[][MAX], int n)
{  char temp[MAX];
  for (int j = 0; j < n - 1; j++)  // Sorting strings using bubble sort 
  {  for (int i = j + 1; i < n; i++)
    {  if (strcmp(arr[j], arr[i]) > 0)
      {
        strcpy_s(temp, arr[j]);
        strcpy_s(arr[j], arr[i]);
        strcpy_s(arr[i], temp);
     }  }  }}
class Order
{
public:
  int id;
  string from_reg;
  string to_reg;
  double massInKg;
  Order(int i, string from, string to, double mass)
  {
    id = i;
    from_reg = from;
    to_reg = to;
    massInKg = mass;  }
  int getId() { return id; }
  int getmass() { return massInKg; }
  string getFrom() { return from_reg; }  string getTo() { return to_reg; }};
int order()
{  int choice;
  char from_region[][MAX] = { "Samarkand", "Tashkent", "Republic of Karakalpakistan",
  "Syrdarya","Surkhandarya","Khorezm","Namangan","Fergana","Kashkadarya","Navoi","Djizzak",
  "Andijan","Bukhara" };
  char to_region[][MAX] = { "Samarkand", "Tashkent", "Republic of Karakalpakistan",
  "Syrdarya","Surkhandarya","Khorezm","Namangan","Fergana","Kashkadarya","Navoi","Djizzak",
  "Andijan","Bukhara" };
  int n = sizeof(from_region) / sizeof(from_region[0]);
  //sorting regions
  sorting(from_region, n);
  sorting(to_region, n);
  for (int i = 0; i < n; i++)
    cout << i+1  << "Regions " << from_region[i] << endl;
  start:
  cout << "Choose from where you want to dostavka\n";
  int from;
  cin >> from;
  cout << "Choose to where you want to dostavka\n";
  int to;
  cin >> to;
  cout << "What is weight of your good?";
  double weight;
  cin >> weight;
  int id;
  cout << "What is the recieved id of your good?";
  cin >> id; Order order(id, from_region[from-1], from_region[to-1], weight);  cout << "Order's id " << order.getId()<<endl;  cout << "Order will be sent from " << order.getFrom() << endl;
cout << "Order will be recive to " << order.getTo() << endl;
  cout << "Order's mass " << order.getmass() << endl;
  int accept;
  start1:
  cout << "Do you accept?" << endl;
  cout << "1) yes\n";
    cout << "2 no\n";
    cin >> accept;
    if (accept == 1)
      return order.getmass();
    if (accept == 2)
      goto start;
    else {
      cout << "Plese input the correct one\n";
      goto start1;
    }
  system("pause");
  return id;
}
class Queue
{
public:
  int front, rear, size;
  unsigned capacity;
  int *array;
};
Queue *createQueue(unsigned capacity)
{
  Queue *queue = new Queue();
  queue->capacity = capacity;
  queue->front = queue->size = 0;

  queue->rear = capacity - 1;
  queue->array = new int[(
    queue->capacity * sizeof(int))];
  return queue;
}
int isFull(Queue *queue)
{
  return (queue->size == queue->capacity);
}
int isEmpty(Queue *queue)
{
  return (queue->size == 0);
}
int enqueue(Queue *queue, int id)
{
  if (isFull(queue))
  {
    for (int i = 0; i < queue->capacity; i++)
    {
      int item = queue->array[queue->front];
      queue->front = (queue->front + 1) % queue->capacity;
      queue->size = queue->size - 1;
    }
    cout << "Dequeueing the queue" << endl;
  
  }
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = id;
  queue->size = queue->size + 1;
  cout <<"The product with id:"<< id << " enqueued to queue\n";
  system("pause");
  return id;
}

int dequeue(Queue *queue)
{
  if (isEmpty(queue))
    return INT_MIN;
  int item = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;
  return item;
}

int front(Queue *queue)
{
  if (isEmpty(queue))
    return INT_MIN;
  return queue->array[queue->front];
}

int rear(Queue *queue)
{
  if (isEmpty(queue))
    return INT_MIN;
  return queue->array[queue->rear];
}
int registration()
{
  bool loop2 = true, loop1 = true;
  int choice;
  int start = 4, order = 4;
  char input[MAX];
  string input2;
  char lastname[][MAX] = { "Johnson", "Walton", "James", "White" };
  char firstname[][MAX] = { "John", "Dan", "Alex", "Mark" };
  string password[MAX] = { "J12345", "D12345", "A12345", "M12345" };
  string username[MAX] = { "Joker1", "Dice12", "wonder58","mg46" };
case1:
  system("cls");
  cout << "Please choose option\n"
    << "1. Sign in\n"
    << "2. Sign Up\n"
    << "3. View Users\n";
  cin >> choice;
  switch (choice)
  {
  case 1:
    system("cls");
    cout << "Sign In\n";
    while (loop1)
    {
      cout << "Input Username: ";
      cin >> input;
      for (int i = 0; i < 100; i++)
      {
        //username correct!
        if (input == username[i])
        {
          loop1 = false;
          while (loop2)
          {  cout << "Input password: ";
            cin >> input;
            for (int j = 0; j < 100; j++)
            {
              // password correct
              if (input == password[i])
              {
                order = j;
                cout << "Login sucessful!\n";
                loop2 = false;
                break;
              }
            }
            // password incorrect 
            if (loop2)
              cout << "Password incorrect!\n"; }  }}
      // username incorrect
      if (loop1)
        cout << "Username incorrect!\n";   }
    break;
  case 2:system("cls");
    cout << "Sign Up\n";
    cin.getline(firstname[start], MAX);
    cout << "Input first Name: ";
    cin.getline(firstname[start], MAX);
    cout << "Input laste Name: ";
    cin.getline(lastname[start], MAX);
    cout << "Input Username: ";
    getline(cin, username[start]);
    cout << "Input password: ";
    getline(cin, password[start]);
    start++;
    cout << "Signup successfully!\n";
    system("pause");
    goto case1;
    break;
  case 3:system("cls");
    cout << "Users in unsorted order: " << endl;
    for (int i = 0; i < start; i++)
    {
        cout << lastname[i] << " " << firstname[i] << endl;
    }
    //call bubble sorting function
    sorting(lastname, start);
    cout << "Users in sorted order: " << endl;
    for (int i = 0; i < start; i++)
    {cout << i + 1 << "th user is " << lastname[i]  << endl;
    }    system("pause");
    goto case1;break;

  }
  system("pause");
  return 0;
}
#include<iostream>
#include"registration.h"
using namespace std;

class Node {
public:
  int data;
  Node* next;
};
// This function prints contents of linked list 
// starting from the given node 
void printList(Node* n)
{
  while (n != NULL) {
    cout << n->data << " ";
    n = n->next;
  }
}
int calculatePrice(int mass) { cout << "Price of your order is: ";
  if (mass == 0) {    cout << 10000;  }
  else if (mass > 0) {cout << mass * 10000;
  }
  cout << "SUM" << endl;
  system("pause");
  return 0;
}
// Driver code 
int main()
{
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;
  Node* forth = NULL;
  // allocate 3 nodes in the heap 
  head = new Node();
  second = new Node();
  third = new Node();
  forth = new Node();
  Queue *queue = createQueue(10);  
head->data = registration(); // firstly user has to be registred!
  head->next = second;  
  second->data =  order();// Order details
  second->next = third;
  third->data =enqueue(queue,second->data); //Go to queue where it sends when the numb of orders will be equla to 10!
   third->next = forth;
  //forth->data = recieve(); //Go to queue where it sends when the numb of orders will be equla to 10!
   forth->data = calculatePrice(second->data);
   forth->next = NULL;
 printList(head);
  return 0;
}
