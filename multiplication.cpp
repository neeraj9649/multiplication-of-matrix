#include <iostream>
#include<cmath>
using namespace std;
 int main()
 {
 	int x,y,p,q,i,j,k,sum=0;
 	cout <<"enter the no of row and column : ";
 	cin >> x>>y;
 	cout << "enter the no of row and column of second matrix : ";
 	cin >> p>>q;
 	if(y==p)
 	{	
	 cout << "the multiplication is possible"<<endl;
	 int mat1[10][10],mat2[5][5],mat3[5][5];
 	for(i=0;i<x;i++)
 	{
 		for(j=0;j<y;j++)
 		{
 			cout << "enter the element"<<endl;
 			cin >>mat1[i][j];
		 }
	 }
	 cout << "\n";
	 //printing of matrix
	 for(i=0;i<x;i++)
	 {
	 	for(j=0;j<y;j++)
	 	{
	 		cout <<mat1[i][j]<< " ";
		 }
		 cout << "\n";
	 }
	 cout <<"enter the elemnet of second matrix" <<endl;
	 //getting of second matix
	 for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		cout << "enter the element : "<<endl;
	 		cin >> mat2[i][j];
		 }
	 }
	 //printing of second matrix
	 for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		cout << mat2[i][j]<<" ";
		 }
		 cout << "\n";
	 }
	 // multiplying of matrix
	 for(i=0;i<x;i++)    
    {    
for(j=0;j<q;j++)    
{    
mat3[i][j]=0;    
for(k=0;k<y;k++)    
{    
mat3[i][j]+=mat1[i][k]*mat2[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<x;i++)    
{    
for(j=0;j<q;j++)    
{    
cout<<mat3[i][j]<<" ";    
}    
cout<<"\n";    
}    
	 
}
    else
    cout << "the multiplication is not possible";
 	return 0;
 }
