class Viatura {
    protected String brand = "Ford";

    // MÉTODO PARA BOZINAR
    public void buzinar() {
        System.out.println("Tuut, tuut!");
    }
}

public class Carro extends Viatura {
    private String marca = "";
    private String modelo = "";
    private String matricula = "";
    private int ano = 0;
    private int kms = 0;

    public void setmarca(String txt) {
        this.marca = txt;    
    }

    public void setmodelo(String txt) {
        this.modelo = txt;    
    }
    
    public void setmatricula(String txt) {
        this.matricula = txt;    
    }
    
    public void setano(int txt) {
        this.ano = txt;    
    }
    
    public void setkms(int txt) {
        this.kms = txt;   
    }

    public String getmarca() {
        return this.marca;
    }

    public String getmodelo() {
        return this.modelo;
    }
    
    public String getmatricula() {
        return this.matricula;
    }
    
    public int getano() {
        return this.ano;
    }
    
    public int getkms() {
        return this.kms;
    }

    public void mostraInfo() {
        System.out.println("Marca: "      + this.getmarca());
        System.out.println("Modelo: "     + this.getmodelo());
        System.out.println("Matricula: "  + this.getmatricula());
        System.out.println("Ano: "        + this.getano());
        System.out.println("Kilometros: " + this.getkms());
    }

    public Carro(String marcaX, String modeloX, String matriculaX, int anoX, int kmsX) {
        this.marca = marcaX;
        this.modelo = modeloX;
        this.matricula = matriculaX;
        this.ano = anoX;
        this.kms = kmsX;
    }

    // REDEFINE O MÉTODO PARA BOZINAR
    public void buzinar() {
        System.out.println("Beep, beep!");
    }
}
