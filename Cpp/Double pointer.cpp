#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
int *p_x=&x;
int **p_p_x=&p_x;
cout<<"Address of p_p_x: "<<p_p_x;
cout<<"Value of p_p_x: "<<**p_p_x;
}
