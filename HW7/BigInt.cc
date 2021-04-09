/*
 * Name: Sinan Bayati
 * Date: 4/6/2021
 * HW Number: 7
 * ID: 01129570
 */


#include "BigInt.h"
#include <iostream>
#include <algorithm>
#include <vector>
BigInt::BigInt(const std::vector<uint8_t> &v)
{

    num.resize(v.size());
    for (uint64_t i = 0; i < v.size(); i++)
    {
        num[i] = v[i];
    }
}

BigInt::BigInt(const std::vector<int> &v)
{

    num.resize(v.size());
    for (uint64_t i = 0; i < v.size(); i++)
    {
        num[i] = v[i];
    }
        if(v[0]==-1){
        negative = 1;
        num.erase(num.begin());
    }
     //now remove leading zeros
    while(num[0] == 0 && num.size()>1){
        num.erase(num.begin());
    }


}

BigInt::BigInt(const std::vector<char> &v)
{

    num.resize(v.size());
    for (uint64_t i = 0; i < v.size(); i++)
    {
        num[i] = v[i]-'0';
    }
    if(v[0]=='-'){
        negative = 1;
        num.erase(num.begin());
    }

    //now remove leading zeros
    while(num[0] == 0 && num.size()>1){
        num.erase(num.begin());
    }
}

BigInt::BigInt(const char *c, uint64_t len)
{
    num.resize(len);
    for (int i = 0; i < len; i++)
    {
        num[i] = c[i]-'0';
    }
    if(c[0]=='-'){
        negative = 1;
        num.erase(num.begin());
    }

    //now remove leading zeros
    while(c[0] == 0 && num.size()>1){
        num.erase(num.begin());
    }

}

bool operator==(const BigInt& b1, const BigInt& b2)
{
    if(b1.negative!=b2.negative){
        return false;
    }

    if(b1.num.size() != b2.num.size()){
        return false;
    }
    else{
        for(int i = 0; i < b1.num.size(); i++){
            if(b1.num[i] != b2.num[i]){
                return false;
            }
        }
        std::cout<<"they are equal hooray!"<<std::endl;
        return true;
    }

}
bool operator!=(const BigInt& b1, const BigInt& b2)
{
    if(b1.negative!=b2.negative){
        return true;
    }

    if(b1.num.size() != b2.num.size()){
        return true;
    }
    else{
        for(int i = 0; i < b1.num.size(); i++){
            if(b1.num[i] != b2.num[i]){
                return true;
            }
        }
        std::cout<<"they are not equal hooray!"<<std::endl;
        return false;
    }

}
bool operator>=(const BigInt& b1, const BigInt& b2)
{
    if(b1.negative<b2.negative){
        return true;
    } 
  

    //if the size is bigger, it is just a bigger number.
    //but we have to remove leading zeros for this to work
    if(b1.num.size() > b2.num.size()){
        return true;
    }
    else if(b1.num.size() < b2.num.size()){
        return false;
    }
    else if(b1.num.size() == b2.num.size()){
        for(int i = 0; i < b1.num.size(); i++){
            if(b1.num[i] < b2.num[i]){
            return false;
            }
        }
        std::cout<<"param 1 >= param 2 hooray!"<<std::endl;
        return true;
    }
    return false;

}
bool operator>(const BigInt& b1, const BigInt& b2)
{
    if(b1.negative<b2.negative){
        return true;
    } 
  

    //if the size is bigger, it is just a bigger number.
    //but we have to remove leading zeros for this to work
    if(b1.num.size() > b2.num.size()){
        return true;
    }
    else if(b1.num.size() < b2.num.size()){
        return false;
    }
    else if(b1.num.size() == b2.num.size()){
        for(int i = 0; i < b1.num.size(); i++){
            if(b1.num[i] < b2.num[i]){
            return false;
            }
        }
        if(b1.num[b1.num.size()-1] != b2.num[b2.num.size()]-1){
        std::cout<<"param 1 > param 2 hooray!"<<std::endl;
        return true;
        }
    }
    return false;

}
bool operator<=(const BigInt& b1, const BigInt& b2)
{
    if(b1.negative>b2.negative){
        return true;
    } 
    if(b1.num.size() > b2.num.size()){
        return false;
    }
    else if(b1.num.size() < b2.num.size()){
        return true;
    }
    else if(b1.num.size() == b2.num.size()){
        for(int i = 0; i < b1.num.size(); i++){
            if(b1.num[i] > b2.num[i]){
            return false;
            }
        }
        std::cout<<"param 1 <= param 2 hooray!"<<std::endl;
        return true;
    }
    return false;
}
bool operator<(const BigInt& b1, const BigInt& b2){
    
    if(b1.negative>b2.negative){
        return true;
    } 
    if(b1.num.size() > b2.num.size()){
        return false;
    }
    else if(b1.num.size() < b2.num.size()){
        return true;
    }
    else if(b1.num.size() == b2.num.size()){
        for(int i = 0; i < b1.num.size(); i++){
            if(b1.num[i] > b2.num[i]){
            return false;
            }
        }
        if(b1.num[b1.num.size()] != b2.num[b2.num.size()]){
        std::cout<<"param 1 < param 2 hooray!"<<std::endl;
        return true;
        }
    }
    return false;
}

