#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open the calibration document file
    std::ifstream inputFile("input.txt");

    // Check if the file is opened successfully
    if (!inputFile.is_open())
    {
        std::cerr << "Unable to open the calibration document" << std::endl;
        return 1; // Return an error code
    }

    // Initialize the sum of calibration values
    int sum = 0;

    // Read each line from the file
    std::string line;
    while (std::getline(inputFile, line))
    {
        // Find the first and last digits in the line
        size_t firstDigitPos = line.find_first_of("0123456789");
        size_t lastDigitPos = line.find_last_of("0123456789");

        // Extract the first and last digits
        if (firstDigitPos != std::string::npos && lastDigitPos != std::string::npos && firstDigitPos != lastDigitPos)
        {
            char firstDigit = line[firstDigitPos];
            char lastDigit = line[lastDigitPos];

            // Convert the digits to a two-digit number
            int calibrationValue = (firstDigit - '0') * 10 + (lastDigit - '0');

            // Add the calibration value to the sum
            sum += calibrationValue;
        }
    }

    // Close the file
    inputFile.close();

    // Display the sum of calibration values
    std::cout << "Sum of calibration values: " << sum << std::endl;

    return 0;
}
