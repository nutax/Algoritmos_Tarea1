template<typename T>
void Bubble(T lista[], int tamano){
	if(tamano>1){
		for (int i = 0; i<tamano-1, i++){
			int j = i;
			while (lista[j]>lista[j+1]){
				int aux = lista[j+1];
				lista[j+1]=lista[j];
				lista[j] = aux;
				j++;
			}
		}
	}
}