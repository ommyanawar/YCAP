#include<iostream>
using namespace std;

void prtary(int ary[]) {
    for(int i=0; i<10; i++) {
        cout << ary[i] << " ";
    }
    cout << endl;
}
int main() {
    int ary[10]={30,60,80,10,20,100,90,40,50,70};
    int temp;
    prtary(ary);
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(ary[j]>ary[j+1]) {
                temp = ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
    prtary(ary);
    return 0;
}