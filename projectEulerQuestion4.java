/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *Find the largest palindrome made from the product of two 3-digit numbers.
 *
 *Author: Stewart Hetherington.
 */*

public class projectEulerQuestion4{
	public static void main (String[]args) {


		int greatest = 0;
		for(int i = 999; i>900; i--) {
			for(int j = 999; j>900; j--) {
				 String sum = Integer.toString(i*j);
				 String reverse = "";
				for(int k=sum.length()-1; k>=0; k--) {
					reverse+= sum.charAt(k);
				}
				if(reverse.equals(sum)) {
					if((Integer.parseInt(sum))>greatest) {
						greatest = Integer.parseInt(sum);
					}
				}
			}
		}
		System.out.println(greatest);
	}
}