#include<iostream>
using namespace std;
int ans;
int add(int n1, int n2);
int dif(int n1, int n2);
int mul(int n1, int n2);
int divide(int n1, int n2);


int main()
{
	
	char op;
	float n1, n2;
	
	cin>>op;
	
	cin >> n1 >> n2;
	
	switch (op) 
	{
		case '+':
		   cout << add(n1, n2);
		   break;
		   
		case '-':
		   cout << dif(n1, n2);
		   break;
		
		case '*':
		   cout << mul(n1, n2);
		   break;
		
		case '/':
		   cout << divide(n1, n2);
		   break;
		   
		default :
		   cout << "Invalid";
		   
	}
        return 0;
        
}

int add(int n1, int n2)
{
	ans = n1 + n2;
	return ans;
}

int dif(int n1, int n2)
{
	ans = n1 - n2;
	return ans;
}

int mul(int n1, int n2)
{
	ans = n1 * n2;
	return ans;
}

int divide(int n1, int n2)
{
	ans = n1 / n2;
	return ans;
}

int arr()
{
	
    int a[3] = { 1,2,3 };
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}