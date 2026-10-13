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
    int temp, max;
    prtary(ary);
    for(int i=0; i<10; i++) {
        max=i;
        for(int j=i+1; j<10; j++) {
            if(ary[j]<ary[max]) {
                max=j;
            }
            
        }
        temp = ary[i];
        ary[i]=ary[max];
        ary[max]=temp;
    }
    prtary(ary);
    return 0;
}
