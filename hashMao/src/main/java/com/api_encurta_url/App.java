package com.api_encurta_url;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

public class App
{
    public static void main( String[] args ) {
        HashMap<String, String> map = new HashMap();

        map.put("https://github.com/lucasoliveira04", "1");
        map.put("https://github.com/lucasoliveira05", "2");

        for (Map.Entry<String, String> entry : map.entrySet()) {
            System.out.println(entry.getValue() + ": " + entry.getKey());
            System.out.println("Para acessar, copie e cole a URL em um navegador");
        }
    }
}
