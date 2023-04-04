#include<stdlib.h>
#include<assert.h>
#include"../src/facom.h"

void test_par()
{

    assert(e_par(1)==0);

    assert(e_par(2)==1);

    assert(e_par(10)==1);

}



void test_desce(){
    /* inicialização*/
    int n = 10;
    int v[10] = {26,7,14,16,8,9,11,4,12,6};

    /* execução */
    int i = 1;
    heap_desce(v,n,i);
    
    /* teste*/
    assert(v[1] == 16);
    assert(v[3] == 12);
    assert(v[8] == 7);
    
     
    heap_desce(v,n,4);
    assert(v[4] == 8);
    assert(v[9] == 6);

    heap_desce(v,n,6);
    assert(v[6] == 11);
}



int main(void){
    test_pai();
    test_filhos();
    return EXIT_SUCCESS;
}

