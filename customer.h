//header files from c+= std library

#include <iostream>
#include <string> 
#include <fstream> // for file handling for classes like ifstream and ofstream
#include <vector> // for dynamic arrays

using namespace std;

class Customer { //blueprint for storing and managing customer information
protected: //accessible in this and its child class 
    string name; // stores customer name
    int age; // stores customer age
    string contactInfo; // stores customer's contact

public:
    Customer() : age(0) {} //default constructor initializes objects when they're created - age is set to 0 while name & contact info is empty by default

    Customer(const string& name, int age, const string& contactInfo) //parameterized constructor initializes custoemr object with specific details
        : name(name), age(age), contactInfo(contactInfo) {}

//setter functions allow controlled modifications of private data memberss
    void setName(const string& name) {
        this->name = name; // "this" is a special poitner which points to the current object that called the function
    }

    void setAge(int age) {
        this->age = age;
    }

    void setContactInfo(const string& contactInfo) {
        this->contactInfo = contactInfo;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getContactInfo() const {
        return contactInfo;
    }

    virtual void addCustomer() = 0;

    virtual bool saveToFile() {
        ofstream fout;
        try {
            fout.open("Customer.txt", ios::app);
            if (fout.fail()) {
                throw runtime_error("Error opening file");
            }
            fout << "Name: " << name << "\nAge: " << age << "\nContact Info: " << contactInfo << endl;
        }
        catch (runtime_error& e) {
            cout << e.what() << endl;
            return false;
        }
        fout.close();
        return true;
    }
    string getCustomer(){
        string line="";
        line+="Name: "+name+"\nAge: "+to_string(age)+"\nContact: "+contactInfo;
        return line;
    }
    virtual void selectCustomer(){}
    virtual float calculateDiscount(){}
};