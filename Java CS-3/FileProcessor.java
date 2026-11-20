// 9. Exception Handling in an Overridden Method //
import java.io.FileNotFoundException;
import java.io.IOException;

class FileProcessor {
    public void process() throws IOException {
        System.out.println("Processing a generic file...");
    }

    public void process(String filename) throws IOException {
        System.out.println("Processing file: " + filename);
    }

    public void process(String filename, String mode) throws IOException {
        System.out.println("Processing file: " + filename + " in " + mode + " mode");
    }
}

class TextProcessor extends FileProcessor {
    @Override
    public void process() throws FileNotFoundException {
        System.out.println("Processing a text file...");
    }
}

class ImageProcessor extends FileProcessor {
    @Override
    public void process() {
        System.out.println("Processing an image file...");
    }

    /* 
     * INVALID EXAMPLE (Uncommenting this will cause a compile-time error):
     * 
     * @Override
     * public void process(String filename) throws Exception {
     *     System.out.println("This fails because Exception is broader than IOException.");
     * }
     */
}

class FileMain {
    public static void main(String[] args) {
        FileProcessor textProc = new TextProcessor();
        FileProcessor imageProc = new ImageProcessor();

        try {
            textProc.process();
            textProc.process("notes.txt");
            
            imageProc.process();
            imageProc.process("photo.jpg", "COMPRESS");
        } catch (IOException e) {
            System.out.println("Caught an error while processing: " + e.getMessage());
        }
    }
}
