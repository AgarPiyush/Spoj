import java.io.*;
import java.lang.*;
import java.util.*;



class a {
	public static void main(String[] args)throws IOException {
		quickParseRead(System.in);
	}


	public static void quickParseRead(java.io.InputStream in) throws java.io.IOException {
		IntStreamReader inp = new IntStreamReader(in);
		int n = inp.getNextInt();
		int k = inp.getNextInt();
		int cnt = 0;
		while (n > 0) {
			int num = inp.getNextInt();
			if (num % k == 0)
				cnt++;
			n--;
		}
		System.out.println(cnt);
	}

	static class IntStreamReader {

		private java.io.BufferedInputStream inp = null;
		private int offset = 0;
		private int size = 51200;
		private byte[] buff = new byte[size];

		public IntStreamReader(InputStream in) throws IOException {
			inp = new java.io.BufferedInputStream(in);
			inp.read(buff, 0, size);
		}

		public int getNextInt() throws IOException {
			int parsedInt = 0;
			int i = offset;
			// skip any non digits
			while (i < buff.length && (buff[i] < '0' || buff[i] > '9')) {
				i++;
			}
			// read digits and parse number
			while (i < buff.length && buff[i] >= '0' && buff[i] <= '9') {
				parsedInt *= 10;
				parsedInt += buff[i] - '0';
				i++;
			}
			// check if we reached end of buffer
			if (i == buff.length) {
				// copy leftovers to buffer start
				int j = 0;
				for (; offset < buff.length; j++, offset++) {
					buff[j] = buff[offset];
				}
				// and now fil the buffer
				inp.read(buff, j, size - j);
				// and attempt to parse int again
				offset = 0;
				parsedInt = getNextInt();
			} else {
				offset = i;
			}
			return parsedInt;
		}
	}
}