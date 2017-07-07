#include <iostream>

const int HOURS_IN_DAY = 24;
const int MINUTES_IN_HOUR = 60;
const int SECONDS_IN_MINUTE = 60;

int main()
{
    int time, days, hours, minutes, seconds;

    std::cout << "Enter the number of seconds: _\b";
    std::cin >> time;
    days = time / (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
    seconds = time % (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
    hours = seconds / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
    seconds = seconds % (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
    minutes = seconds / (SECONDS_IN_MINUTE);
    seconds = seconds % (SECONDS_IN_MINUTE);

    std::cout << time << " seconds = " << days << " days, " << hours << " hours, " <<
                         minutes << " minutes, " << seconds << " seconds." << std::endl;

    return 0;
}