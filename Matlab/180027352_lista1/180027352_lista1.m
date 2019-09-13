clear all, close all, clc;
format long;

disp('Lista 1');
disp('Aluno: Rodrigo Carvalho dos Santos')
disp('Matricula: 180027352');

disp('Exercicio 1:');
disp('a)');
x = 52;
solucao_exata = 7.367323;
fprintf('\tSolucao Exata: %.6f\n', solucao_exata);

disp('b)');
solucao_numerica = (exp(x) - 1) / x;
fprintf('\tSolucao Numerica: %.15e\n',solucao_numerica);
erro_relativo = abs((solucao_exata - solucao_numerica) / solucao_exata);
fprintf('\tErro relativo: %.15e\n\n\n', erro_relativo);

disp('Exercicio 2:');
x = 2;
exercicio = ['a' 'b' 'c'];
quantidade_de_termos = [4 6 8];
solucao_exata_ = [-0.333334 0.066667 0.130159];
for i = 1:3
	fprintf(exercicio(i)); disp(')');
	aux = 0;
	
	for j = 0:quantidade_de_termos(i) - 1
		solucao_numerica_ = aux + ((-x)^j) / factorial(j);
		aux = solucao_numerica_;
	end
	
	fprintf('\tSolucao Exata: %.6f\n', solucao_exata_(i));
	fprintf('\tSolucao Numerica: %.15e\n',  solucao_numerica_);
	erro_relativo_ = abs((solucao_exata_(i) - solucao_numerica_) / solucao_exata_(i));
	fprintf('\tErro Relativo Real: %.15e\n', erro_relativo_);
	clear solucao_numerica_, clear aux;
end