package veiculo;
import excecoes.*;
import registros.*;
import java.util.*;

import javax.swing.JOptionPane;

public class Veiculo{
	
    private String marca;
    private String modelo;
    private int anoFabricacao;
    private int anoModelo;
    private String motorizacao;
    private double capacidadeTanque;
    private String combustiveis;
    private String cor;
    private String placa;
    private String renavam;
    private ArrayList <Despesa> despesa = new ArrayList();
    private ArrayList <Abastecimento> abs = new ArrayList();

////////////////////////////////////CONSTRUTOR////////////////////////////////
	public Veiculo() throws DescricaoEmBrancoException{
		//CONSTRUINDO ARRAYLIST PARA LIGAR DESPESAS AO CARRO
		//despesas = new ArrayList();
	}
	
///////////////////////////////////MARCA//////////////////////////////////////
	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) throws DescricaoEmBrancoException{
		
		try {
			if(marca.trim().equalsIgnoreCase("")||marca.isEmpty()||marca == null) {
				throw new DescricaoEmBrancoException();
			}
			this.marca = marca.trim();
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////MODELO//////////////////////////////////////
	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo)throws DescricaoEmBrancoException {
		try {
			if(modelo.trim().equalsIgnoreCase("")||modelo.isEmpty()||modelo == null) {
				throw new DescricaoEmBrancoException();
			}
			this.modelo = modelo.trim();
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////ANO DE FABRICACAO//////////////////////////////////////
	public int getAnoFabricacao() {
		return anoFabricacao;
	}

	public void setAnoFabricacao(int anoFabricacao) throws DescricaoEmBrancoException{
		
		try {
			if(anoFabricacao == 0) {
				throw new DescricaoEmBrancoException();
			}
			this.anoFabricacao = anoFabricacao;
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////ANO DO MODELO//////////////////////////////////////
	public int getAnoModelo() {
		return anoModelo;
	}

	public void setAnoModelo(int anoModelo)  throws ValorInvalidoException {
		
		try {
			if(anoModelo <= 0) {
				throw new ValorInvalidoException();
				}
					this.anoModelo = anoModelo;	
			}
			catch(ValorInvalidoException f) {
				throw f;
			}
	}

///////////////////////////////////MOTORIZACAO//////////////////////////////////////
	public String getMotorizacao() {
		return motorizacao;
	}

	public void setMotorizacao(String motorizacao) throws DescricaoEmBrancoException{
		
		try {
			if(motorizacao.trim().equalsIgnoreCase("")||motorizacao.isEmpty()||motorizacao == null) {
				throw new DescricaoEmBrancoException();
			}
			this.motorizacao = motorizacao.trim();
		
		}
		catch(DescricaoEmBrancoException f) {
			throw f;
		}
	}

///////////////////////////////////COMBUSTIVEIS//////////////////////////////////////
	public String getCombustiveis() {
		return combustiveis;
	}

	public void setCombustiveis(String combustiveis) throws DescricaoEmBrancoException {
		
		try {
			if(combustiveis.trim().equalsIgnoreCase("")||combustiveis.isEmpty()||combustiveis == null) {
				throw new DescricaoEmBrancoException();
			}
			this.combustiveis = combustiveis.trim();
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////COR//////////////////////////////////////
	public String getCor() {
		return cor;
	}

	public void setCor(String cor) throws DescricaoEmBrancoException {
		
		try {
			if(cor.trim().equalsIgnoreCase("")||cor.isEmpty()||cor == null) {
				throw new DescricaoEmBrancoException();
			}
			this.cor = cor.trim();
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////PLACA//////////////////////////////////////
	public String getPlaca() {
		return placa;
	}

	public void setPlaca(String placa) throws DescricaoEmBrancoException {
		
		try {
			if(placa.trim().equalsIgnoreCase("")||placa.isEmpty()||placa == null) {
				throw new DescricaoEmBrancoException();
			}
			this.placa = placa.trim();
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////RENAVAM//////////////////////////////////////
	public String getRenavam() {
		return renavam;
	}

	public void setRenavam(String renavam) throws DescricaoEmBrancoException {
		
		try {
			if(renavam.trim().equalsIgnoreCase("")||renavam.isEmpty()||renavam == null) {
				throw new DescricaoEmBrancoException();
			}
			this.renavam = renavam.trim();
		
		}
		catch(DescricaoEmBrancoException e) {
			throw e;
		}
	}

///////////////////////////////////CAPACIDADE DO TANQUE//////////////////////////////////////
	public double getCapacidadeTanque() {
		return capacidadeTanque;
	}

	public void setCapacidadeTanque(double capacidadeTanque)  throws ValorInvalidoException{
		
		try {
			if(capacidadeTanque <= 0.0) {
				throw new ValorInvalidoException();
			}
			this.capacidadeTanque = capacidadeTanque;
		
			
		}
		catch(ValorInvalidoException f) {
			throw f;
		}
	}

//*******************************************************************
	public void addDespesa(Despesa d) {
		this.despesa.add(d);
	}

	public String toString() {
		return "VEICULO \nMarca: " + marca
						+ "\nModelo: " + modelo
						+ "\nAno de fabricacao: " + anoFabricacao
						+ "\nAno do modelo: " + anoModelo
						+ "\nMotorizacao: " + motorizacao
						+ "\nCapacidade do tanque: " + capacidadeTanque + " L"
						+ "\nCombustiveis aceitos: " + combustiveis
						+ "\nCor: " + cor
						+ "\nPlaca: " + placa
						+ "\nRenavam: " + renavam
						+ "\n"
						+ "\n----DESPESAS----" + despesa;
	}
	
	
	public static Veiculo init() {
		Veiculo carros  = null;
		double tanque;
		int anoFab, anoMod;
		try {
			carros = new Veiculo();
			carros.setMarca(JOptionPane.showInputDialog("Marca do carro:"));	
			carros.setModelo(JOptionPane.showInputDialog("Modelo:"));
			anoFab = Integer.parseInt(JOptionPane.showInputDialog("Ano de Fabricacao:"));
			carros.setAnoFabricacao(anoFab);
			anoMod = Integer.parseInt(JOptionPane.showInputDialog("Ano do modelo:"));
			carros.setAnoModelo(anoMod);
			carros.setMotorizacao(JOptionPane.showInputDialog("MotorizaÃ§Ã£o:"));
			carros.setCombustiveis(JOptionPane.showInputDialog("Combustiveis aceitos:\n" + ""
																+ "	1) Gasolina\n"
																+ "2) Alcool\n"
																+ "3) Diesel\n"
																+ "4) Flex [Gasolina ou Alcool]\n"
																+ "Escolha um numero acima."));
			carros.setCor(JOptionPane.showInputDialog("Cor:"));
			carros.setPlaca(JOptionPane.showInputDialog("Placa:"));
			tanque = Double.parseDouble(JOptionPane.showInputDialog("Capacidade do tanque:"));
			carros.setCapacidadeTanque(tanque);
			carros.setRenavam(JOptionPane.showInputDialog("Renavam:"));
		}catch(NumberFormatException e) {
			JOptionPane.showMessageDialog(null	,"Digite um valor vÃ¡lido!");
		
		}catch(Exception e){
				JOptionPane.showMessageDialog(null,e);
	}
		
		return carros;
	}
	
}
