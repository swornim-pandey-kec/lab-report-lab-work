//consider two clases one represting first name another representing last name now use a bridge function that dynamically concatinate first name and lastname of two classes .
#include<iostream>
#include<string>
using namespace std;


class surname;


class actualname{
    string nammee;
    public:
    actualname(){
        nammee="NULL";
    }
    actualname(string name):nammee(name){} //parametrizedd constructor
    ~actualname(){}//destructor
    void keepdata(){//takes input of name like swornim
        cout<<"Enter your first name :";
        cin>>nammee;
    }
    friend  string concatinate(const actualname&,const surname& );
};


class surname{
    string lname;
    public:
    surname(){
        lname="NULL";
    }
    surname(string name):lname(name){}
    ~surname(){}
    void setdata(){
        cout<<"Enter your Last name :";
        cin>>lname;
    }
    friend string concatinate(const actualname&,const surname& );


};




string concatinate(const actualname& f,const surname& l){
    string final= f.nammee+" "+l.lname;
    return final;
}




void presentdata(string a){
    cout<<"Your name is :"<<a<<endl;
}
int main(){
    actualname f;
    surname l;
    f.keepdata();
    l.setdata();
    string a=concatinate(f,l);
    presentdata(a);


}





