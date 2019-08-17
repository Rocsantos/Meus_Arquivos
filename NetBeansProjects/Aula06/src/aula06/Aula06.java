/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula06;

/**
 *
 * @author Rodrigo
 */
public class Aula06 {
    public static void main(String[] args) {
        ControleRemoto c1 = new ControleRemoto();
        
        c1.ligar();
        c1.maisVolume(80);
        c1.ligarMudo();
        c1.abrirMenu();
        
        System.out.println("------");
        
        c1.desligarMudo();
        c1.play();
        c1.menosVolume(80);
        c1.abrirMenu();
        c1.fecharMenu();
    }
}
