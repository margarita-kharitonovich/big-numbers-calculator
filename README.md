# Big Integer Calculator (C++)

## Project Overview
This project is a custom implementation of a **big integer arithmetic library** with a graphical calculator interface.

It allows performing arithmetic operations on integers of arbitrary size that exceed standard data types limits.

---

## Features

The program supports:

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)
- Power (^) for integer exponents
- Factorial (!)
- High-precision division output (decimal precision control)

---

## Key Idea

The project implements a custom `big_digit` class that stores numbers as a vector of base 10⁹ blocks, enabling:

- Handling very large integers
- Efficient arithmetic operations
- Operator overloading for natural syntax

---

## Architecture

### Core components:

- `big_digit` class — arbitrary precision integer implementation
- Operator overloading for arithmetic and comparisons
- Long arithmetic algorithms (schoolbook multiplication, division, power via binary exponentiation)
- Windows Forms GUI (C++/CLI)

---

## UI Features

- Input two numbers
- Select operation from dropdown
- Display formatted result
- Load input from file
- Save result to file
- Precision control for division

---

## Project Structure

- `BigDigits.h / BigDigits.cpp` — big integer implementation
- `Calculator.cpp` / `Calculator.h` — GUI logic (Windows Forms)
- `main.cpp` — application entry point

---

## Tech Stack

- C++
- Windows Forms
- STL (vector, string)
- OOP + operator overloading

---

## Notes

This project was developed as an individual academic assignment on implementing arithmetic with large numbers.
