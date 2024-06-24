import java.time.LocalDate;
import java.time.Period;

public class Carro extends Veiculo {
    private boolean classico;
    private int numeroLugares;

////////////////////////////////////////////////////////////////////////////////////////////////////////

    // GETTER E SETTER DE 'classico'
    public boolean isClassico() {
        return classico;
    }
    public void setClassico(boolean classico) {
        this.classico = classico;
    }


    // GETTER E SETTER DE 'numeroLugares'
    public int getNumeroLugares() {
        return numeroLugares;
    }
    public void setNumeroLugares(int numeroLugares) {
        this.numeroLugares = numeroLugares;
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////

    // CONSTRUTOR VAZIO
    public Carro() {
        this.classico = false;
        this.numeroLugares = 0;
    }


    // CONSTRUTOR COMPLETO
    public Carro(boolean classico, int numeroLugares) {
        this.classico = classico;
        this.numeroLugares = numeroLugares;
    }

    // METODO PARA DEVOLVER A IDADE DO CARRO
    public int getInfo() {
        return 0;
    }
}
