# 🎬 Movie Ticket Booking System (C++)

A simple console-based movie ticket booking system written in C++ using fundamental DSA concepts like 2D arrays, loops, and conditionals.

---

## 📌 Problem Statement

Design a C++ program to simulate a basic movie ticket booking system. The system allows users to:

- View the current seating chart.
- Book an available seat.
- Prevent double booking.
- Exit the application gracefully.

---

## 💡 Concepts Used

- **2D Array**: Represents the seating chart.
- **Loops**: For input handling and navigation.
- **Conditionals**: To validate and process booking logic.

---

## 🏟️ Assumptions

- The theater has **5 rows** and **5 columns** (25 seats total).
- Seats are denoted as:
  - `'O'` = Open
  - `'X'` = Booked

---

## 🚀 Features

- 📋 Display current seat availability.
- 🎟️ Book seats if they are available.
- ❌ Prevent booking of already reserved seats.
- ✅ Simple menu-driven interface.

---

## 🧾 How It Works

```cpp
char seats[5][5]; // 2D array for seat layout
