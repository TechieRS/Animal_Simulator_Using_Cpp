# Animal Polymorphism Example in C++

This C++ program demonstrates **runtime polymorphism** using **abstract classes** and **virtual functions**. It showcases how different animal types can implement common behavior (`makeSound` and `move`) in their own unique ways.

## 🐾 Features

- Abstract base class `Animal` with pure virtual functions
- Derived classes `Dog`, `Cat`, and `Bird` override these functions
- Uses **pointers to base class** to call overridden functions at runtime
- Demonstrates core **OOP concepts** like **inheritance** and **polymorphism**

## 🔍 What You’ll Learn

- How to create and use abstract classes
- How virtual functions enable dynamic method binding
- How to use base class pointers for polymorphic behavior

## 💡 Sample Output

```
Dog says: Woof!
Dog runs on four legs.
Cat says: Meow!
Cat walks gracefully.
Bird says: Tweet!
Bird flies in the sky.
```

## 🚀 Getting Started

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/animal-polymorphism-cpp.git
    ```
2. Navigate to the project folder:
    ```bash
    cd animal-polymorphism-cpp
    ```
3. Compile the program:
    ```bash
    g++ main.cpp -o animal_demo
    ```
4. Run the program:
    ```bash
    ./animal_demo
    ```

## 📁 File Structure

```
animal-polymorphism-cpp/
├── main.cpp         # Source code
└── README.md        # Documentation
```

## ✅ To-Do

- [ ] Add more animal types (e.g., Fish, Horse)
- [ ] Create a menu-driven interface for user interaction
- [ ] Refactor to use smart pointers

## ✍️ Author
  
  [GitHub](https://github.com/TechieRs)

---

> This simple demo helps understand polymorphism in a fun and relatable way. Extend it, play with it, and make it your own!
