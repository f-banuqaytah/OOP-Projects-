#include<iostream>
#include<string>
using namespace std;


class clsPerson
{
    private:
    int _id, _age;
    string _first_name, _last_name, _email, _phone;
    
    string full_name()
    {
        return First_name() + " " +  Last_name();
    }

    public:
    clsPerson (int id, string first_name, string last_name, string email, string phone,int age)
    : _id(id), _first_name(first_name), _last_name(last_name), _email(email), _phone(phone),_age(age)
{
       
}


int getID()
{
    return _id;
}

void setFirst_name(string f_name)
{
   _first_name = f_name;
   

}

void setLast_name(string l_name)
{
    _last_name = l_name;
   
}

void setAge(int age)
{
    _age = age;
}

void setPhone(string phone)
{
    _phone = phone;
}

void setEmail(string email)
{
    _email = email;
}

string First_name()
{
    return _first_name;
}

string Last_name()
{
    return _last_name;
}

int Age()
{
    return _age;
}

string Phone()
{
    return _phone;
}

string Email()
{
    return _email;
}

void Print()
{
    cout << "Info:\n";
    cout<<"________________________\n";
    cout<<"ID\t:"<<_id<<"\n"<<"FirstName\t: "<<_first_name<<"\n"<<"LastName\t: "<<_last_name<<"\n"<<"Full Name\t: "<<full_name()<<"\n"<<"Email\t: "<<_email<<"\n"<<"Phone\t: "<<_phone<<"\n"<<"Age\t: "<<_age<<"\n";
    cout<<"________________________\n";
}

void sendEmail(string subject, string body)
{
    cout<<"\nThe Email message has been sent successfuly to the Email: "<<_email<<"\n";
    cout<<"Subject: "<<subject<<"\n";
    cout<<"Body: "<<body<<"\n";

}

void sendSMS(string text)
{
    cout<<"\nThe SMS message has been sent successfuly to the phone number: "<<_phone<<"\n";
    cout<<text;
}

};
int main()
{

  
    clsPerson p1 (1,"Ali","abdullah","A@gmail.com",56775, 25);
    p1.Print();
    p1.sendEmail("hello","How are you?");
    p1.sendSMS("hello Ali");
    p1.setFirst_name("Alawi");
    p1.setLast_name("Abdulhamid");
    p1.Print();

    
return 0;
};
