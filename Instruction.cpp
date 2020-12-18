#include <bits/stdc++.h>  
using namespace std;
class Hanh {
	public:	
		static int dem;
		static void hello() {
		};
	public:
		Hanh() {
			dem++;
		}
};
int Hanh::dem = 0;

void Hanh::hello() {
	cout << "hello";
}
int main() 
{
	SV h1,h2,h3,h4;
	
	cout << Hanh::dem;
}
