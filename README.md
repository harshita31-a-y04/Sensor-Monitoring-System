# Sensor Monitoring System

A simple C-based monitoring system that validates sensor readings against predefined operating ranges.

Features:
- Temperature monitoring
- Pressure monitoring
- Voltage monitoring
- Boundary Value Analysis
- Robustness Testing

Technologies:
- C Programming

Concepts Used:
- Functions
- Conditional Statements
- Input Validation
- Software Testing

  ## Sample Output

===== SENSOR MONITORING SYSTEM =====

Enter Temperature (0-100): 50
Enter Pressure (10-200): 100
Enter Voltage (3-5): 4

===== SENSOR STATUS =====

Temperature: 50 C -> OK
Pressure: 100 PSI -> OK
Voltage: 4 V -> OK

## Boundary Value Testing Example

Input:
Temperature = -1
Pressure = 200
Voltage = 5

Output:
Temperature: -1 C -> ALERT! Out of Range
Pressure: 200 PSI -> OK
Voltage: 5 V -> OK
