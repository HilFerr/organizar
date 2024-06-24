import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class App extends Pessoa {
    public static void main(String[] args) throws Exception {
        DateTimeFormatter formato = DateTimeFormatter.ofPattern("yyyy/MM/dd");
        String dnPaiPai = "1940/09/17";
        String dnMaePai = "1943/04/10";
        String dnPaiMae = "1943/05/11";
        String dnMaeMae = "1944/11/30";
        String dnPai = "1963/07/25";
        String dnMae = "1965/10/04";
        String dnEu = "2008/07/25";

        Pessoa paipai = new Pessoa("Abelino",
                                "Ferreira",
                                LocalDate.parse(dnPaiPai, formato), true, null , null, null);        
                                
        Pessoa maepai = new Pessoa("Geraldina",
                                "Ferreira",
                                LocalDate.parse(dnMaePai, formato), false, null , null, null);       

        Pessoa paimae = new Pessoa("Pai da minha mae",
                                "Carneiro",
                                LocalDate.parse(dnPaiMae, formato), false, null , null, null);

        Pessoa maemae = new Pessoa("Mae da minha mae",
                                "Carneiro",
                                LocalDate.parse(dnMaeMae, formato), true, null , null, null);

        Pessoa pai = new Pessoa("Hilario",
                                "Ferreira",
                                LocalDate.parse(dnPai, formato), false, null , paipai, maepai);

        Pessoa mae = new Pessoa("Dolores",
                                "Carneiro",
                                LocalDate.parse(dnMae, formato), false, null , paimae, maemae);

        Pessoa eu = new Pessoa("Hilario",
                                "Ferreira",
                                LocalDate.parse(dnEu, formato), false, null , pai, mae);

        System.out.println(eu.mostraDescendencia(0));
    }
}
