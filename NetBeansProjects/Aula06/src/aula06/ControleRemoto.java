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
public class ControleRemoto implements Controlador{
    private int volume;
    private boolean ligado;
    private boolean tocando;
    private boolean mudo;
    
    public ControleRemoto(){
        this.volume = 50;
        this.ligado = false;
        this.tocando = false;
        this.mudo = false;
    }
    
    private int getVolume(){
        return this.volume;
    }
    
    private void setVolume(int v) {
        this.volume = v;
    }
      
    private boolean getLigado() {
        return ligado;
    }
    
    private void setLigado(boolean l) {
        this.ligado = l;
    }
  

    private boolean getTocando() {
        return tocando;
    }

    private void setTocando(boolean tocando) {
        this.tocando = tocando;
    }
    
    private boolean getMudo() {
        return mudo;
    }
    
    private void setMudo(boolean m) {
        this.mudo = m;
    }

    @Override
    public void ligar() {
        this.setLigado(true);
    }

    @Override
    public void desligar() {
        this.setLigado(false);
    }

    @Override
    public void maisVolume() {
        this.setVolume(this.getVolume() + 1);
    }
    
    public void maisVolume(int v) {
        if(this.getLigado())
            this.setVolume(this.getVolume() + v);
    }
    
    @Override
    public void menosVolume() {
        if(this.getLigado())
        this.setVolume(this.getVolume() - 1);
    }
    
    public void menosVolume(int v) {
        this.setVolume(this.getVolume() - v);
    }
    
    @Override
    public void play() {
        if(this.getLigado() && !this.getTocando())
            this.setTocando(true);
    }

    @Override
    public void pause() {
        if(!this.getLigado() && this.getTocando())
            this.setTocando(false);
    }
    
    @Override
    public void ligarMudo() {
        if(this.getLigado() && this.getVolume() > 0)
            setMudo(true);
    }

    @Override
    public void desligarMudo() {
        if(this.getLigado()) {
            setMudo(false);
        }
    }
    
    @Override
    public void abrirMenu() {
        System.out.println("Esta Ligado?: " + this.getLigado());
        System.out.println("Esta Tocando?: " + this.getTocando());
        
        if(!this.getMudo()) {
            System.out.print("Volume: " + this.getVolume() + " .");
            for(int i = 0; i < this.getVolume(); i+=10) {
                System.out.print("-.");
            }
            System.out.println("");
        }
        else {
                System.out.println("Mutado");
        }
        
    }

    @Override
    public void fecharMenu() {
        System.out.println("Fechando Menu...");
    }
}
