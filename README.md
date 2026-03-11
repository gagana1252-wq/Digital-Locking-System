# Digital Locking System using 8051 Microcontroller

## Project Overview
The Digital Locking System using the 8051 microcontroller is a simple embedded security system designed to control access using a password. The system uses a keypad to enter a password, an LCD display to show system messages, and a buzzer to indicate incorrect password attempts.

When the correct password is entered, the system displays **Access Granted** on the LCD. If the password is incorrect, the LCD displays **Access Denied** and the buzzer is activated as an alert.

This project demonstrates interfacing of a keypad, LCD display, and buzzer with the 8051 microcontroller to build a basic electronic security system.

---

## Features
- Password based security system
- Keypad input for password entry
- LCD display for messages
- Buzzer indication for wrong password
- Simple embedded system implementation

---

## Components Required
- 8051 Microcontroller (AT89C51 / AT89S52)
- 4×4 Keypad
- 16×2 LCD Display
- Buzzer
- Crystal Oscillator
- Capacitors
- Resistors
- 5V Power Supply
- Breadboard and connecting wires

---

## Block Diagram

Keypad → 8051 Microcontroller → LCD Display  
                      ↓  
                      Buzzer  

---

## Working Principle
1. The user enters a password using the keypad.
2. The 8051 microcontroller reads the entered password.
3. The entered password is compared with the stored password.
4. If the password matches, the LCD displays **Access Granted**.
5. If the password is incorrect, the LCD displays **Access Denied** and the buzzer is activated.

---

## Applications
- Electronic Door Locks
- Office Security Systems
- Locker Security
- Restricted Access Areas

---

## Future Improvements
- Fingerprint authentication
- OTP based security system
- Multiple user passwords
- IoT based remote access control

---

## Author
ECE Embedded Systems Project  
Digital Locking System using 8051 Microcontroller
