import java.util.*;

class Subject {
    private String subjectName;
    private int marks;

    public Subject(String subjectName, int marks) {
        this.subjectName = subjectName;
        this.marks = marks;
    }

    public String getSubjectName() {
        return subjectName;
    }

    public int getMarks() {
        return marks;
    }
}

class Student {
    private int id;
    private String name;
    private ArrayList<Subject> subjects;

    public Student(int id, String name) {
        this.id = id;
        this.name = name;
        subjects = new ArrayList<>();
    }

    public void addSubject(String subjectName, int marks) {
        subjects.add(new Subject(subjectName, marks));
    }

    public void displayResult() {
        int total = 0;

        System.out.println("\nStudent ID : " + id);
        System.out.println("Student Name : " + name);
        System.out.println("Subjects and Marks:");

        for (Subject s : subjects) {
            System.out.println(s.getSubjectName() + " : " + s.getMarks());
            total += s.getMarks();
        }

        double average = (double) total / subjects.size();

        System.out.println("Total Marks : " + total);
        System.out.println("Average : " + average);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Student ID: ");
        int id = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Student Name: ");
        String name = sc.nextLine();

        Student student = new Student(id, name);

        System.out.print("Enter number of subjects: ");
        int n = sc.nextInt();
        sc.nextLine();

        for (int i = 1; i <= n; i++) {
            System.out.print("Enter Subject Name: ");
            String subject = sc.nextLine();

            System.out.print("Enter Marks: ");
            int marks = sc.nextInt();
            sc.nextLine();

            student.addSubject(subject, marks);
        }

        student.displayResult();

        sc.close();
    }
}
