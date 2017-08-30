#include <iostream>

const int slen = 30;
struct Student {
    char fullname[slen];
    char hobby[slen];
    int ooplevel;
};


int getinfo(Student pa[], int n);
void display1(Student st);
void display2(const Student * ps);
void display3(const Student pa[], int n);

int main()
{
    int class_size, entered;
    Student *ptr_stu;

    std::cout << "Enter class size: ";
    std::cin >> class_size;
    while (std::cin.get() != '\n')
        continue;

    ptr_stu = new Student[class_size];
    entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete [] ptr_stu;
    std::cout << "Done" << std::endl;

    return 0;
}

int getinfo(Student pa[], int n)
{
    int i;

    for (i = 0; i < n; ++i) {
        std::cout << "Enter a student`s name: ";
        std::cin.getline(pa[i].fullname, slen - 1);
        if ('\0' == pa[i].fullname[0])
            break;
        std::cout << "Enter a student`s hobby: ";
        std::cin.getline(pa[i].hobby, slen - 1);
        std::cout << "Enter a student`s OOP Level: ";
        std::cin >> pa[i].ooplevel;
        std::cin.get();
    }

    return i;
}

void display1(Student st)
{
    std::cout << "\nStudent:\t" << st.fullname << "\nHobby:\t\t" << st.hobby <<
                 "\nOOP Level:\t" << st.ooplevel << std::endl;
}

void display2(const Student * ps)
{
    std::cout << "\nStudent:\t" << ps->fullname << "\nHobby:\t\t" << ps->hobby <<
                 "\nOOP Level:\t" << ps->ooplevel << std::endl;
}

void display3(const Student pa[], int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << "\nStudent:\t" << pa[i].fullname << "\nHobby:\t\t" << pa[i].hobby <<
                     "\nOOP Level:\t" << pa[i].ooplevel << std::endl;
    }
}