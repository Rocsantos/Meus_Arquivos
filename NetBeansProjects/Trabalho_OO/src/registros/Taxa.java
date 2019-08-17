package registros;
import javax.swing.JOptionPane;

import excecoes.*;

public class Taxa extends Despesa{
    private String CategoriaTaxa;
    
    public void RegistroTaxa() throws DescricaoEmBrancoException{
        
    }
    public Taxa(Despesa d) {

    	try{
    		setData(d.getData());
    		setNome(d.getNome());
    		setValorTotal(d.getValorTotal());
    	}
    	catch(Exception e) {
    		e.printStackTrace();
    	}
    }

    public String getCategoriaTaxa() {
        return CategoriaTaxa;
    }

    public void setCategoriaTaxa(String CategoriaTaxa) throws DescricaoEmBrancoException {
    	try {
			if(CategoriaTaxa.trim().equalsIgnoreCase("")||CategoriaTaxa.isEmpty()||CategoriaTaxa == null) {
				throw new DescricaoEmBrancoException();
			}
			this.CategoriaTaxa = CategoriaTaxa.trim();
		
		} catch(DescricaoEmBrancoException e) {
			throw e;
		}
    	
    }
    public static Taxa init() {
		Taxa taxa = null;
		while(true) {
			try {
				taxa = new Taxa(Despesa.init());
				taxa.setCategoriaTaxa(JOptionPane.showInputDialog("A despesa Ã© imposto ou particular?: "));
				
			} catch(Exception e) {
				JOptionPane.showMessageDialog(null,e);
			}
			if(taxa.getCategoriaTaxa() != null)
				break;
		}
		return taxa;
	}

	public String toString() {
		return "\n\nTAXA:" + super.toString()
				+ "\nCategoria da Taxa: " + CategoriaTaxa;
				
	}
}
