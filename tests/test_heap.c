# include < stdio.h >
# include < stdlib.h >
# inclui " ../src/facom.h "
# include < asser.h >


void  teste_pai (){
    assert ( heap_pai ( 0 )== 0 );
    assert ( heap_pai ( 1 )== 0 );
    assert ( heap_pai ( 2 )== 0 );
    assert ( heap_pai ( 3 )== 1 );
    assert ( heap_pai ( 4 )== 1 );
    assert ( heap_pai ( 5 )== 2 );
    assert ( heap_pai ( 6 )== 2 );
    assert ( heap_pai ( 7 )== 3 );
    assert ( heap_pai ( 8 )== 3 );
}

void  test_filhos (){
    assert ( heap_filho_esq ( 0 )== 1 );
    assert ( heap_filho_esq ( 1 )== 3 );
    assert ( heap_filho_esq ( 2 )== 5 );


    assert ( heap_filho_dir ( 0 )== 2 );
    assert ( heap_filho_dir ( 1 )== 4 );
    assert ( heap_filho_dir ( 2 )== 6 );

}

void  test_desce (){
    /* inicialização */
    int n = 10 ;
    int v[ 10 ] = { 26 , 7 , 14 , 16 , 8 , 9 , 11 , 4 , 12 , 6 };

    /* execução */
    int i = 1 ;
    heap_desce (v,n,i);
    
    /* teste */
    afirmar (v[ 1 ] == 16 );
    afirmar (v[ 3 ] == 12 );
    afirmar (v[ 8 ] == 7 );
    
     
    heap_desce (v,n, 4 );
    afirmar (v[ 4 ] == 8 );
    afirmar (v[ 9 ] == 6 );

    heap_desce (v,n, 6 );
    afirmar (v[ 6 ] == 11 );
}


void  test_constroi_heap (){
    int v[ 10 ] = { 8 , 5 , 4 , 2 , 1 , 3 , 6 , 7 , 9 , 10 };

    heap_constroi (v, 10 );
    afirmar (v[ 0 ] == 10 );
    afirmar (v[ 1 ] == 9 );
    afirmar (v[ 2 ] == 6 );
    afirmar (v[ 3 ] == 8 );
    afirmar (v[ 4 ] == 5 );
    afirmar (v[ 5 ] == 3 );
    afirmar (v[ 6 ] == 4 );
    afirmar (v[ 7 ] == 7 );
    afirmar (v[ 8 ] == 2 );
    afirmar (v[ 9 ] == 1 );
}

void  test_extrai_max (){

    int v[ 10 ] = { 8 , 5 , 4 , 2 , 1 , 3 , 6 , 7 , 9 , 10 };
    int n = 10 ;
    int máximo;
    heap_constroi (v,n);
    max = heap_extrai_max (v,&n);
    afirmar (max == 10 );
    afirmar (v[ 0 ] == 9 );
    afirmar (v[ 1 ] == 8 );
    afirmar (v[ 3 ] == 7 );
    afirmar (v[ 7 ] == 1 );
}

void  test_heap_sort (){
    int v[ 10 ] = { 8 , 5 , 4 , 2 , 1 , 3 , 6 , 7 , 9 , 10 };
    heap_sort (v, 10 );
    afirmar (v[ 0 ]== 1 );
    afirmar (v[ 1 ]== 2 );
    afirmar (v[ 2 ]== 3 );
    afirmar (v[ 3 ]== 4 );
    afirmar (v[ 4 ]== 5 );
    afirmar (v[ 5 ]== 6 );
    afirmar (v[ 6 ]== 7 );
    afirmar (v[ 7 ]== 8 );
    afirmar (v[ 8 ]== 9 );
    afirmar (v[ 9 ]== 10 );
}

void  test_altera_prioridade (){
    int v[ 10 ] = { 8 , 5 , 4 , 2 , 1 , 3 , 6 , 7 , 9 , 10 };
    heap_constroi (v, 10 );
    heap_altera_prioridade (v, 10 , 9 , 11 ); /* testa sobe */
    afirmar (v[ 9 ] == 5 );
    afirmar (v[ 4 ] == 9 );
    afirmar (v[ 1 ] == 10 );
    afirmar (v[ 0 ] == 11 );

    heap_altera_prioridade (v, 10 , 1 , 1 );

    afirmar (v[ 1 ] == 9 );
    afirmar (v[ 4 ] == 5 );
    afirmar (v[ 9 ] == 1 );


}



int  principal ( vazio ){
    teste_pai ();
    teste_filhos ();
    teste_desce ();
    test_constroi_heap ();
    teste_extrai_max ();
    test_heap_sort ();
    test_altera_prioridade ();
    retornar EXIT_SUCCESS;
}
