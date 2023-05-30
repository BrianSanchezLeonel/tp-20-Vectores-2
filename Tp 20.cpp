#include <bits\stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>V);
int ContarMultiplosdeDos(vector<int> V);
void MostrarVector(vector<int>V);
int main(){
	vector<int>V;
	int A;
	V=GenerarVector(V);
	A=ContarMultiplosdeDos(V);
	cout<<"Vector:";
	MostrarVector(V);
	cout<<"Los multiplos de dos son:"<<A;
	return 0;
}
vector<int>GenerarVector(vector<int>V){
	srand(time(NULL));
	int e;
	for(int i=0;i<100;i++){
		e=rand()%150;
     	V.push_back(e);
	}
	return V;
}
int ContarMultiplosdeDos(vector<int>V){
	int contador=0;
	for(int i=0;i<V.size();i++){
		if(V[i]%2==0){
			contador++;
		}
	}
	return contador;
}
void MostrarVector(vector<int>V){
	for(int i=0;i<V.size();i++){
		cout<<V[i]<<"/";
	}
	cout<<endl;
}