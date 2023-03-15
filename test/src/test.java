import java.util.Scanner;
public class test {

	public static void main(String[] args) {
		//System.out.println("Deparment : robotsystem");
		//System.out.println("Class number : 20506");
		//System.out.println("Name : Kimjunseo");
		//System.out.println("Hobby : Coding");
		//System.out.println("Certification information : information processing technician, electrician");
		
		//System.out.println("Hello , "+ "Java");
		//System.out.println("My name"+ 18 + "old");
		//System.out.println("3 and 4 sum" + 3 + 4);
		//System.out.println("3 and 4 puls" + (3+4));
		//System.out.println("I say "Hello"");
		//System.out.println("I say \"Hello\"");
		
		//int num = 2;
		//double score = 99.9;
		
		//System.out.println("number" + num + "student score" + score + "is");
		//System.out.printf("number is %d student score is %.2f", num, score);
		
		//Scanner sc = new Scanner(System.in);
		//System.out.println("please input your old");
		//int age = sc.nextInt();
		//System.out.printf("my old %d", age);
		
		//예제 3
		
		//String major, num, name;
		//Scanner a = new Scanner(System.in);
		//System.out.println("major : ");
		//major = a.nextLine();
		//System.out.println("number : ");
		//num = a.nextLine();
		//System.out.println("name : ");
		//name = a.nextLine();
		//System.out.println("I am " + major + num + name);
		
		//예제 4
		int num1, num2, num3;
		int sum;
		double avg;
		Scanner a = new Scanner(System.in);
		System.out.println("first number input");
		num1 = a.nextInt();
		System.out.println("second number input");
		num2 = a.nextInt();
		System.out.println("third number input");
		num3 = a.nextInt();
		sum=num1 + num2+ num3;
		avg=sum/3.0;
		System.out.printf("sum : %d avg : %.1f", sum, avg);
		

	}

}
