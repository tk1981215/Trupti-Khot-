public class VowelCounter {
    public static int countVowels(String s) {
        if (s == null) return 0;
        
        String vowels = "aeiouAEIOU";
        int count = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (vowels.indexOf(s.charAt(i)) != -1) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        String text = "Hello World!";
        System.out.println(countVowels(text)); // Output: 3 (e, o, o)
    }
}
