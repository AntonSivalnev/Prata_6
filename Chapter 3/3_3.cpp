#include <iostream>

const int MINUTES_IN_DEGREE = 60;
const int SECONDS_IN_MINUTE = 60;

int main()
{
    float degrees, minutes, seconds;

    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees: _\b";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: _\b";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: _\b";
    std::cin >> seconds;

    std::cout << degrees << " degrees, " << minutes << " minutes and " << seconds <<
                 " seconds = " << degrees + minutes / MINUTES_IN_DEGREE +
                                            seconds / (SECONDS_IN_MINUTE * MINUTES_IN_DEGREE) <<
                std::endl;

    return 0;
}