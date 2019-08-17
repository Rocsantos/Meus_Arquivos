import excecoes.*;
import registros.Manutencao;
import veiculo.Veiculo;
import javax.swing.*;
import java.util.*;
import registros.*;

public class Main  {

    private final static String MENU_INICIAL = "MENU DE OPCOES\n"+ 
                                            "1) Cadastrar Veiculo;\n"+
                                            "2) Registrar Despesa;\n"+
                                            "3) Gerar Relatorio;\n"+
                                            "0) Voltar.\n"+
                                            "Escolha uma opcao:\n";

    private final static String MENU_DESPESA = "REGISTRAR DESPESA\n"+
                                            "1) Abastecimento;\n"+
                                            "2) Manutencao;\n"+
                                            "3) Taxas;\n"+
                                            "0) Voltar.\n"+
                                            "Escolha uma opcao:\n";

    private final static String GERAR_RELATORIO = "GERAR RELATORIO\n"+
                                            "1) Desempenho;\n"+
                                            "2) Consumo;\n"+
                                            "0) Voltar.\n"+
                                            "Escolha uma opcao:\n";

    private final static String REGISTRAR_TAXA = "REGISTRAR TAXA\n"+
                                            "Exemplos de taxas: DPVAT/Seguro/\n"+
                                            "Licenciamento/IPVA/Financiamento\n";

    static ArrayList<Veiculo> veiculos = new ArrayList<>();

/******************************************REGISTRAR VEICULO ****************************************/	

    public static void RegistrarVeiculo() throws DescricaoEmBrancoException {
            Veiculo automovel = new Veiculo();
            try {
                    automovel.init();
            }
            catch(NumberFormatException e) {
                    JOptionPane.showMessageDialog(null	,"Digite um valor vÃ¡lido!");
            }
            catch(Exception e){
                    JOptionPane.showMessageDialog(null,e);
            }
            if(automovel.getMarca() != null &&
                    automovel.getModelo() != null &&
                    automovel.getAnoFabricacao() != 0 &&
                    automovel.getAnoModelo() != 0 &&
                    automovel.getCapacidadeTanque() != 0 &&
                    automovel.getCombustiveis() != null &&
                    automovel.getCor() != null &&
                    automovel.getPlaca() != null &&
                    automovel.getRenavam() != null) {
                    veiculos.add(automovel);
                    JOptionPane.showMessageDialog(null,veiculos.get(veiculos.size() -1));
            }
    }

/******************************************REGISTRAR DESPESA****************************************/	

    public static void RegistrarDespesa() {
            int opcaoDespesa = -1;
            do {
                    try {
                            opcaoDespesa = Integer.parseInt(JOptionPane.showInputDialog(MENU_DESPESA));
                            switch(opcaoDespesa) {
                                    case 0:
                                            break;
                                    case 1:
                                            //REGISTRAR ABASTECIMENTO
                                            veiculos.get(veiculos.size() -1).addDespesa(Abastecimento.init());
                                            JOptionPane.showMessageDialog(null,veiculos.get(veiculos.size() -1).toString());
                                            break;
                                    case 2:
                                            //REGISTRAR MANUTENÃ‡ÃƒO
                                            veiculos.get(veiculos.size() -1).addDespesa(Manutencao.init());
                                            JOptionPane.showMessageDialog(null,veiculos.get(veiculos.size() -1).toString());
                                            break;
                                    case 3:
                                            //REGISTAR TAXA(IMPOSTO, SEGURO, ETC)
                                            //JOptionPane.showMessageDialog(null,REGISTRAR_TAXA);
                                            veiculos.get(veiculos.size() -1).addDespesa(Taxa.init());
                                            JOptionPane.showMessageDialog(null,veiculos.get(veiculos.size() -1).toString());
                                            break;
                                    default:
                                            JOptionPane.showMessageDialog(null," Digite um nï¿½mero vÃ¡lido!");
                            }
                    }
                    catch( NumberFormatException f) {
                            JOptionPane.showMessageDialog(null	,"Digite um valor");
                    }
                    catch(Exception e){
                            JOptionPane.showMessageDialog(null	,"Digite um valor vÃ¡lido");
                            opcaoDespesa= Integer.parseInt(JOptionPane.showInputDialog(MENU_DESPESA));
                    }
            }while(opcaoDespesa != 0);
    }

/******************************************MOSTRAR RELATORIOS****************************************/	

    public static void MostrarRelatorios() {
            int opcaoRelatorio = -1;
            do {
                    try {
                            opcaoRelatorio = Integer.parseInt(JOptionPane.showInputDialog(GERAR_RELATORIO));
                            switch(opcaoRelatorio) {
                                    case 0:
                                            break;
                                    case 1:
                                            //RELATORIO DE DESEMPENHO
                                            break;
                                    case 2:
                                            //RELATORIO DE CONSUMO
                                            break;
                                    default:
                                            JOptionPane.showMessageDialog(null," Digite um numero vÃ¡lido!");
                            }
                    }catch( NumberFormatException f) {
                            JOptionPane.showMessageDialog(null	,"Digite um valor valido");
                    }catch(Exception e){
                            JOptionPane.showMessageDialog(null	,"Digite um valor");
                            opcaoRelatorio= Integer.parseInt(JOptionPane.showInputDialog(GERAR_RELATORIO));
                    }
            }while(opcaoRelatorio != 0);
    }

/****************************************** MAIN MENU ****************************************/

    public static void main(String[] args) throws Exception {
    //	arrayList<Veiculo> carro =  new arrayList<Veiculo>();
            int opcaoMenu = -1;

            while(true)	{
                    int maisUmCarro = 1;
//		1 == nÃ£o
//		0 == sim
//		-1 == fechar
                    Veiculo carros= new Veiculo();
                    try 		
                    {
                            maisUmCarro = JOptionPane.showConfirmDialog(null, "VocÃª quer adicionar mais carro?", "Adicionar Veiculo",JOptionPane.YES_NO_OPTION);
                    }catch (Exception e) {
                            e.printStackTrace();
                    }
                    if(maisUmCarro == 1|| maisUmCarro == -1)
                            break;
                    do{
                            try {
                                    opcaoMenu = Integer.parseInt(JOptionPane.showInputDialog(MENU_INICIAL));
                                    switch(opcaoMenu) {
                                            case 0:
                                                    break;
                                            case 1: // REGISTRAR CARROS
                                                    RegistrarVeiculo();
                                                    break;
                                            case 2: //REGISTRAR DESPESAS
                                                    RegistrarDespesa();
                                                    break;
                                            case 3: // MOSTRAR RELATORIOS
                                                    MostrarRelatorios();
                                                    break;
                                            default:
                                                    JOptionPane.showMessageDialog(null," Digite um numero vÃ¡lido!");
                                                    break;
                                    }
                            }
                            catch( NumberFormatException f) {
                                    JOptionPane.showMessageDialog(null	,"Digite um valor valido");
                            }
                            catch(Exception e){
                                    JOptionPane.showMessageDialog(null	,"Digite um valor");
                            }
                    }while(opcaoMenu != 0);
//		Fim do switch
            }
            //JOptionPane.showMessageDialog(null,carro);
            JOptionPane.showMessageDialog(null,"Programa Finalizado com Sucesso!\n");
    }
}
