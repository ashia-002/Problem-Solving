#include<iostream>
#include<string>
using namespace std;

//Structure of storing student name and id
struct mystructure{
    
    int ID;
    string name;
};

//Functioin to print data
void printdata(const mystructure& s){ //here const means we don't want to change the passing data by mistake.
    std::cout<<"The number is "<<s.ID<<std::endl;
    cout<<"The name is "<<s.name<<endl;
}

//Function to input data
void inoutdata(mystructure& s){
    cout<<"Input The Name: "<<endl;
    cin>>s.name;
    cout<<"Input The Number: "<<endl;
    cin>>s.ID;
}

// function to update the previous data
void update(mystructure& s, int newNum, const string& newString){//Here using const for string is bc we dont want the string to accidently change during value update
    s.name = newString;
    s.ID = newNum;
}

//function to compare to structure
bool compare(const mystructure& s1, const mystructure& s2){
    return (s1.name == s2.name) && (s1.ID == s2.ID);
}

//function to initialize the values after creating a object of the structure


int main(){
    //mystructure instance = { 56, "maisha"};
    mystructure student, student1;
    update(student, 66, "Varna");
    update(student1, 56, "Maisha");
    update(student1, 57, "mai");
    // inoutdata(student);
    printdata(student);
    printdata(student1);
    bool com = compare(student1, student);
    cout<<com<<endl;


    return 0;
}