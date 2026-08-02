#include<iostream>
#include<string>
using namespace std;

class clsEmployee
{
private:
int _ID;
double _Salary;
string _FirstName, _LastName, _Title, _Email, _Phone, _Department;

string _FullName()
{
    return FirstName() + " " + LastName() ;
}
public:

clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, double Salary, string Department)
: _ID(ID), _FirstName(FirstName), _LastName(LastName), _Title(Title), _Email(Email), _Phone(Phone), _Salary(Salary), _Department(Department)
{

}

int getID()
{
    return _ID;
}

void setFirstName(string name)
{
    _FirstName = name;
}

void setLastName(string name)
{
    _LastName = name;
}

void setTitle(string title)
{
    _Title = title;
}

void setEmail(string email)
{
    _Email = email;
}

void setPhone(string phone)
{
    _Phone = phone;
}

void setSalary(double salary)
{
    _Salary = salary;
}

void setDepartment(string department)
{
    _Department = department;
}

//

string FirstName()
{
    return _FirstName;
}

string LastName()
{
    return _LastName;
}

string Title()
{
    return _Title;
}

string Email()
{
    return _Email;
}

string Phone()
{
    return _Phone;
}

double Salary()
{
    return _Salary;
}

string Department()
{
    return _Department;
}

// Methods

void SendEmail(string subject, string body)
{

    cout<<"\n ------------------------------- \n";
     cout<<"\t ==== Your Email Has Been Sent successfully! ==== \n";
    cout<<"To: "<<_Email<<"\n";
    cout<<"Subject: "<<subject<<"\n";
    cout<<"Body: "<<body<<"\n";
    cout<<"\n ------------------------------- \n";

}

void SendSMS(string text)
{
    cout<<"\n ------------------------------- \n";
    cout<<"\t ==== Your Text Has Been Sent successfully! ==== \n";
    cout<<"To: "<<_Phone<<"\n";
    cout<<"Text: "<<text<<"\n";
    cout<<"\n ------------------------------- \n";

}

void Print()
{
    cout<<"\n ------------------------------- \n\n";
    cout<<"Employee ID:"<<_ID<<"\n";
    cout<<"Full Name:"<<_FullName()<<"\n";
    cout<<"Email:"<<_Email<<"\n";
    cout<<"Phone:"<<_Phone<<"\n";
    cout<<"Salary:"<<_Salary<<"\n";
    cout<<"Department:"<<_Department<<"\n";
    cout<<"Title:"<<_Title<<"\n";
    cout<<"\n ------------------------------- \n";
}

};

int main()
{
   clsEmployee p1(101,"Ali", "Mohammed", "Eng", "ali@gmail.com","0657578",3674.89,"IT");
p1.SendEmail("get a job"," im looking for a position in your company");
p1.SendSMS("hello");
p1.Print();
p1.setFirstName("alawi");
p1.Print();

    return 0;
}
