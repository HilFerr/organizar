
public class Categoria {
    private String slug;

    public String getSlug() {
        return slug;
    }
    public void setSlug(String slug) {
        this.slug = slug;
    }

////////////////////////////////////////////////////////////////

    private String name;

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }

////////////////////////////////////////////////////////////////

    private Categoria pai;

    public Categoria getPai() {
        return pai;
    }
    public void setPai(Categoria pai) {
        this.pai = pai;
    }

////////////////////////////////////////////////////////////////

    // CONSTRUTOR COMPLETO
    public Categoria(String slug, String name, Categoria pai) {
        this.slug = slug;
        this.name = name;
        this.pai = pai;
    }
    
    // CONSTRUTOR VAZIO
    public Categoria() {
        this.slug = "";
        this.name = "";
        this.pai = null;
    }

    @Override
    public String toString() {
        return "Categoria [slug =" + slug + ", name =" + name + ", pai = " + pai + "]";
    }
}
