package aula05_teoria;
//@author Rodrigo Carvalho
public class ContaBanco
{
    //Atributos
    public int numConta;
    String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
    //Metodo construtor
    public ContaBanco()
    {
        System.out.println("Conta criada com Sucesso");
        this.setSaldo(0);
        this.setStatus(false);
    }
    
    //Metodo Personalizados
    public void estadoAtual()
    {
        System.out.println("------------------------------");
        System.out.println("Conta: " + this.getNumConta());
        System.out.println("Tipo: " + this.getTipo());
        System.out.println("Titular: " + this.getDono());
        System.out.println("Saldo: " + this.getSaldo());
        System.out.println("Status: " + this.isStatus());
    }
    
    public void abrirConta(String t)
    {
        setTipo(t);
        switch (t)
        {
            case "CC":
                this.setSaldo(50);
                this.setStatus(true);
                break;
            case "CP":
                this.setSaldo(150);
                this.setStatus(true);
                break;
            default:
                break;
        }
    }
    
    public void fecharConta()
    {
        if(this.getSaldo() > 0)
        {
            System.out.println("Conta com dinheiro");
        }
        else if(this.getSaldo() < 0)
        {
            System.out.println("Conta em débito com o Banco");
        }
        else
        {
            System.out.println("Conta fechada com sucesso");
            this.setStatus(false);
        }

    }
    
    public void depositar(float m)
    {
        if(this.isStatus())
        {
            this.setSaldo(this.getSaldo() + m);
        }
        else
        {
            System.out.println("Impossivel depositar");
        }
    }
    
    public void sacar(float m)
    {
        if(this.isStatus())
        {
            if(this.getSaldo() >= m)
                this.setSaldo(this.getSaldo() - m);
            else
                System.out.println("Saldo insulficiente");
        }
        else
            System.out.println("Impossivel sacar");
    }
    
    public void pagarMensal()
    {
        float v;
        if(this.isStatus() && "CC".equals(this.getTipo()))
        {
            v = 11.50f;
            this.setSaldo((this.getSaldo() - v));
            System.out.println("Debito de Conta Corrente Aprovado");
        }
        else if(this.isStatus() && "CP".equals(this.getTipo()))
        {
            v = 0.015f;
            this.setSaldo(this.getSaldo() * (1 + v));
            System.out.println("Monetização da Conta Poupança Aprovado");
        }
    }
    
    //Metodo Especiais, são eles: getters e setters, ou acessores e modificadores
    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int nC) {
        this.numConta = nC;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String t) {
        this.tipo = t;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String d) {
        this.dono = d;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float s) {
        this.saldo = s;
    }

    public boolean isStatus() {
        return status;
    }

    public void setStatus(boolean stat) {
        this.status = stat;
    }
    
}
