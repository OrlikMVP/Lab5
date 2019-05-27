#include <iostream>
#include <string>
#include <cmath>
bool is_palindrom(int n1,int n2){
    int sum=n1*n2;
    std::string str,str1=std::to_string(sum);
    for(int i=str1.size()-1;i>=0;i--)
         str.push_back(str1[i]);
    return str==str1?true:false;
}

bool prime(int n){
    for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
}
int main(){
    for(int i=1000;i<9999;i++){
        for(int j=1000;j<9999;j++){
            if(prime(i) && prime(j))
                if(is_palindrom(i,j))
                    std::cout<<i<<"*"<<j<<" = "<<i*j<<std::endl;
        }
    }
    return 0;
}