# **CPP Module 06 - Type Casting & Identification** 🚀  

Welcome to **CPP Module 06**, where we dive deep into type casting and dynamic type identification in C++! This module is all about **understanding and mastering type conversions**, which is a crucial skill for every C++ programmer.  

## **Table of Contents**  
- [Introduction](#introduction)  
- [Exercises Overview](#exercises-overview)  
  - [Exercise 00: ScalarConverter](#exercise-00-scalarconverter)  
  - [Exercise 01: Serialization](#exercise-01-serialization)  
  - [Exercise 02: Identify Real Type](#exercise-02-identify-real-type)  
- [How to Compile](#how-to-compile)  
- [Key Concepts](#key-concepts)  
- [Contributors](#contributors)  

---

## **Introduction**  
In this module, we explored different C++ casting methods and learned how to safely and efficiently convert data types. The key focus was on:  
- Understanding different casting operators.  
- Learning how to serialize and deserialize objects.  
- Identifying dynamic types without using forbidden functions like `typeid`.  

If you're ready to level up your C++ skills, let's dive in! 🎯  

---

## **Exercises Overview**  

### **Exercise 00: ScalarConverter** 🧙‍♂️  

#### **Goal:**  
The goal of this exercise is to implement a **ScalarConverter** that converts scalar types (`char`, `int`, `float`, `double`) to their respective string representations and vice versa. It also includes type checks to handle invalid conversions.  

#### **What we did:**  
1. Implemented a `ScalarConverter` class with the ability to convert scalar types.  
2. Handled edge cases like converting invalid or impossible values (e.g., converting a string to a non-numeric type).  
3. Focused on providing clean and readable output for each type.  

#### **Files:**  
- `ScalarConverter.hpp`  
- `ScalarConverter.cpp`  
- `main.cpp`  
- `Makefile`  

#### **Key Takeaway:**  
When converting between types, always handle possible errors and edge cases!  

---

### **Exercise 01: Serialization** 🔄  

#### **Goal:**  
In this exercise, we implemented a **Serializer** class that allows us to convert a pointer into an integer type (`uintptr_t`) and back. This is useful when storing or transmitting object addresses.  

#### **What we did:**  
1. Created a `Data` struct with some dummy values.  
2. Implemented two static functions in the `Serializer` class:  
   - `serialize(Data* ptr)` → Converts a pointer to an integer.  
   - `deserialize(uintptr_t raw)` → Converts an integer back to a pointer.  
3. Verified if the original pointer matches the deserialized pointer.  

#### **Files:**  
- `Serializer.hpp`  
- `Serializer.cpp`  
- `Data.hpp`  
- `main.cpp`  
- `Makefile`  

#### **Key Takeaway:**  
Serialization helps when you need to store or transmit pointer data safely. Be careful not to dereference invalid pointers after deserialization!  

---

### **Exercise 02: Identify Real Type** 🔍  

#### **Goal:**  
The goal here was to dynamically identify the type of an object at runtime **without using `std::typeinfo` (forbidden in this exercise).** Instead, we used C++'s **dynamic casting and exception handling.**  

#### **What we did:**  
1. Created an abstract base class `Base` and derived classes `A`, `B`, and `C`.  
2. Implemented three core functions:  
   - `Base* generate(void)` → Randomly creates an instance of `A`, `B`, or `C`.  
   - `void identify(Base* p)` → Identifies the object's type using pointers.  
   - `void identify(Base& p)` → Identifies the object's type using references.  
3. Ensured robust type checking with `dynamic_cast` and exception handling.  

#### **Files:**  
- `Base.hpp`  
- `Base.cpp`  
- `functions.hpp`  
- `functions.cpp`  
- `main.cpp`  
- `Makefile`  

#### **Key Takeaway:**  
C++ provides powerful runtime type identification through `dynamic_cast`. Proper seeding with `std::srand(std::time(0))` ensures random instance generation.  

---

## **How to Compile** 🛠️  

To compile and run the exercises, use the following commands:  

```bash
# Compile the exercise ex00, ex01 or ex02 with
make

#Run the executable
./Base   # For ex02
./Serializer   # For ex01
./ScalarConverter   # For ex00
```

To clean up object files and binaries:  

```bash
make clean
```

To clean up object files and binaries and the executable file:

```bash
make fclean
```

To recompile everything from scratch:  

```bash
make re
```

---

## **Key Concepts** 🧠  

### 1. **Casting in C++**  
- **`reinterpret_cast`** → Dangerous, used for low-level pointer conversions.  
- **`static_cast`** → Safe, used for compile-time conversions.  
- **`const_cast`** → Adds or removes `const` qualifiers.  
- **`dynamic_cast`** → Runtime-safe, checks if a pointer/reference belongs to a polymorphic class.  

### 2. **Serialization**  
- Converting complex objects to simpler formats (integers, strings) for storage or transmission.  
- **Use case:** Saving/restoring memory addresses.  

### 3. **Runtime Type Identification (RTTI)**  
- Identifying object types dynamically without built-in type information.  
- Using `dynamic_cast` instead of `typeid` for polymorphic class detection.  

---

**GitHub:** [Kheireddine-Anas](https://github.com/Kheireddine-Anas)  

---

Hope this README helps you in your learning journey! 🚀
