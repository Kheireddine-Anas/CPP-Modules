# 📖 C++ Module 07 - Templates & Arrays

This repository contains my solutions to the **C++ Module 07** exercises at 1337 School. The module focuses on **template programming**, emphasizing flexibility, reusability, and safety in C++.  

---

## 📂 Exercises Overview

### **Exercise 00: "Whatever"**
**Objective:**  
- Implement a set of **template functions**: `swap`, `min`, and `max`.
- Understand how templates allow generic programming by writing functions that work with different data types.

**Key Concepts:**  
- Template syntax: `template <typename T>`
- Function templates to compare and swap values.
- Using references to avoid unnecessary copies.

**Example Usage:**
```cpp
int a = 2, b = 3;
swap(a, b);   // a = 3, b = 2
std::cout << min(a, b);  // Outputs 2
std::cout << max(a, b);  // Outputs 3
```

---

### **Exercise 01: "Iter"**
**Objective:**  
- Implement a function template `iter` that applies a given function to each element of an array.
- Learn how to manipulate arrays generically with templates.

**Key Concepts:**  
- Template functions working with function pointers.
- Passing function arguments to template functions.
- Applying operations to each element in an array.

**Example Usage:**
```cpp
void printInt(int x) {
    std::cout << x << " ";
}

int arr[] = {1, 2, 3, 4};
iter(arr, 4, printInt);  // Output: 1 2 3 4
```

---

### **Exercise 02: "Array"**
**Objective:**  
- Implement a **class template `Array<T>`** that behaves like a dynamically allocated array.
- Learn memory management and exception handling with templates.

**Key Features:**
- Default constructor creates an empty array.
- Constructor with size initializes elements.
- Copy constructor and assignment operator (deep copy).
- Overloaded `[]` operator with bounds checking.
- `size()` function to get the number of elements.

**Example Usage:**
```cpp
Array<int> numbers(5);
numbers[0] = 42;
std::cout << numbers[0];  // Outputs 42
```

**Important Considerations:**
- Proper use of `new[]` and `delete[]` for memory management.
- Handling **out-of-bounds** access with exceptions.
- Templates allow for different data types to be used (e.g., `int`, `std::string`).

---

## 🛠️ Compilation and Execution

To compile the exercises, use the provided `Makefile`:

```bash
make      # Compiles the project
./array_test  # Run the executable (for ex02)
make clean  # Remove object files
make fclean # Clean everything including executable
```

---

## 📚 What I Learned

1. **Templates in C++**
   - How to write generic functions and classes.
   - Benefits of reusability and type flexibility.

2. **Memory Management**
   - Proper allocation and deallocation of dynamic memory.
   - Avoiding memory leaks and segmentation faults.

3. **Exception Handling**
   - Ensuring program stability with boundary checks.

---


## 🔗 Resources

- [C++ Templates Explained](https://en.cppreference.com/w/cpp/language/templates)
- [My GitHub Profile](https://github.com/Kheireddine-Anas)

---

_© 2024, Developed by Kheireddine Anas_
