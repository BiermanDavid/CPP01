# 🧟 C++ Module 01 — Summary  
A continuation of the introductory C++ track, focused on memory allocation, references, pointers to members, and basic class design.  
**Final Grade:** ⭐ *90/100*

---

## **Project Objectives**
The goal of this module was to deepen my understanding of C++ by working with memory allocation, references, pointers, and basic object‑oriented design. Each exercise introduced a small but important concept, helping me transition from C‑style thinking to more idiomatic C++. The module focused on writing simple classes, managing memory correctly, and understanding how objects behave when passed around or referenced.

---

## **Learning Outcome**
Working through these exercises helped me understand how C++ handles memory, how references differ from pointers, and how objects interact when passed by value or by reference. I learned how to design small classes, how to use constructors and destructors effectively, and how to manage arrays of objects. The later exercises introduced pointers to member functions and switch statements, which helped me understand more advanced control flow and function dispatching. Overall, this module strengthened my foundational C++ skills and prepared me for more complex object‑oriented work.

---

## **Skills Learned / Improved**
- Memory allocation with `new` / `delete`  
- References vs pointers  
- Constructors and destructors  
- Basic class design  
- Pointers to member functions  
- Switch statements  
- File handling with C++ streams  

---

## **Project Exercises**
All required exercises completed for the module:

### **Exercise 00 — BraiiiiiiinnnzzzZ**
- ✔️ Implemented `Zombie` class  
- ✔️ `announce()` method  
- ✔️ `newZombie()` (heap allocation)  
- ✔️ `randomChump()` (stack allocation)  
- ✔️ Destructor prints debug message  

### **Exercise 01 — Moar brainz!**
- ✔️ Implemented `zombieHorde(int N, std::string name)`  
- ✔️ Allocates N zombies in one block  
- ✔️ Initializes each zombie  
- ✔️ Proper deletion and leak‑free behavior  

### **Exercise 02 — HI THIS IS BRAIN**
- ✔️ Demonstrated pointer vs reference behavior  
- ✔️ Printed memory addresses and values  
- ✔️ Simple program to demystify references  

### **Exercise 03 — Unnecessary violence**
- ✔️ Implemented `Weapon`, `HumanA`, and `HumanB` classes  
- ✔️ `HumanA` holds a reference to a weapon  
- ✔️ `HumanB` holds a pointer to a weapon  
- ✔️ Demonstrated dynamic weapon type changes  

### **Exercise 04 — Sed is for losers**
- ✔️ Implemented file replacement program  
- ✔️ Reads file, writes `<filename>.replace`  
- ✔️ Replaces all occurrences of `s1` with `s2`  
- ✔️ No use of `std::string::replace`  
- ✔️ Error handling included  

### **Exercise 05 — Harl 2.0**
- ✔️ Implemented `Harl` class  
- ✔️ Four complaint levels: debug, info, warning, error  
- ✔️ Used pointers to member functions  
- ✔️ No if/else chains  

### **Exercise 06 — Harl filter**
- ✔️ Implemented log‑level filtering  
- ✔️ Displays messages from chosen level and above  
- ✔️ Uses `switch` for dispatch  
- ✔️ Executable named `harlFilter`  
