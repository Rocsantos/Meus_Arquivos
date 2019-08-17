package excecoes;

public class DescricaoEmBrancoException extends Exception {
	
	public DescricaoEmBrancoException() {	
	}
	
	public DescricaoEmBrancoException(String mensagem) {
		super(mensagem);
	}
	
	public String toString() {
		return "DescriÃ§Ã£o em branco!\n"
				+ "Digite um valor.";
	} 
}