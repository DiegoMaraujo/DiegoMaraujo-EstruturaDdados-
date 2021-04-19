#include <iostream>

void modificaVetorSintaxe1(int b[], int numElem){
    for (int i=0; i < numElem; i++){
        b[i] = b[i] * 2;
    }

}

void modificaVetorSintaxe2(int* b, int numElem){
    for (int i =0; i < numElem; i++){
        b[i] = b[i] * 2;
    }
}

void vetorConstSintaxe1( int* b, int numElem){
  // Corpo sem alterar os elementos do vetor

}
void vetorConstSintaxe2( int b[], int numElem){
    // Corpo sem alterar os elementos do vetor

}

const int num_elem = 10;
int main(){
    //alocando estatica
    int c[num_elem] = {1,2,3,4,5,6,7,8,9,10};
    

    // alocação dinamica
    int *d = new int[num_elem];
    for (int i = 0; i < num_elem; i++){
        d[i] = i + 1;
    }

modificaVetorSintaxe1(c, num_elem); 
modificaVetorSintaxe2(c, num_elem);



modificaVetorSintaxe1(d, num_elem);
modificaVetorSintaxe2(d, num_elem);


for (int i = 0; i < num_elem; i++){
    std::cout << i << " : "<< c[i]<< " , "<< d[i] << std::endl;
}


return 0;

}


