#include <iostream> 
#include<algorithm>
#include<vector>
using namespace std;

int main(){

	int tam;
	int num_consultas;
	int i = 0;
	while (cin >> tam >> num_consultas, tam != 0 && num_consultas != 0) {
		vector<int> numeros;
		int num;
		for (int j = 0; j < tam; j++) {
			cin >> num;
			numeros.push_back(num);
		}
		sort(numeros.begin(), numeros.end());
		int consulta;
		cout << "CASE# " << i + 1 << ":" << endl;
		i++;
		int temp = 0;
		for (int k = 0; k < num_consultas; k++) {
			cin >> consulta;
			for (int p = 0; p < numeros.size(); p++) {
				if (consulta == numeros[p]) {
					temp = p + 1;
					break;
				}
			}
			if (temp) {
				cout << consulta << " found at " << temp << endl;
				temp = 0;
			}
			else {
				cout << consulta << " not found" << endl;
				temp = 0;
			}
		}
	}
}

