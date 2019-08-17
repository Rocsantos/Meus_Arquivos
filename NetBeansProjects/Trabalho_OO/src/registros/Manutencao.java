package registros;
import javax.swing.JOptionPane;
import excecoes.*;
import veiculo.Veiculo;

public class Manutencao extends Despesa{
    private int kmAtual;

    public Manutencao() throws DescricaoEmBrancoException {
    	
    }

    public Manutencao(Despesa d) {
    
    	try{
    		setData(d.getData());
    		setNome(d.getNome());
    		setValorTotal(d.getValorTotal());
    	}
    	catch(Exception e) {
    		e.printStackTrace();
    	}
    
    }
    	public int getKmAtual() {
    		return kmAtual;
    	}
    	public void setKmAtual(int kmAtual) throws DescricaoEmBrancoException {
    		try {
    			if(kmAtual == 0) {
    				throw new DescricaoEmBrancoException();
			}
			this.kmAtual = kmAtual;
    		}
    		catch(DescricaoEmBrancoException e) {
    			throw e;
    		}
    	}
    	
    	public static Manutencao init() {
    		Manutencao manutencao = null;
    		int km;
    		while(true) {
	    		try {
	    			manutencao = new Manutencao(Despesa.init());
	    			km = Integer.parseInt(JOptionPane.showInputDialog("Informe o Km atual"));
	    			manutencao.setKmAtual(km);
	    		}
	    		catch(Exception e) {
	    			JOptionPane.showMessageDialog(null,e);
	    		}
	    		if(manutencao.getKmAtual() != 0)
	    			break;
    		}
    		return manutencao;
    	}

		public String toString() {
		return "\n\nMANUTENCAO:"
				+ "\nQuilometragem atual: " + kmAtual
				+ super.toString();
		} 
}
