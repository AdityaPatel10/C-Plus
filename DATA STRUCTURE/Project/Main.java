import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException{
        String pth = "file";
            File file = new File(pth);
            if (!file.exists()) {
                System.out.println("File not found.");
                return;
            }
            byte[] fByte = new byte[(int) file.length()];
            FileInputStream f = new FileInputStream(file);
            f.read(fByte);
            f.close();
    }
}
