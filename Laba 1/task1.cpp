#include <iostream>
#define secondsPerMinute 60
#define minutesPerHour 60
#define hoursPerDay 24
#define daysPerWeek 7
#define daysPerYear 365

int main()
{
    std::cout << "Секунд в 1 добі " << secondsPerMinute * minutesPerHour * hoursPerDay << std::endl;
    std::cout << "Секунд в 1 тижні " << secondsPerMinute * minutesPerHour * hoursPerDay * daysPerWeek << std::endl;
    std::cout << "Секунд в 1 році " << secondsPerMinute * minutesPerHour * hoursPerDay * daysPerYear << std::endl;

    return 0;
}
