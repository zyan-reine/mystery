#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a : A) 
        cout <<a<<" ";

   cout<<endl;
}

//Mystery 1
void mystery1(auto& Data)
{
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for ( int i = 0 ; i < Data.size( ) ; i++)
  {
    for ( int j = 0 ; j < i ; j++)
	if ( Data[ i ] < Data[ j ] )
	    swap( Data[ i ] , Data[ j ] );

    print(Data);
  }//end outer for (this brace is needed to include the print statement)

}


//Mystery 2
void mystery2(auto& Data)
{
	cout<<endl<<"Mystery 2"<<endl<<"---------------------"<<endl;
	
	for (int i = 0; i < Data.size(); i++)
	{
		for (int j = 0; j <Data.size() -1; j++)
			if(Data[j+1] < Data[j])
				swap(Data[j+1], Data[j]);
				
			print(Data);
	}//end outer for (this brace is needed to include the print statement)
}

//Mystery 3
void mystery3(auto& Data)
{
	cout<<endl<<"Mystery 3"<<endl<<"---------------------"<<endl;
	
	for (int i = 0; i < Data.size(); i++)
	{
		for(int j = 0; j < Data.size(); j++)
			if(Data[j] < Data[i])
				swap(Data[i], Data[j]);
			
			print(Data);
	}//end outer for (this brace is needed to include the print statement)
}


//... Other mysteries...

int main()
{
    
  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);

}
