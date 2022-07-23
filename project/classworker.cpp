#include<iostream>
using namespace std;
class worker
{
	private:
		string workna;
		int payr,sal;
		
	public:
	
	void accept()
	{
		cout<<"enter worker name\n";
		cin>>workna;
		cout<<"enter pay rate\n";
		cin>>payr;
		cout<<"enter sal\n";
		cin>>sal;
		cout<<"\nthanku for giving your information\n";
		
	}
	void print()
	{
		cout<<"\nworker name"<<workna;
		cout<<"\npay rate"<<payr;
		cout<<"\nsal"<<sal;
	
			}	
	
};
    main()
{
    worker a1[10];
   	int r,i;
    cout<<"\nenter reange";
    cin>>r;
    for(i=0;i<r;i++)
   {
   
    a1[i].accept();
   }
   
	
	  for(i=0;i<r;i++)
   {
	  
    a1[i].print();

   }
}
