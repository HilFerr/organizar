public class Estante {
    public String codigo; // E1 - E2
    public String getCodigo() {
        return codigo;
    }
    public void setCodigo(String codigo) {
        this.codigo = codigo.toUpperCase();
    }

    
    public String andar; // 3 2 1 0 -1 (CAVE)
    public String getAndar() {
        return andar;
    }
    public void setAndar(String andar) {
        this.andar = andar;
    }

    
    public Estante(String codigo, String andar) {
        this.codigo = codigo.toUpperCase();
        this.andar = andar;
    }


    public Estante() {
        this.codigo = "";
        this.andar = "";
    }

    @Override
    public String toString() {
        return "Estante [codigo=" + codigo + ", andar=" + andar + "]";
    }
}