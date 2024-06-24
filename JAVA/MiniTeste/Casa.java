public class Casa {
    private String tipoCasa = ""; // VIVENDA
    private int numAndares = 0;
    private int numQuartos = 0;
    private int numWcs = 0;
    private int areaBruta = 0;
    private int areaUtil = 0; //metros quadrados

///////////////////////////////////////////////////////////////////////////////////

    // SET DO TIPO DE CASA
    public void setTipoCasa(String txt) {
        this.tipoCasa = txt;
    }

    // SET DO NUMERO DE ANDARES
    public void setNumAndares(int txt) {
        this.numAndares = txt;
    }

    // SET DO NUMERO DE QUARTOS
    public void setNumQuartos(int txt) {
        this.numQuartos = txt;
    }
    
    // SET DO NUMERO DE WCS
    public void setNumWcs(int txt) {
        this.numWcs = txt;
    }

    // SET DO AREA BRUTA
    public void setAreaBruta(int txt) {
        this.areaBruta = txt;
    }

    // SET DO NUMERO DE WCS
    public void setAreaUtil(int txt) {
        this.areaUtil = txt;
    }

///////////////////////////////////////////////////////////////////////////////////

    // GET DO TIPO DE CASA
    public String getTipoCasa() {
        return this.tipoCasa;
    }

    // GET DO NUMERO DE ANDARES
    public int getNumAndares() {
        return this.numAndares;
    }

    // GET DO NUMERO DE QUARTOS
    public int getNumQuartos() {
        return this.numQuartos;
    }
    
    // GET DO NUMERO DE WCS
    public int getNumWcs() {
        return this.numWcs;
    }

    // GET DO AREA BRUTA
    public int getAreaBruta() {
        return this.areaBruta;
    }

    // GET DO NUMERO DE WCS
    public int getAreaUtil() {
        return this.areaUtil;
    }

///////////////////////////////////////////////////////////////////////////////////

    public Casa(String tipoCasaX, int numAndaresX, int numQuartosX, int numWcsX, int areaBrutaX, int areaUtilX) {
        this.tipoCasa   = tipoCasaX;
        this.numAndares = numAndaresX;
        this.numQuartos = numQuartosX;
        this.numWcs     = numWcsX;
        this.areaBruta  = areaBrutaX;
        this.areaUtil   = areaUtilX;
    }

    public void mostraInfo() {
        System.out.println("Tipo de casa: "      + this.getTipoCasa() + ";");
        System.out.println("Numero de Andares: "     + this.getNumAndares() + ";");
        System.out.println("Numero de Quartos: "  + this.getNumQuartos() + ";");
        System.out.println("Numero de WCs: "        + this.getNumWcs() + ";");
        System.out.println("Area Bruta: " + this.getAreaBruta() + " metros quadrados;");
        System.out.println("Area Util: " + this.getAreaUtil() + " metros quadrados;");
    }
}