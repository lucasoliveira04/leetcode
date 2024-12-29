package Java;

import java.util.Map;

public class L13 {
    private int number_roman(String s) {
        Map<String, Integer> romanMap = Map.of(
                "I", 1,
                "V", 5,
                "X", 10,
                "L", 50,
                "C", 100,
                "D", 500,
                "M", 1000
        );

        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && romanMap.get(s.substring(i, i + 1)) < romanMap.get(s.substring(i + 1, i + 2))) {
                result -= romanMap.get(s.substring(i, i + 1));
            } else {
                result += romanMap.get(s.substring(i, i + 1));
            }
        }

        return result;
    }
}
