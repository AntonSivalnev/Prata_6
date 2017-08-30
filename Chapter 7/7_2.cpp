#include <iostream>

int array_size = 10;

void get_scores(int *scores);
void print_scores(const int *scores);
float get_average(const int *scores);

int main()
{
    int scores[10];

    std::cout << "Enter " << array_size << " golf scores (negative number to stop): ";
    get_scores(scores);
    std::cout << "Scores given are: ";
    print_scores(scores);
    std::cout << "Average score is: " << get_average(scores) << std::endl;

    return 0;
}

void get_scores(int *scores)
{
    int score, i = 0;

    std::cin >> score;
    while (score > 0) {
        scores[i++] = score;
        if (i >= array_size)
            break;
        std::cin >> score;
    }

    array_size = i;
}

void print_scores(const int *scores)
{
    for (int i = 0; i < array_size; ++i) {
        std::cout << "\t" << scores[i];
    }

    std::cout << std::endl;
}

float get_average(const int *scores)
{
    float sum = 0;

    if (array_size) {
        for (int i = 0; i < array_size; ++i) {
            sum += scores[i];
        }

        return sum / array_size;
    } else
        return 0;
}