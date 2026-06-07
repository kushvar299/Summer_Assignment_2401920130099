interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser {
    int age;
    String bookType;
    public void registerAccount(){
        if(age<=12){
            System.out.println("You have successfully registered under a Kids Account.");
        }
        else if(age>12){
            System.out.println("Sorry, Age must be less than 12 to register as a kid.");
        }
    }
    public void requestBook(){
        if( bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days.\n");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books.\n");
        }
    }
}

class AdultUser implements LibraryUser {
    int age;
    String bookType;
    public void registerAccount(){
        if(age<=12){
            System.out.println("Sorry, Age must be greater than 12 to register as an adult.");
        }
        else if(age>12){
            System.out.println("You have successfully registered under an Adult Account.");
        }
    }
    public void requestBook(){
        if(bookType.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days.\n");
        }
        else{
            System.out.println("Oops, you are allowed to take only adult fiction books.\n");
        }
    }
}

public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        System.out.println("Test Case #1\n");                   //TEST CASE #1

        KidUser kid1 = new KidUser();

        kid1.age = 10;
        kid1.registerAccount();

        kid1.bookType = "Kids";
        kid1.requestBook();

        KidUser kid2 = new KidUser();

        kid2.age = 18;
        kid2.registerAccount();

        kid2.bookType = "Fiction";
        kid2.requestBook();

        System.out.println("Test_Case_#2\n");                   //TEST CASE #2

        AdultUser adult1 = new AdultUser();

        adult1.age = 5;
        adult1.registerAccount();

        adult1.bookType = "Kids";
        adult1.requestBook();

        AdultUser adult2 = new AdultUser();

        adult2.age = 23;
        adult2.registerAccount();

        adult2.bookType = "Fiction";
        adult2.requestBook();
    }
}