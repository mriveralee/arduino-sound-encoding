import java.io.*;
import java.util.ArrayList;

/*
 * This class is used to encode a wav file into an image by
 * simply concatenating the file contents
 */

public class WavToImageEncoder {
	
	//The Wav File to encode into an image
	public static String INPUT_WAV_NAME = "hello.wav";
	
	//The image to have a wav file encoded into it
	public static String OUTPUT_IMAGE_NAME = "hello-encoded.jpg";
	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		String inputWav = INPUT_WAV_NAME;
		String outputImage = OUTPUT_IMAGE_NAME;
		
		if (args != null && args.length == 2) {
			inputWav = args[0];
			outputImage = args[1];		
		}
		
		
		//Read audio data
		BufferedReader in = new BufferedReader(new FileReader(inputWav));
		ArrayList<String> inputs = new ArrayList<String>();
		String line = in.readLine();
		System.out.println("Reading wav audio data from " + inputWav);
		do {
			//System.out.println(line);
			inputs.add(line);
			line = in.readLine();
			
		} while (line != null);
		in.close();
		
		//Print to an output image
		File outFile = new File(outputImage);
		 
	    //if file doesn't exists, then throw error 
	    if(!outFile.exists()){
	    	System.err.println("Output Image File Must Already Exist to encode audio data into it!");
	    	return;
	    }
		
		System.out.println("Saving output to " + outputImage);
		BufferedWriter out = new BufferedWriter(new FileWriter(outFile, true));
		
		for (String i : inputs) {	
			if (i!= null) {
				out.write(i.trim());
			}
			//System.out.print(i);
		}
		
		out.flush();
		out.close();
	
	}

}
