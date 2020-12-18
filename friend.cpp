#include <bits/stdc++.h>  
using namespace std;
class Hanh {
    int a = 10;  
	bool isVoBe = false;
    friend class Van;      
};  
class Van {  
  public:   
    void HienThi(Hanh &hanh) {  
        cout << "Gia tri cua a la: "<< hanh.a;
		cout   << "Hanh co vo be khong ? " << hanh.isVoBe;
    }  
};  
int main() { 
	
    Hanh l1, l2 , l3, l4;  
    Van v2;
	
	cout << Hanh::dem;
	  
//    l2.HienThi(l1);  
    return 0;  
}
