public class SwitchExample {
    public static void main(String[] args) {
        int day = 3;
        String dayString;

        switch (day) {
            case 1:
                dayString = "Monday";
                break;
            case 2:
                dayString = "Tuesday";
                break;
            case 3:
                dayString = "Wednesday";
                break;
            case 4:
                dayString = "Thursday";
                break;
            case 5:
                dayString = "Friday";
                break;
            default:
                dayString = "Weekend";
                break;
        }

        System.out.println("Day: " + dayString);
    }
}