BigInt operator+(const BigInt& b1, const BigInt& b2){
    if (b1.num.size() == 0) return b2;
    else if (b2.num.size() == 0) return b1;

    std::vector<uint8_t> pp;


    int k1 = b1.num.size()-1, k2 = b2.num.size()-1;
    int carry = 0;
    while(k1>=0 || k2>=0){
        int add = b1.num[k1--] + b2.num[k2--] + carry;
        carry = add/10;
        add = add%10;
        pp.push_back(add);
    }
    if(k1==-1){
        while(k2>0){
            int add = b2.num[k2--]+carry;
            carry = add/10;
            add%=10;
            pp.push_back(add);
        }
    }
    if(k2==-1){
        while(k1>=0){
            int add = b1.num[k1--] +carry;
            carry = add/10;
            add%=10;
            pp.push_back(add);
        }
    }
    if(carry > 0){
        pp.push_back(carry);
    }

    BigInt ans = BigInt(pp);
    return ans;
}

BigInt operator-(const BigInt& b1, const BigInt& b2){
    if (b1.num.size() == 0) return b2;
    else if (b2.num.size() == 0) return b1;
    std::vector<uint8_t> pp;
    
    if(b1.num.size()>b2.num.size()){
        pp.push_back(-1);
    }


/*

    int i = b1.num.size()-1, j = b2.num.size();
    int k = 0;
    while(true){
        if(b1.num[i]-b2.num[j]<0){
            pp.push_back(10 + b1.num[i] - b2.num[j]);
            if(b1.num[i-1] == 0){
                int x = i-1;
                while(b1.num[x] == 0){
                    pp.push_back(9);
                    x--;
                }
                pp[x]--;
            }
            else{
                pp[i-1];
            }
        }

    }
    */

    BigInt ans = BigInt(pp);
    return ans;
}
BigInt operator*(const BigInt& b1, const BigInt& b2){
    if (b1.num.size() == 0) return b2;
    else if (b2.num.size() == 0) return b1;

    



    int k1 = b1.num.size(), k2 = b2.num.size();
    std::vector<uint8_t> pp(k1+k2,0);

    for(int i = k1 - 1; i >= 0; --i){
        for(int j = k2 - 1; j >= 0; --j){
            pp[i+j+1] += b1.num[i]*b2.num[j];
            pp[i+j] += pp[i+j+1]/10;
            pp[i+j+1]%=10;
        }
        
    }
    std::reverse(pp.begin(), pp.end());

    int i = 0;
    while(i<pp.size() && pp[i] == 0)++i;

    if((b1.negative ^ b2.negative) == 1){
        pp.insert(pp.begin(), 1, -1);
    }
 

    BigInt ans = BigInt(pp);
    return ans;
}


std::ostream& operator<<(std::ostream& os, const BigInt& bi)
{
    uint64_t s = bi.num.size();
    for (uint64_t i = 0u; i < s; i++)
    {
        // not entirely sure why the +0 is required..
        os << bi.num[s-i-1]+0;
    }

    return os;
}