/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula04;

/**
 *
 * @author Rodrigo
 */
public class Caneta {
    public String modelo;
    private String cor;
    private float ponta;
    private boolean tampadaounao;
    
    public Caneta() {
        this.tampar();
        this.modelo = "BIC";
        this.cor = "Azul";
        this.ponta = 0.5f;
    }
    
    public String getModelo() {
        return this.modelo;
    }
    public void setModelo(String m) {
        this.modelo = m;
    }
    
    public float getPonta() {
        return this.ponta;
    }

    public void setPonta(float p) {
        this.ponta = p;
    }
    
    public void tampar() {
        tampadaounao = true;
    }
    
    public void destampar() {
        tampadaounao = false;
    }
    public void status() {
        System.out.println("Modelo: " + this.getModelo());
        System.out.println("Ponta: " + this.getPonta());
        System.out.println("Cor: " + this.cor);
        System.out.println("Tampada: " + this.tampadaounao);
        
    }
}
