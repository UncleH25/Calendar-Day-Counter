# 📅 Calender Day Counter

A C++ program that determines the number of days in a given month and year. It supports leap year detection for February and allows users to repeat the process for multiple inputs.

## 📄 Description

This program allows users to:
* Enter a **month** (1–12) and a **year**
* View the number of days in that month (taking leap years into account)
* Continue checking different months without restarting the program

It uses a `do...while` loop for repetition and a `switch` statement to determine the number of days based on the month. Leap years are accurately calculated using standard Gregorian calendar rules.

## ✨ Features

- **Leap Year Detection**: Accurately handles February with proper leap year calculation
- **User-Friendly Interface**: Simple prompts and clear output
- **Continuous Operation**: Check multiple months without restarting
- **Input Validation**: Handles month numbers 1-12
- **Standard Compliance**: Uses Gregorian calendar leap year rules

## 🚀 How to Use

1. **Compile the program**:
   ```bash
   g++ -o days_calculator main.cpp
   ```

2. **Run the executable**:
   ```bash
   ./days_calculator
   ```

3. **Follow the prompts**:
   - Enter a month (1-12)
   - Enter a year
   - View the result
   - Choose whether to continue

## 🧾 Example Output

```
Enter month (1-12): 2
Enter year: 2024
February 2024 has 29 days.

Do you want to check another month? (y/n): y

Enter month (1-12): 4
Enter year: 2023
April 2023 has 30 days.

Do you want to check another month? (y/n): n
Thank you for using the Days Calculator!
```

## 📊 Leap Year Rules

The program calculates leap years using the standard Gregorian calendar rules:
- Divisible by 4 **AND**
- If divisible by 100, must also be divisible by 400

**Examples**:
- 2024: Leap year (divisible by 4)
- 1900: Not a leap year (divisible by 100 but not 400)
- 2000: Leap year (divisible by 400)

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Calender-Day-Counter.git
cd calender-day-counter
```

3. From a terminal (in the extracted folder), run:
```
g++ -o counter main.cpp
./calender-day-counter
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
