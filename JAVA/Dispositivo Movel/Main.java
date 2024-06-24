public class Main {
    public static void main(String[] args) {

        DispositivoMovel dp = new DispositivoMovel();

        System.out.println(dp.getTipo());
        System.out.println(dp.getSerialNumber());

        
        System.out.println(" ");
        Telemovel telemovel = new Telemovel();

        System.out.println("Tipo do dispositivo #1: " + telemovel.getTipo());
        telemovel.setSerialNumber("H35G6UI750");
        System.out.println("Serial Number do dispositivo #1: " + telemovel.getSerialNumber());


        System.out.println(" ");
        Tablet tablet = new Tablet();

        System.out.println("Tipo do dispositivo #2: " + tablet.getTipo());
        tablet.setSerialNumber("KT58K8O19N");
        System.out.println("Serial Number do dispositivo #2: " + tablet.getSerialNumber());


        System.out.println(" ");
        Portatil portatil = new Portatil();

        System.out.println("Tipo do dispositivo #3: " + portatil.getTipo());
        portatil.setSerialNumber("DQ1KJ5702M");
        System.out.print("Serial Number do dispositivo #3: " + portatil.getSerialNumber());

    }
}
