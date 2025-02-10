# C++ Module 08  
**Templated Containers, Iterators, and Algorithms**  

---

## 📖 Table of Contents
- [Introduction](#-introduction)
- [Exercise 00: Easy Find](#-exercise-00-easy-find)
- [Exercise 01: Span](#-exercise-01-span)
- [Exercise 02: Mutated Abomination](#-exercise-02-mutated-abomination)
- [How to Compile](#-how-to-compile)

---

## 🚀 Introduction  
This module focuses on **STL containers, iterators, and algorithms** in C++. The exercises emphasize template programming, efficient data management, and extending STL containers.  

---

## 🎯 Exercise 00: Easy Find  
### Objective  
Write a function template `easyfind` that searches for the first occurrence of an integer in a container.  

### Key Features  
- **Template Function**: Works with any container type (e.g., `std::vector`, `std::list`).  
- **Exception Handling**: Throws `std::exception` if the value is not found.  
- **STL Algorithms**: Uses `std::find` internally.  

### Implementation  
- **Header File**: `easyfind.hpp`  
- **Code Structure**:  
  ```cpp
  template <typename T>
  typename T::iterator easyfind(T& container, int value) {
      typename T::iterator it = std::find(container.begin(), container.end(), value);
      if (it == container.end()) throw std::exception();
      return it;
  }

## 🎯 Exercise 01: Span
### Objective

Create a Span class to store integers and compute the shortest/longest span between elements.
### Key Features

- **Dynamic Storage**: Uses std::vector<int> internally.

- **Range Insertion**: Adds multiple elements via iterators.

- **Exception Safety**: Throws errors for overflows or insufficient elements.

### Implementation

**Class Structure**:
```cpp
class Span {
private:
	unsigned int maxSize;
	std::vector<int> numbers;
public:
	Span(unsigned int N);
	void addNumber(int num);
	template <typename Iterator>
	void addNumbers(Iterator begin, Iterator end);
	int shortestSpan() const;
	int longestSpan() const;
};
```

**Span Calculation**:

- **Shortest Span**: Sort the vector and compare adjacent elements.

- **Longest Span**: Subtract the first and last elements after sorting.

## 🎯 Exercise 02: Mutated Abomination
### Objective

Make std::stack iterable by creating a MutantStack class.

### Key Features

**Inherits from** std::stack: Retains all stack operations (push, pop, top).

**Iterator Support**: Exposes iterators of the underlying container (std::deque by default).

### Implementation

- **Header File**: MutantStack.hpp

- **Iterator Access**:
```cpp
template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};
```
## 🔧 How to Compile

### Exercise 00
```bash
cd ex00 && make && ./easyfind
```

### Exercise 01
```bash
cd ex01 && make && ./Span
```
### Exercise 02
```bash
cd ex02 && make && ./MutantStack
```

## 🧠 Key Learnings

- **Template Programming**: Writing generic code for multiple container types.

- **STL Algorithms**: Leveraging std::find and std::sort for efficient operations.

- **Container Adapters**: Extending std::stack to expose its underlying container.

- **Exception Handling**: Robust error management for edge cases.
