#include <iostream> // Including the Input/Output Stream Library

class Stack {
  private:
    int * array; // Dynamic array to store the stack elements
    int top; // Index of the top element
    int capacity; // Maximum capacity of the stack

  public:
    // Constructor to initialize the stack with a given size
    Stack(int size) {
      capacity = size;
      array = new int[capacity]; // Allocate memory for the stack
      top = -1; // Initialize top as -1 to indicate an empty stack
    }

    // Destructor to deallocate memory when the object is destroyed
    ~Stack() {
      delete[] array; // Free the dynamically allocated memory for the stack
    }

    // Function to push an element onto the stack
    void push(int value) {
      if (top == capacity - 1) { // Check for stack overflow
        std::cout << "Stack Overflow. Cannot push element: " << value << std::endl;
        return;
      }
      array[++top] = value; // Increment top and add the element to the stack
      std::cout << "Pushed element: " << value << std::endl; // Print the pushed element
    }

    // Function to pop an element from the stack
    void pop() {
      if (top == -1) { // Check for stack underflow
        std::cout << "Stack Underflow. Cannot pop from an empty stack." << std::endl;
        return;
      }
      int value = array[top--]; // Get the top element and decrement top
      std::cout << "Popped element: " << value << std::endl; // Print the popped element
    }
};

int main() {
  int size = 5; // Size of the stack
  std::cout << "Size of the stack: " << size << "\n" << std::endl; // Print the stack size
  Stack stack(size); // Create an instance of the Stack class with the specified size

  // Push elements onto the stack
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);

  // Pop elements from the stack
  std::cout << "\nPopped 6 elements from the above stack:" << std::endl;
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop(); // Attempting to pop from an empty stack

  return 0; // Returning 0 to indicate successful execution of the program
}
