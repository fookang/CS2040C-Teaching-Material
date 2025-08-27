#include <iostream>

// TestClass definition
class TestClass
{
public:
  TestClass()
  {
    std::cout << "TestClass default constructor called" << std::endl;
  };
  ~TestClass()
  {
    std::cout << "TestClass destructor called" << std::endl;
  };
  TestClass(const TestClass &other) {
      std::cout << "TestClass copy constructor called" << std::endl;
  };
};

// Pass by value
void foo1(TestClass tc)
{
  std::cout << "foo1 called" << std::endl;
}

// Pass by pointer
void foo2(TestClass *tc)
{
  std::cout << "foo2 called" << std::endl;
}

// Pass by reference
void foo3(TestClass &tc)
{
  std::cout << "foo3 called" << std::endl;
}

// Pass by const reference
void foo4(const TestClass &tc)
{
  std::cout << "foo4 called" << std::endl;
}

int main()
{
  std::cout << "Create an instance of TestClass" << std::endl;
  TestClass tc;
  foo1(tc); // Pass by value (copying)
  foo2(&tc); // Pass by pointer
  foo3(tc);  // Pass by reference
  foo4(tc);  // Pass by const reference
  return 0;
}