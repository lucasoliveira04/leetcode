package com.api_encurta_url;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class App
{
    public static void main( String[] args ) {
        HashMap<String, String> map = new HashMap();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Quantas Urls deseja passar ?");
        int urls = scanner.nextInt();
        int key = 0;

        for (int i = 0; i < urls; i++) {
            System.out.println("Url " + (i + 1) + ": ");
            String url = scanner.next();
            key++;

            map.put(String.valueOf(key), url);
        }
        
        for (Map.Entry<String, String> entry : map.entrySet()) {
            System.out.println(entry.getValue() + ": " + entry.getKey());
        }
    }
}
