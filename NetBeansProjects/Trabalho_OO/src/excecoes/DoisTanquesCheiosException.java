package excecoes;

public class DoisTanquesCheiosException extends Exception {
	public DoisTanquesCheiosException() {
	}
	
	public DoisTanquesCheiosException(String mensagem) {
		super(mensagem);
	}
	
	public String toString() {
		return 	"Tipo de relatorio indisponivel!\n"
				+ "So é possivel gerar este calculo\n"
				+ "quando há dois abastecimentos\n"
				+ "completos (tanque cheio)";
	} 
}