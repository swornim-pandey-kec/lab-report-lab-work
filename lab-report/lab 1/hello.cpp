#include <iostream>

using namespace std;
//struct defult dattype is public

struct s
{
private:
    int num;
    
public:
//helloworld.cpp
    void setData(int n)
    {
        num = 10;
    }
// this is function in class struct that is used to get the value of num

    void getData()
    {
        cout << num << endl;
    }
};
int main()
{
    s student;
    student.setData(10);

    student.getData();
    

    return 0;
}