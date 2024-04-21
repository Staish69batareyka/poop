/*Мини-калькулятор*/

/*#include <iostream>
using namespace std;

double calc(int, int, char);

int main()
{
    cout << calc(5, 9, '+') << endl;
    cout << calc(5, 9, '-') << endl;
    cout << calc(5, 9, '*') << endl;
    cout << calc(5, 9, '/') << endl;
    cout << calc(5, 9, '=') << endl;
}
double calc(int n, int m, char op)
{
    switch (op)
    {
    case '+': return n + m;
    case '-': return n - m;
    case '*': return n * m;
    case '/': return n / m;
    default: return 0;
    }
}*/

/*указатели и ссылки*/

/*#include <iostream>
 
void print(int*);
 
int main()
{
    int nums[] {1, 2, 3, 4, 5};
    print(nums);
}
 
void print(int *numbers)
{
    std::cout << "First number: " << *numbers << std::endl;
}*/

/*Ханойские башни*/

/*
#include <iostream>
 
using namespace std;
 
void hanoi(int disks, int start, int end, int buf_peg)
{
    if (disks != 0)
    {
        hanoi(disks-1, start, buf_peg, end);
 
        cout << start << " => " << end << endl;
 
        hanoi(disks-1, buf_peg, end, start);
    }
}
 
int main()
{
    setlocale(LC_ALL,"Ru");
    int start_peg, destination_peg, buffer_peg, plate_disks;
    cout << "Number of the first column: "; 
    cin  >> start_peg;
    cout << "Number of the end column: ";
    cin  >> destination_peg;
    cout << "Number of the intermediate column: ";
    cin  >> buffer_peg;
    cout << "Number of disks: ";
    cin  >> plate_disks;
 
    hanoi(plate_disks, start_peg, destination_peg, buffer_peg);
    return 0;
}*/

