

int main() {
   vector<int> v;
   int n;
   cin>>n;
   int x;
   // taking Input :
   for(int i = 0 ; i < n ; i++)  {
       cin>>x;
       v.push_back(x);
   }
   // sorting
   sort(v.begin(),v.end());
   // Printing :
   for(int i = 0 ; i < n ; i++){
       cout<<v[i]<<" ";
   }
    return 0; 
    
}
