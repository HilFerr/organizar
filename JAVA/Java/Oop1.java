public class Oop1 {
    private int x = 5;
    int y = 10;

    static void metodoEstatico() {
        System.out.println("Metodo estatico");
    }

    public void metodoPublico() {
        System.out.println("Metodo publico");
    }

    public void setX(int num) {
        this.x = num;
    }

    public int getX() {
        return this.x;
    }

    public Oop1() { // CONSTRUTOR
        this.x = 33;
    }

    public static void main (String[] args) {
        Oop1 myObj1 = new Oop1();
        Oop1 myObj2 = new Oop1();

        System.out.println(myObj1.getX()); // VERIFICA O CONSTRUTOR

        myObj1.setX(13);
        myObj1.y = 15;
        myObj2.y = 30;

        System.out.println(myObj1.getX()); // VER O 'x' DEPOIS DO 'set'
    }
}