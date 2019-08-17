/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package src;

import static java.lang.Math.pow;

/**
 *
 * @author Rodrigo
 */
public class Quadrado {
    private float lado,
            area,
            perimetro;

    public Quadrado() {
        System.out.println("Metodo construtor padrao chamado!");
        System.out.println("Atributos inicialiazados com valores padrao");
    }
    
    public Quadrado(float l) {
        System.out.println("Novo Quadrado Criado");
        this.lado = l;
        this.area = getArea();
        this.perimetro = getPerimetro();
        status();
    }

    public void setLado(float l) {
        this.lado = l;
    }
    
    public float getArea() {
        return (float) pow(this.lado, 2.0);
    }

    public float getPerimetro() {
        return (float) this.lado * 4;
    }
    
    public void status() {
        System.out.println("Quadrado: " + this);
        System.out.println("Area: " + this.area);
        System.out.println("Perimetro: " + this.perimetro);
    }
}
