/**
 * @file Untitled-2
 * @author Rodrigo Carvalho dos Santos (https://github.com/Rocsantos)
 * @author Valderson Junior (https://github.com/valdersonjr)
 * @brief 
 * Código que resolva um sistema de congruência
 * a1x === b1(mod n1)
 * a2x === b2(mod n2)
 * ...
 * akx === bk(mod nk)
 * mdc(ni, nj) = 1, i != j
 * mdc(ai, ni) = 1
 * entradas:
 * k (qtd de interações)
 * a1, a2, ... ak
 * b1, b2, ... bk
 * n1, n2, ... nk   ni >= 2
 * 
 * @example
 * input:
 * k: 3
 * a1 = 1, a2 = 2, a3 = 3
 * b1 = 2, b2 = 1, b3 = 2
 * n1 = 3, n2 = 5, n3 = 7
 * 
 * output:
 * x=38 (N=105)
 * 
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

int mdc(int a, int b);
bool cond_i(int a[], int n[], int k);
bool cond_ii(int n[], int k);
int res_congruencia(int ai, int bi, int ni);

int main() {
	int k;
	cin >> k;
	if(k < 2) {
		cout << "Precisa de 2, ou mais equações" << endl;
		return -1;
	}
	int a[k], b[k], n[k];
	for(int i=0; i<k; i++)
		cin >> a[i];
	for(int i=0; i<k; i++)
		cin >> b[i];
	for(int i=0; i<k; i++)
		cin >> n[i];
	
	if(!cond_i(a, n, k)) {
		cout << "(i) falhou: Não possui uma única solução" << endl;
		return -1;
	}
	if(!cond_ii(n, k)) {
		cout << "(ii) falhou: Não possui uma única solução" << endl; 
		return -1;
	}

	int N=n[0], Ni, Ni_, ci, x=0;
	for(int i=1; i<k; i++)
		N*=n[i];

	for(int i=0; i<k; i++) {
		ci = res_congruencia(a[i], b[i], n[i]);
		Ni = N/n[i];
		Ni_ = res_congruencia(Ni, 1, n[i]);
		cout << "C" << i+1 << ": " << ci << " ";
		cout << "N" << i+1 << ": " << Ni << " ";
		cout << "Ñ" << i+1 << ": " << Ni_ << endl;
		x += ci*Ni*Ni_;
	}
	cout <<"X: " << x%N << " N: " << N << endl;
	return 0;
}

int mdc(int a, int b) {
	int resto = a % b;
	if (resto == 0) {
		// cout << "MDC: " << b << endl;
		return b;
	}
	else
		return mdc(b, resto);
}

bool cond_i(int a[], int n[], int k) {
	for(int i=0; i<k; i++)
		if(mdc(a[i], n[i]) != 1)
			return false;
	return true;
}

bool cond_ii(int n[], int k) {
	for(int i=0; i<k; i++)
		for(int j=i+1; j<k; j++)
		if(mdc(n[i], n[j]) != 1)
			return false;
	return true;
}

int res_congruencia(int a, int b, int n) {
	int i=1;
	while((a*i)%n != 1) i++;
	// cout << "inverso: " << i << endl;
	return (b*i)%n;
}
