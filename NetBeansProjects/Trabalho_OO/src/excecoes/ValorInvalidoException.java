/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package excecoes;

/**
 *
 * @author Rodrigo
 */

public class ValorInvalidoException extends Exception {
    private String mensagem;

    public ValorInvalidoException() {

    }

    public ValorInvalidoException(String m) {
        this.mensagem = m;
    }

    public String toString() {
        return "ValorInvalidoException" + mensagem;
    }
}