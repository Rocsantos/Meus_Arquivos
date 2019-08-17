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
public class DescricaEmBrancoException extends Exception {
private String mensagem;
	
	public DescricaEmBrancoException() {
		
	}
	
	public DescricaEmBrancoException(String mensagem) {
		this.mensagem = mensagem;

	}
	
	public String toString() {
		return "Descricao Em Branco Exception!" + mensagem;
	} 

    public String getMessage() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

}