int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
   cin>>n;
   if(n<=9 && n >= 1){
       if(n==1)
       cout<<"one";
       if(n==2)
       cout<<"two";
       if(n==3)
       cout<<"three";
       if(n==4)
       cout<<"four";
       if(n==5)
       cout<<"five";
       if(n==6)
       cout<<"six";
       if(n==7)
       cout<<"seven";
       if(n==8)
       cout<<"eight";
       if(n==9)
       cout<<"nine";
   }else{
       cout<<"Greater than 9";
   }
    return 0;
}
