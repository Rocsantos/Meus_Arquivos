package aula05_teoria;
 //* @author Rodrigo
public class Principal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ContaBanco p1 = new ContaBanco();
        p1.setNumConta(1111);
        p1.setDono("Jubileu");
        p1.abrirConta("CC");
        
        ContaBanco p2 = new ContaBanco();
        p2.setNumConta(2222);
        p2.setDono("Creuza");
        p2.abrirConta("CP");
        
        p1.depositar(300f);
        p2.depositar(1850f);
        
        p2.pagarMensal();
        p2.pagarMensal();
        
        p1.estadoAtual();
        p2.estadoAtual();
        
    }
    
}
