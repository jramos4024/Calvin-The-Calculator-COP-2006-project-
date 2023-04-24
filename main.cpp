#include <iostream>
#include <iomanip>
using namespace std;

void swap(int *x, int *y)
{
    int *temp = y;
    y = x;
    x = temp;
}

class my_salutations{
public:
    void my_farewell()
    {
        cout<<"Thank you for using Calvin the Calculator, Run the program to start again";
    }
    void my_greeting()
    {
        cout<<"Welcome, I am Calvin the Calculator."<<endl<<"What would you like me to do for you today:"<<endl<<
        "Find the area of a shape, Calculate GPA, or act as a simple arithmetic calculator?"<<endl<<
        "Enter 1 for area of a shape, 2 for GPA Calculator or 3 for arithmetic:  ";
    }
        };
int main() {
    int user_choice;
    my_salutations().my_greeting();
    cin >> user_choice;
    switch (user_choice) {
        case 1:
            char shape_name;
            float area,base,height,radius;
            cout<<"You have chosen the area calculator"<<endl;
            cout<<"Enter the shape you want to find the area of, C for Circle, T for Triangle, S for Square"<<endl;
            cin >> shape_name;
            if (toupper(shape_name)=='C')
            {
                cout<<"Enter the radius of the circle: "<<endl;
                cin >> radius;
                area = 3.14 * radius * radius;
                cout<<"The area of the circle is: "<<area<<endl;
            }
            else if (toupper(shape_name) == 'S')
            {
                cout<<"Enter a side length for the square: "<<endl;
                cin>>base;
                area = base*base;
                cout<<"The area of the square is: "<<area<<endl;
            }
            else if (toupper(shape_name) == 'T')
            {
                cout<<"Enter the Base of the Triangle: "<<endl;
                cin>>base;
                cout<<"Enter the Height of the Triangle: "<<endl;
                cin>>height;
                area = (base*height)/2;
                cout<<"The area of the triangle is: "<<area<<endl;
            }
            else
            {
                cout<<"Wrong input, try again";
                break;
            }
            break;
        case 2:
            int classes_count;
            float arr_classes[20];
            float answer;
            float gradePercentages;
            gradePercentages = 0;
            cout<<"Welcome to the GPA Calculator"<<endl;
            cout<<"How many classes do you want to calculate (Up to 20):";
            cin>>classes_count;

            for (int i=0;i<classes_count;i++)
            {
                cout<<"Please enter your percentage score for University class "<<(i+1)<<":"<<endl;
                cin>>arr_classes[i];
                gradePercentages = gradePercentages + arr_classes[i];
            }

            gradePercentages = (gradePercentages/100);
            answer = (gradePercentages*4)/classes_count;
            cout<<"Your GPA is: "<<fixed<<setprecision(2)<<answer;
                break;
        case 3:
            float num1,num2,result;
            char op,user_answer;
            bool user_continue;
            user_continue = true;
            while (user_continue)
            {
                cout << "You have chosen the arithmetic calculator: "<<endl;
                cout << "Enter the first number:";
                cin >> num1;
                cout << "Enter an operator(+,-,/,*)";
                cin >> op;
                cout << "Enter the second number:";
                cin >> num2;
                    if (op == '+')
                    {
                        result = (num1+num2);
                        cout<<result<<endl;
                        cout<<"Do you want to Continue (Y/N):";
                        cin>>user_answer;
                        if (toupper(user_answer)=='Y')
                        {
                            user_continue=true;
                            continue;
                        }
                        else
                        {
                            user_continue = false;
                            break;
                        }
                    }
                    else if (op == '-')
                    {
                        result = (num1-num2);
                        cout<<result<<endl;
                        cout<<"Do you want to Continue (Y/N):";
                        cin>>user_answer;
                        if (toupper(user_answer)=='Y')
                        {
                            user_continue=true;
                            continue;
                        }
                        else
                        {
                            user_continue = false;
                            break;
                        }
                    }
                    else if (op == '*')
                    {
                        result = (num1*num2);
                        cout<<result<<endl;
                        cout<<"Do you want to Continue (Y/N):";
                        cin>>user_answer;
                        if (toupper(user_answer)=='Y')
                        {
                            user_continue=true;
                            continue;
                        }
                        else
                        {
                            user_continue = false;
                            break;
                        }
                    }
                    else if (op == '/')
                    {
                        result = (num1/num2);
                        cout<<result<<endl;
                        cout<<"Do you want to Continue (Y/N):";
                        cin>>user_answer;
                        if (toupper(user_answer)=='Y')
                        {
                            user_continue=true;
                            continue;
                        }
                        else
                        {
                            user_continue = false;
                            break;
                        }
                    }
                    else
                        cout<<"wrong input";

                    break;
                }
            default :
                my_salutations().my_farewell();
                return 0;
    }
}