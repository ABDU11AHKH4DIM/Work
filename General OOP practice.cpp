#include <iostream>
#include <vector> 
using namespace std;
//Association
class patient{
  string pname;
  
  public:
        patient(string n):pname(n){}
        
        string getname(){
          return pname;
        }

};
class doctor{
  string name;
  public:
       doctor(string n):name(n){}
      
      void treatspatient(vector<patient*>& pvec){
        for(patient*p : pvec)
         if(p){
            cout<<"dr."<<name<<" treats patient "<<p->getname()<<endl;
           }
      }      
};

int main(){
  patient p1("Abdullah");
  patient p2("Ali");
  patient p3("Raza");
  
  vector<patient*> patients;
  
  patients.push_back(&p1);
  patients.push_back(&p2);
  patients.push_back(&p3);
  doctor  d1("Ahmed");
  
  d1.treatspatient(patients);
  
  return 0;
}
