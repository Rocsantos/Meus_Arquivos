/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package src;

import java.util.Scanner;

/**
 *
 * @author Rodrigo
 */
public class Principal {

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        float l;
        l = leitor.nextInt();
        Quadrado q1 = new Quadrado(l);
        System.out.println("------");
        Quadrado q2 = new Quadrado();
        q2.status();
        System.out.println("-----");
        System.out.println("Modificação de Valores:\nInsira o lado:");
        l = leitor.nextInt();
        q2.setLado(l);
        System.out.println("Após a leitura temos:");
        System.out.println("Area: " + q2.getArea());
        System.out.println("Perimetro: " + q2.getPerimetro());
    }
    
}
