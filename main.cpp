#include <iostream>
using namespace std;

void MaxV(int d, const float V[]){
    float max;
    max=V[0];
    for (int i=0; i<d; i++){
        if(max<V[(i+1)]){
            max=V[(i+1)];
        }
    }cout<<max;
}

int main() {

    int d=0;
    cin>>d;

    float V[d];
    for(int i=0; i<d; i++){
        cin>>V[i];
    }
    MaxV(d,V);

    return 0;
}
