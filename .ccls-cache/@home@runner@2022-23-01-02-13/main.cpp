/*
  pointers and functions
    1) pass a pointer to a function
    2) passing an array to a function *** (constant pointer that contains a memory address)
    3) return a pointer from a function
*/
#include <iostream>

//pass a pouinter to a function

void swap(int * n1, int * n2)
{
  int tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
  std::cout << "n1 = " << n1 << std::endl;
  std::cout << "n2 = " << n2 << std::endl;
  std::cout << std::endl << std::endl;
}

//pass an array to a function
int sum(int * nums, int size)
{
  int s = 0;
  if (nums)
  {
    for (int i = 0; i < size; i++)
    {
      s += nums[i];
    }
  }
  return s;
}

//return a pointer from a function
/* 
    you can return a pointer from a function
    but... its not a great idea to return a local 
    variable outside a fnuction
*/

int * get_nums() 
{
  static int nums[3] = {10,20,30};
  return nums;
}

int main() {
  int a = 100;
  int b = 200;

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << std::endl << std::endl;
  
  //swap a for b and the vice versa
  swap(&a,&b);
  
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << std::endl << std::endl;

  // pass an array to a function
  int num_array[3] = { 100, 200, 300};
  int sum_of_a = sum(num_array, 3);
  std::cout << "sum_of_a = " << sum_of_a << std::endl;
  std::cout << std::endl;

  //fetch a pointer from a function
  int * n = get_nums();
  if (n) 
  {
    std::cout << "n = " << n << std::endl;
    std::cout << "*n = " << *n << std::endl;
    std::cout << "*(n+1) = " << *(n+1) << std::endl;
    std::cout << "n[2] = " << n[2] << std::endl;
  }
  
  return 0;
}