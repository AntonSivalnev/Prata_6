#include <limits>
#include <iostream>

const int maker_len = 40;

struct Box {
    char maker[maker_len];
    float height;
    float width;
    float length;
    float volume;
};

void print_box(Box box);
void set_volume(Box &box, float volume);

int main()
{
    Box box;
    float volume;

    std::cout << "Enter box maker (max " << maker_len << " chars): ";
    std::cin.getline(box.maker, maker_len);
    std::cout << "Enter box height: ";
    std::cin >> box.height;
    std::cout << "Enter box width: ";
    std::cin >> box.width;
    std::cout << "Enter box length: ";
    std::cin >> box.length;
    std::cout << "Enter box volume: ";
    std::cin >> volume;
    set_volume(box, volume);

    std::cout << "You`ve entered: " << std::endl;
    print_box(box);

}

void print_box(Box box)
{
    std::cout << "Box:\t" << "Maker:\t" << box.maker << "\n\tHeight:\t" << box.height
              << "\n\tWidth:\t" << box.width << "\n\tLength:\t" << box.length
              << "\n\tVolume:\t" << box.volume << std::endl;
}

void set_volume(Box &box, float volume)
{
    box.volume = volume;
}