/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package veiculo;

import javax.swing.JOptionPane;

/**
 *
 * @author Rodrigo
 */
public class Veiculo {
    private String anoFabricacao,
            anoModelo,
            combustivel,
            cor,
            marca,
            modelo,
            motorizacao,
            placa,
            renavam;
    private double capacidadeTanque;
    
    /**
     * @param aF = Ano de Fabricação
     * @param aM = Ano de Model
     * @param com = Combustivel
     * @param cor
     * @param mar = Marca
     * @param mod = Modelo
     * @param mot = Motorizacao
     * @param pla = Placa
     * @param ren = RENAVAM
     * @param cT = Capacidade do Tanque
     **/
    public Veiculo(String aF,
            String aM,
            String com,
            String cor,
            String mar,
            String mod,
            String mot,
            String pla,
            String ren,
            double cT) {
        setAnoFabricacao(aF);
        setAnoModelo(aM);
        setCombustivel(com);
        setCor(cor);
        setMarca(mar);
        setModelo(mod);
        setMotorizacao(mot);
        setPlaca(pla);
        setRenavam(ren);
        setCapacidadeTanque(cT);
    }

    public String getAnoFabricacao() {
        return anoFabricacao;
    }

    public void setAnoFabricacao(String anoFabricacao) {
        this.anoFabricacao = anoFabricacao;
    }

    public String getAnoModelo() {
        return anoModelo;
    }

    public void setAnoModelo(String anoModelo) {
        this.anoModelo = anoModelo;
    }

    public String getCombustivel() {
        return combustivel;
    }

    public void setCombustivel(String combustivel) {
        this.combustivel = combustivel;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getMotorizacao() {
        return motorizacao;
    }

    public void setMotorizacao(String motorizacao) {
        this.motorizacao = motorizacao;
    }

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getRenavam() {
        return renavam;
    }

    public void setRenavam(String renavam) {
        this.renavam = renavam;
    }

    public double getCapacidadeTanque() {
        return capacidadeTanque;
    }

    public void setCapacidadeTanque(double capacidadeTanque) {
        this.capacidadeTanque = capacidadeTanque;
    }
    
    public void imprimeVeiculo(int i) {
        JOptionPane.showMessageDialog(null,
                "\tVeiculo "+i+
                "\n"+this.marca+" "+this.modelo+" "+this.cor+
                "\nFabricado em "+this.anoFabricacao+
                "\nModelo de "+this.anoModelo+
                "\n"+this.combustivel+" "+this.motorizacao+
                "\nPlaca: "+this.placa+
                "\nRENAVAM: "+this.renavam+
                "\nCapacidade Total de Combustivel:\n"+this.capacidadeTanque+"L");
    }
}
