import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.Period;

public class Veiculo {

    // ATRIBUTOS
    private String matricula; // (ex: 00-XX-02)
    private LocalDate dataDaMatricula; // (ex: 22/01/2022)
    private String marca; // (ex: Luis)
    private String modelo; // (ex: Santos)
    private int numeroRodas; // (ex: 4)
    private int iuc; // (imposto único de circulação ex: 10,20€)
    private String tipoDeVeiculo; // (ex: carro; moto; camião; bicicleta)
    private String combustivel; // (ex: Gasóleo, Híbrido, Elétrico)
    private int kms; // (ex: 95.000)

////////////////////////////////////////////////////////////////////////////////////////////////////////

    // GETTER E SETTER DE 'matricula'
    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }


    // GETTER E SETTER DE 'dataDaMatricula'
    public LocalDate getDataDaMatricula() {
        return dataDaMatricula;
    }
    public void setDataDaMatricula(LocalDate dataDaMatricula) {
        this.dataDaMatricula = dataDaMatricula;
    }


    // GETTER E SETTER DE 'marca'
    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }


    // GETTER E SETTER DE 'modelo'
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }


    // GETTER E SETTER DE 'numeroRodas'
    public int getNumeroRodas() {
        return numeroRodas;
    }
    public void setNumeroRodas(int numeroRodas) {
        this.numeroRodas = numeroRodas;
    }


    // GETTER E SETTER DE 'iuc'
    public int getIuc() {
        return iuc;
    }
    public void setIuc(int iuc) {
        this.iuc = iuc;
    }


    // GETTER E SETTER DE 'tipoDeVeiculo'
    public String getTipoDeVeiculo() {
        return tipoDeVeiculo;
    }
    public void setTipoDeVeiculo(String tipoDeVeiculo) {
        this.tipoDeVeiculo = tipoDeVeiculo;
    }


    // GETTER E SETTER DE 'combustivel'
    public String getCombustivel() {
        return combustivel;
    }
    public void setCombustivel(String combustivel) {
        this.combustivel = combustivel;
    }


    // GETTER E SETTER DE 'kms'
    public int getKms() {
        return kms;
    }
    public void setKms(int kms) {
        this.kms = kms;
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////

    // CONSTRUTOR VAZIO
    public Veiculo() {
        this.matricula = null;
        this.dataDaMatricula = null;
        this.marca = null;
        this.modelo = null;
        this.numeroRodas = 0;
        this.iuc = 0;
        this.tipoDeVeiculo = null;
        this.combustivel = null;
        this.kms = 0;
    }


    // CONSTRUTOR COMPLETO
    public Veiculo(String matricula, LocalDate dataDaMatricula, String marca, String modelo, int numeroRodas, int iuc,
            String tipoDeVeiculo, String combustivel, int kms) {
        this.matricula = matricula;
        this.dataDaMatricula = dataDaMatricula;
        this.marca = marca;
        this.modelo = modelo;
        this.numeroRodas = numeroRodas;
        this.iuc = iuc;
        this.tipoDeVeiculo = tipoDeVeiculo;
        this.combustivel = combustivel;
        this.kms = kms;
    }


    // METODO PARA DEVOLVER A IDADE DO CARRO
    public int getIdadeVeiculo() {
        LocalDate dataAtual = LocalDate.now(); // DESCOBRE A DATA ATUAL
        Period periodo = Period.between(dataDaMatricula, dataAtual); // SUBTRAI A IDADE ATUAL À IDADE DO CARRO
        return periodo.getYears(); // DEVOLVE A IDADE DO CARRO
    }

    
    @Override
    public String toString() {
        return "Veiculo [matricula=" + matricula + ", dataDaMatricula=" + dataDaMatricula + ", marca=" + marca
                + ", modelo=" + modelo + ", numeroRodas=" + numeroRodas + ", iuc=" + iuc + ", tipoDeVeiculo="
                + tipoDeVeiculo + ", combustivel=" + combustivel + ", kms=" + kms + "]";
    }
}
