#include<iostream>
using namespace std;
class shooes
{
	private:
		
		char name[20]; 
		int prise;
		int size;
		
		
	public:
	
	void accept()
	{
		cout<<"\n enter shooes name";
		cin>>name;
		cout<<"\n enter prise";
		cin>>prise;
		cout<<"\n enter size";
		cin>>size;
	
		
    }
	void print()
	{
		cout<<"\t \n shooes name"<<name;
		cout<<"\n enter prise"<<prise;
		cout<<"\n enter size"<<size;
			cout<<"\n thanku for visiting";
                cout<<"\n thanku";
	}
};
    
    main()
    
    {
    	shooes a1;
    	a1.accept();
    	a1.print();
	}

	
	
	
	
	
	
	
	
	
	

