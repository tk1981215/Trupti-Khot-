class Student {
    String name;
    int age;

    // Constructor
    Student() {
        System.out.println("Constructor called");
        name = "Rahul";
        age = 20;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        // Constructor is called automatically when object is created
        Student s1 = new Student();

        s1.display();
    }
}
