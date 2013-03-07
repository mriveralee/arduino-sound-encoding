import java.io.*;
import java.util.ArrayList;
public class ImageToWavDecoder {
	
	//The Encoded image file
	public static String INPUT_IMAGE_NAME = "hello-encoded.jpg";
	
	//The name of the decoded wav file at the end of the process
	public static String OUTPUT_WAV_NAME = "hello-decoded.wav";
	
	public static String SPLITTER = "RIFF";
	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		String inputImage = INPUT_IMAGE_NAME;
		String outputWav = OUTPUT_WAV_NAME;

		if (args != null && args.length == 2) {
			inputImage = args[0];
			outputWav = args[1];
		}
	
		
		BufferedReader in = new BufferedReader(new FileReader(inputImage));
		System.out.println("Reading input from " + inputImage);

		ArrayList<String> inputs = new ArrayList<String>();
		String line = in.readLine();

		do {
			//System.out.println(line);
			inputs.add(line);
			line = in.readLine();
			
		} while (line != null);
		in.close();
		
		//Saving output file
		File outFile = new File(outputWav);
	    //if file doesn't exists, then create it
	    if(!outFile.exists()){
	    	outFile.createNewFile();
	    }
		PrintWriter out = new PrintWriter(new FileWriter(outFile, true));

		boolean hasFoundWav = false;
		System.out.println("Saving output to " + outputWav);
		for (int i = 0; i < inputs.size(); i++) {
			String current = inputs.get(i);
			if (current != null) {
				if (current.contains(SPLITTER)) {
					hasFoundWav = true;
					String[] bunch = current.split(SPLITTER);
					current = SPLITTER + bunch[1];
				}
				if(hasFoundWav) {
					out.write(current);
					//System.out.print(current);
				}
			}
		}
		
		out.flush();
		out.close();
	
	}

}
