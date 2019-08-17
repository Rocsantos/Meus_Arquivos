/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

import javax.swing.*;
import veiculo.*;
import excecoes.*;
/**
 *
 * @author Rodrigo
 */

public class Main {
    /**
     * @param args the command line arguments
     */
    @SuppressWarnings("empty-statement")
    public static void main(String[] args) {
        // TODO code application logic here
        boolean ativo = true;
        Veiculo[] v;
        v = null;
        int i = 0;
        do
        {
            int opcao = Integer.parseInt(JOptionPane.showInputDialog
                ("1- Cadastrar Veículo\n"+
                "2- Cadastrar Despesa\n"+
                "3- Relatório Simples\n"+
                "4- Relatório de Desempenho\n"+
                "5- Sair do Programa\n"));
            switch (opcao){
                case 1:/*Cadastrar Veiculo*/
                    v[i] = cadastrarVeiculo(i+1);
                    i++;
                    break;
                case 2:
                    JOptionPane.showMessageDialog(null, "Trabalhando nisso...\nAguarde");
                    break;
                case 3:
                    JOptionPane.showMessageDialog(null, "Trabalhando nisso...\nAguarde");
                    break;
                case 4:
                    JOptionPane.showMessageDialog(null, "Trabalhando nisso...\nAguarde");
                    break;
                case 5:
                    JOptionPane.showMessageDialog(null, "Fechando Programa");
                    ativo = false;
                    break;
                case 6:
                    for(int j = 0; j < i; j++){
                        v[i].imprimeVeiculo(i+1);
                    }
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "Não é uma opção aceita");
                    break;
            }
        }while(ativo);
    }
    static public Veiculo cadastrarVeiculo(int i) {
        
        String aF = JOptionPane.showInputDialog("Ano de Fabricação:", "2019");
        String aM = JOptionPane.showInputDialog("Ano do Model do Veiculo", "2019");
        String com = JOptionPane.showInputDialog("Tipo de Combustivel do Veiculo", "Flex");
        String cor = JOptionPane.showInputDialog("Cor do Veiculo", "Prata");
        String mar = JOptionPane.showInputDialog("Marca do Veiculo", "Chevrolet");
        String mod = JOptionPane.showInputDialog("Modelo do Veiculo", "Onix");
        String mot = JOptionPane.showInputDialog("Motorização do Veiculo", "1.0");
        String pla = JOptionPane.showInputDialog("Placa do Veiculo", "ABC1234");
        String ren = JOptionPane.showInputDialog("RENAVAM do Veiculo", "12345678911");
        double cT = Double.parseDouble(JOptionPane.showInputDialog("Capacidade Total do Tanque", "47"));
        
        Veiculo veiculo = new Veiculo(aF, aM, com, cor, mar, mod, mot, pla, ren, cT);
        veiculo.imprimeVeiculo(i);
        return veiculo;
    }
}
