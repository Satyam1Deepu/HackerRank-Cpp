 class Student{
     private :
     int age, standard;
    string first_name, last_name;
    public :
    // Getters :
    int get_age(){
        return age;
    }
    string get_first_name(){
        return first_name;
    }
   string get_last_name(){
       return last_name;
   }
  int  get_standard(){
       return standard;
   }
   // To string :
  string  to_string(){   
      stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
   }
   // Setters :
    void set_age(int age){
        this-> age  = age;
    }
    void set_standard(int standard){
      this->standard = standard;  
    }
    void set_first_name(string first_name){
        this->first_name = first_name;
    }
    void set_last_name(string last_name){
        this->last_name = last_name;
    }
 };
