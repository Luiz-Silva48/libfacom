# include < stdio.h >
# include < stdlib.h >
# inclui " facom.h "

int  heap_pai ( int filho){
    return ( int )(filho- 0.5 )/ 2.0 ;
}

int  heap_filho_esq ( int pai){
    return pai* 2 + 1 ;
}
int  heap_filho_dir ( int pai){
    return pai* 2 + 2 ;
}

void  troca ( int *v1, int *v2){
    int auxiliar = *v1;
    *v1 = *v2;
    *v2 = auxiliar;
}
void  heap_desce ( int v[], int n, int pai){
    int e,d,maior;

    e = heap_filho_esq (pai);
    d = heap_filho_dir (pai);

    maior = pai;
    if ( e< n && v[e] > v[pai]){
        maior = e;
    }
    if ( d < n && v[d] > v[maior]){
        maior = d;
    }
    if (maior != pai){
        troca (&v[pai],&v[maior]);
        heap_desce (v,n,maior);
    }

}


void  heap_constroi ( int v[], int n){
    int eu;
    int último = n- 1 ;
    for (i = heap_pai (ultimo);i>= 0 ;i--){
        heap_desce (v,n,i);
    }
}


int   heap_extrai_max ( int v[], int *n){
    int máx = v[ 0 ];
    int último = *n - 1 ;
    troca (&v[ 0 ],&v[último]);
    heap_desce (v,ultimo, 0 );
    *n = *n- 1 ;
    máximo de retorno ;
}
void  heap_sort ( int v[], int n){
    int eu;
    int máximo = n;
    heap_constroi (v,n);
    for (i= 0 ;i<max;i++){
        heap_extrai_max (v,&n);
    }
}


void  heap_altera_prioridade ( int v[], int n, int pos, int novo_valor){
    int pai;
    if (pos < n){
        if (novo_valor > v[pos]){ /* sobe */
            v[pos] = novo_valor;
            pai = heap_pai (pos);
            enquanto (v[pai] < v[pos]){
                troca (&v[pai],&v[pos]);
                pos = pai;
                pai = heap_pai (pai);
            }
        } else {                     /* descida */
            v[pos] = novo_valor;
            heap_desce (v,n,pos);
        }
    }
}
