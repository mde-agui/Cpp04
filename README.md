# C++ Module 04 - Subtype Polymorphism, Abstract Classes, and Interfaces

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![42](https://img.shields.io/badge/42-Project-00BABC?style=for-the-badge)
![Score](https://img.shields.io/badge/Score-100%25-brightgreen?style=for-the-badge)

## 📋 Project Overview

C++ Module 04 is the fifth project in the 42 school C++ curriculum, focusing on **subtype polymorphism**, **abstract classes**, and **interfaces** in C++98. Through three exercises—**Polymorphism**, **I Don’t Want to Set the World on Fire**, and **Interface & Recap**—this module teaches advanced object-oriented programming (OOP) concepts, including virtual functions, deep copying, and memory management. It enforces strict coding standards: no forbidden functions (`printf`, `alloc`, `free`), explicit namespace usage, and no STL containers/algorithms. The module prepares students for complex C++ systems by ensuring robust error handling and leak-free code, verified with `valgrind`.

## ✨ Key Features

- **Exercise 00: Polymorphism**:
  - Implements an `Animal` base class with virtual `makeSound()` and destructor, and derived classes `Dog` and `Cat`.
  - Contrasts with `WrongAnimal`/`WrongCat` to show incorrect (non-virtual) polymorphism.
  - Demonstrates subtype polymorphism via base class pointers.
- **Exercise 01: I Don’t Want to Set the World on Fire**:
  - Adds a `Brain` class to `Dog` and `Cat`, requiring deep copying of 100 `std::string` ideas.
  - Tests array allocation/deallocation of `Animal` pointers.
- **Exercise 02: Abstract Class**:
  - Converts `Animal` to `AAnimal`, an abstract class with a pure virtual `makeSound()`.
  - Maintains deep copying and polymorphism from Exercise 01.
- **Exercise 03: Interface & Recap**:
  - Implements interfaces `ICharacter` and `IMateriaSource`, and abstract class `AMateria`.
  - Features `Character` (with 4-slot inventory and unequipped Materia management), `MateriaSource`, and concrete Materias (`Ice`, `Cure`).
  - Uses deep copying and polymorphism via `clone()` and `use()`.
- **C++98 Compliance**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions.
- **Norm Compliance**:
  - Adheres to 42’s coding standards, with newline-terminated outputs and no memory leaks (verified with `valgrind`).

## 🛠️ Prerequisites

- **Operating System**: UNIX-based (Linux, macOS, etc.).
- **Compiler**: `c++` (GCC or Clang, C++98 compatible).
- **Build Tool**: `make`.
- **Debugger**: `valgrind` for memory leak detection.

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/mde-agui/Cpp04.git
   cd Cpp04
   ```

2. Navigate to an exercise directory and compile:
   ```bash
   cd ex00
   make
   ```
   Repeat for `ex01`, `ex02`, `ex03`. This creates executables (e.g., `polymorphism`, `materia`).

## 📖 Usage

Each exercise is independent and run from its respective directory.

### Exercise 00: Polymorphism
```bash
cd ex00
./polymorphism
```
Output: Creates `Animal`, `Dog`, `Cat`, and `WrongAnimal`/`WrongCat`, showing correct (`Woof woof!`, `Meow meow!`) and incorrect (`Some generic wrong animal sound`) polymorphism.

### Exercise 01: I Don’t Want to Set the World on Fire
```bash
cd ex01
./brain
```
Output: Creates an array of `Animal` pointers (`Dog`, `Cat`), tests deep copying of `Brain`, and shows destructor calls.

### Exercise 02: Abstract Class
```bash
cd ex02
./abstract
```
Output: Similar to Exercise 01, but attempts to instantiate `AAnimal` fail, demonstrating its abstract nature.

### Exercise 03: Interface & Recap
```bash
cd ex03
./materia
```
Output:
```
* shoots an ice bolt at bob *
* heals bob's wounds *
Inventory full, skipping creation of ice materia
```

Check for memory leaks:
```bash
valgrind ./materia
```

## 📂 Project Structure

```
cpp_module_04/
├── ex00/                   # Polymorphism: Virtual functions and destructors
│   ├── Makefile
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongAnimal.cpp
│   ├── WrongCat.hpp
│   ├── WrongCat.cpp
│   └── main.cpp
├── ex01/                   # I Don’t Want to Set the World on Fire: Deep copying
│   ├── Makefile
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Brain.hpp
│   ├── Brain.cpp
│   └── main.cpp
├── ex02/                   # Abstract Class: Pure virtual functions
│   ├── Makefile
│   ├── AAnimal.hpp
│   ├── AAnimal.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Brain.hpp
│   ├── Brain.cpp
│   └── main.cpp
├── ex03/                   # Interface & Recap: Interfaces and complex system
│   ├── Makefile
│   ├── AMateria.hpp
│   ├── AMateria.cpp
│   ├── Ice.hpp
│   ├── Ice.cpp
│   ├── Cure.hpp
│   ├── Cure.cpp
│   ├── ICharacter.hpp
│   ├── Character.hpp
│   ├── Character.cpp
│   ├── IMateriaSource.hpp
│   ├── MateriaSource.hpp
│   ├── MateriaSource.cpp
│   └── main.cpp
└── README.md               # This file
```

## 🛠️ Makefile Commands

Each exercise has its own `Makefile` with the following commands:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Builds the executable (e.g., `polymorphism`, `materia`). |
| `make clean`  | Removes object files.                    |
| `make fclean` | Removes object files and executable.     |
| `make re`     | Rebuilds the project from scratch.       |

## 🔍 Technical Details

- **C++ Concepts Covered**:
  - **Subtype Polymorphism**: Enables derived class behavior through base class pointers using `virtual` (Ex00–03).
  - **Abstract Classes**: Enforce implementation with pure virtual functions (Ex02, Ex03).
  - **Interfaces**: Define contracts with pure virtual methods (Ex03).
  - **Deep Copying**: Copies dynamic memory (e.g., `Brain`, `AMateria`) to ensure independence (Ex01–03).
  - **Virtual Destructors**: Ensure proper cleanup in polymorphic hierarchies (Ex00–03).
  - **Memory Management**: Uses `new`/`delete` with `valgrind` verification (Ex00–03).
- **Constraints**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions (`printf`, `alloc`, `free`).
  - No STL containers/algorithms until Modules 08–09.
  - Outputs end with newlines.
- **External Functions**:
  - Allowed: `new`, `delete`, `std::string`, `std::cout`, `std::endl`.
- **Error Handling**:
  - Validates inputs (e.g., invalid indices, NULL pointers).
  - Manages memory for unequipped Materias in `Character` (Ex03).
  - Handles full inventories in `Character` and `MateriaSource` (Ex03).

## 📚 Explanation of Key C++ Concepts

### Subtype Polymorphism
- **Definition**: Subtype polymorphism allows a derived class object to be treated as its base class, with the derived class’s specific behavior invoked via virtual functions. In C++, this is achieved using the `virtual` keyword for dynamic dispatch.
- **Usage in Module 04**:
  - **Exercise 00**: `Animal`’s virtual `makeSound()` ensures `Dog::makeSound()` (`Woof woof!`) or `Cat::makeSound()` (`Meow meow!`) is called through an `Animal*` pointer. `WrongAnimal` shows incorrect behavior without `virtual`.
  - **Exercise 03**: `AMateria`’s virtual `use()` allows `Ice::use()` (`* shoots an ice bolt *`) or `Cure::use()` (`* heals wounds *`) via `AMateria*` in `Character`’s inventory.
- **Why It Matters**: Enables flexible, extensible code where new derived classes (e.g., new Materia types) can be added without modifying existing code.
- **Example**:
  ```cpp
  Animal* dog = new Dog();
  dog->makeSound(); // Outputs "Woof woof!" due to virtual function
  delete dog; // Calls ~Dog(), then ~Animal() due to virtual destructor
  ```

### Abstract Classes
- **Definition**: An abstract class cannot be instantiated and contains at least one pure virtual function (declared with `= 0`). It defines a contract that derived classes must implement.
- **Usage in Module 04**:
  - **Exercise 02**: `AAnimal` has a pure virtual `makeSound()` (`virtual void makeSound() const = 0;`), preventing instantiation and requiring `Dog` and `Cat` to implement it.
  - **Exercise 03**: `AMateria` is abstract with pure virtual `clone()` and `use()`, implemented by `Ice` and `Cure`.
- **Why It Matters**: Enforces a consistent interface across derived classes, ensuring required methods are implemented.
- **Example**:
  ```cpp
  // AAnimal* animal = new AAnimal(); // Error: cannot instantiate abstract class
  AAnimal* dog = new Dog();
  dog->makeSound(); // Outputs "Woof woof!"
  ```

### Interfaces
- **Definition**: In C++98, an interface is a pure abstract class with all methods as pure virtual (except a virtual destructor), defining a contract without implementation.
- **Usage in Module 04**:
  - **Exercise 03**: `ICharacter` defines `getName()`, `equip()`, `unequip()`, and `use()` as pure virtual, implemented by `Character`. `IMateriaSource` defines `learnMateria()` and `createMateria()`, implemented by `MateriaSource`.
- **Why It Matters**: Promotes loose coupling, allowing different implementations to share a common interface, used polymorphically via pointers.
- **Example**:
  ```cpp
  ICharacter* me = new Character("me");
  AMateria* ice = new Ice();
  me->equip(ice);
  me->use(0, *me); // Outputs "* shoots an ice bolt at me *"
  ```

## 📝 Notes

- **Implementation Details**:
  - Deep copying in `Dog`, `Cat`, `Character`, and `MateriaSource` uses `clone()` or new allocations to ensure independence.
  - `Character` manages unequipped Materias in an array, deleted in its destructor (Ex03).
  - `MateriaSource` deletes unlearned Materias when full (Ex03).
- **Testing**:
  - Test programs cover edge cases (e.g., full inventory, invalid indices, NULL pointers).
  - `valgrind` ensures no memory leaks in all exercises.
- **Evaluation**:
  - Outputs match subject requirements (e.g., `Woof woof!`, `* shoots an ice bolt *`).
  - Adheres to 42’s Norminette equivalent (manual checks for line length, naming).

## 📜 License

This project is licensed under the [MIT License](LICENSE).

## 👤 Author

**mde-agui**  
GitHub: [mde-agui](https://github.com/mde-agui)

---

⭐️ If you find this project useful, consider giving it a star on GitHub!
