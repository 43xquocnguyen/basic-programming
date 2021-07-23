#include <iostream>
using namespace std;

enum DaysOfWeek
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

enum Color
{
    RED,
    GREEN,
    BLUE,
    WHITE
};

enum Animal
{
    CAT,
    DOG,
    HORSE,
    MONKEY,
    CHICKEN
};

int main() {
    DaysOfWeek dayOfWeek = SUNDAY;
    Color color = RED;
    Animal cat = CAT;
    return 0;
}