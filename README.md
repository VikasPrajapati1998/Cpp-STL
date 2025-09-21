# Cpp-STL
C++ Standard Template Library (STL) introduction and overview.

---

## **STL Overview**

STL (Standard Template Library) is a powerful feature of C++ providing  
built-in generic classes and functions.

---

### **1. CONTAINERS**

These are data structures that store collections of objects.

#### 1.1 Sequential Containers
- **vector**       : Dynamic array  
- **stack**        : LIFO data structure  
- **queue**        : FIFO data structure  
- **pair**         : Combines two values (not a full container)  

#### 1.2 Ordered Associative Containers
- **map**          : Key-value pairs, unique keys  
- **multimap**     : Allows duplicate keys  
- **set**          : Unique values  
- **multiset**     : Allows duplicate values  

#### 1.3 Unordered Associative Containers
- **unordered_map** : Hash table implementation  
- **unordered_set** : Hash table set  

#### 1.4 Nested Containers
- **vector<vector<int>>**                    : 2D array  
- **map<int, vector<int>>**                  : Mapping keys to lists  
- **set<pair<int, string>>**                 : Sorted unique pair values  
- **vector<map<int, set<int>>>**             : Complex nested structure  

---

### **2. ITERATORS**

Provide a way to access container elements via pointers.

- **begin(), end()**             : Start and end of container  
- **vector<int>::iterator it**   : Declaration  
- **Continuity**                 : Vectors (continuous), Sets/Maps (non-continuous)  

---

### **3. ALGORITHMS**

Pre-defined functions for processing data.

- **sort()**                     : Sorts a range  
- **upper_bound(), lower_bound()** : Based on binary search  
- **max_element(), min_element()**  
- **accumulate()**               : Sum of range  
- **reverse(), count(), find()**  
- **next_permutation(), prev_permutation()**  

---

### **4. FUNCTORS**

Objects that can be used as functions (i.e., classes with overloaded `()` operator).

---

## **Run the code**

### **Compile the code**
`g++ cpp-stl_01_intro.cpp -o cpp-stl_01_intro`

### **Run the exe**
`cpp-stl_01_intro.exe`

