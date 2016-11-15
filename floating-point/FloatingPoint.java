public class FloatingPoint {

	public static void main(String args[]) {
		int x = 100;
		System.out.println(Integer.toBinaryString(x));

		double d1 = 0.3;
		System.out.println(Double.toHexString(d1));
		double d2 = 0.1;
		System.out.println(Double.toHexString(d2));

		double d3 = 0.4;
		System.out.println(Double.toHexString(d3));
		double d4 = 0.2;
		System.out.println(Double.toHexString(d4));

		if (0.3 - 0.1 == 0.4 - 0.2) {
			System.out.println("equal!");
		} else {
			System.out.println("not equal!");
		}

		System.out.println(0.3 - 0.1);
		System.out.println(0.4 - 0.2);
		System.out.println(0.2 - 0.1);
		System.out.println(0.4 - 0.1);
	}
}
