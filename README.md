# Circle Geometry Calculator

## Description
This C++ program calculates the **radius**, **diameter**, **circumference**, and **area** of a circle based on the coordinates of its **center** and a **point on the circle**.  
 
The problem requires using separate functions for:
- `distance()`
- `radius()`
- `circumference()`
- `area()`

The program uses the **distance formula** between two points in the Cartesian plane to determine the circle’s radius.

---

## Formula Reference

The following formulas are used:

$$
\text{Distance} = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
$$

$$
\text{Circumference} = 2 \pi r
$$

$$
\text{Area} = \pi r^2
$$

Where:

- $r$ = radius  
- $\pi$ = 3.1416

---

## Functions Overview

| Function Name | Description |
|----------------|-------------|
| `getDistance()` | Calculates the distance between two points in a 2D plane |
| `getRadius()` | Uses `getDistance()` to find the circle's radius |
| `calcCircumference()` | Calculates the circle’s circumference using $2\pi r$ |
| `calcArea()` | Calculates the circle’s area using $\pi r^2$ |

---

## Program Flow
1. The program prompts the user to enter:
   - The coordinates of the **center** `(x1, y1)`
   - The coordinates of a **point on the circle** `(x2, y2)`
2. It calculates:
   - Radius  
   - Diameter  
   - Circumference  
   - Area  
3. It displays the results neatly in the output.

---

## Concepts Demonstrated
- User-defined functions  
- Function calling and parameter passing  
- Mathematical operations using `<cmath>`  
- Constants and precision with `const double PI`

---

## Author
Created by Made Abel Noelanza
