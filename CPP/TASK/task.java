package string;

import java.util.ArrayList;
import java.util.Scanner;

public class Mobile_cal {

	void seperate(String prompt, ArrayList<Float> num, ArrayList<Character> operator) {

		String sub = "";

		for (int i = 0; i < prompt.length(); i++) {

			if (prompt.charAt(i) == '+' || prompt.charAt(i) == '-' || prompt.charAt(i) == '*'
					|| prompt.charAt(i) == '/') {

				num.add(Float.parseFloat(sub));
				sub = "";

				operator.add(prompt.charAt(i));

				continue;

			} else if (i == prompt.length() - 1) {

				sub += prompt.charAt(i);
				num.add(Float.parseFloat(sub));
				break;
			}
			sub += prompt.charAt(i);

		}
	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("enter input :");
		String prompt = sc.nextLine();

		ArrayList<Float> num = new ArrayList<>();
		ArrayList<Character> operator = new ArrayList<>();

		Mobile_cal obj = new Mobile_cal();
		obj.seperate(prompt, num, operator);

		char ele[] = new char[] { '/', '*', '+', '-' };

		for (int i = 0; i < ele.length; i++) {

			for (int j = 0; j < operator.size();) {

				if (operator.get(j) == ele[i]) {

					switch (ele[i]) {
					case '+': {

						num.set(j, num.get(j) + num.get(j + 1));

						break;
					}
					case '-': {
						num.set(j, num.get(j) - num.get(j + 1));

						break;
					}
					case '*': {
						num.set(j, num.get(j) * num.get(j + 1));
						break;
					}
					case '/': {
						num.set(j, num.get(j) / num.get(j + 1));
						break;
					}

					}
					num.remove(j + 1);
					operator.remove(j);

					continue;
				}
				j++;

			}

		}

		System.out.println("ans : " + num.get(0));