#include <stdio.h>

int main(){
	int u[20],v[20], i,j,k=0,w = 0,aux;
	for(i = 0; i < 20; i++){
		scanf("%d", &v[i]);
	}
	for(i = 0; i < 20; i++){
		scanf("%d", &u[i]);
	}
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){	
			if(v[i] == u[j]){
				k++;
			}
		}
	}
	int new_list[k];
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			if(v[i] == u[j]){
				new_list[w] = u[j];
				w++;
			}
		}
	}
	for(i = 0; i < k - 1; i++){
		for(j = i+1; j < k; j++){
			if(new_list[i] < new_list[j]){
				aux = new_list[j];
				new_list[j] =  new_list[i];
				new_list[i] = aux;
			}
		}
	}
	for(i = 0; i < k; i++){
		for(j = 0; j < k; j++){
			if(new_list[i] == new_list[j]){
				new_list[j] == -1;
			}
		}
	}
	for(i = 0; i < k; i++){
		if(v[i] != -1){
			printf("%d\n",v[i]);
		}
	}
	return 0;
}
