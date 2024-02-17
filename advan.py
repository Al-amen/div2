import sys

input_path = r"..\Div2\input.txt"
if len(sys.argv) > 1:
    input_path = sys.argv[1]

numbers = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

calibration_values = []

with open(input_path, 'r') as file:
    for line in file:
        digits = []
        i = 0
        while i < len(line):
            c = line[i]
            if c.isdigit():
                digits.append(int(c))
            for j, n in enumerate(numbers):
                if len(line) >= i + len(n) and line[i:i+len(n)] == n:
                    digits.append(j + 1)
            i += 1
        calibration_values.append(digits[0] * 10 + digits[-1])

calibration_sum = sum(calibration_values)
print("Calibration Sum:", calibration_sum)