import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;
import java.util.Base64;

public class DESEncryptionExample {
    public static void main(String[] args) throws Exception {
        // Generate a DES key
        SecretKey secretKey = KeyGenerator.getInstance("DES").generateKey();

        // Create a DES cipher for encryption
        Cipher encryptionCipher = Cipher.getInstance("DES/ECB/PKCS5Padding");
        encryptionCipher.init(Cipher.ENCRYPT_MODE, secretKey);

        // Create a DES cipher for decryption
        Cipher decryptionCipher = Cipher.getInstance("DES/ECB/PKCS5Padding");
        decryptionCipher.init(Cipher.DECRYPT_MODE, secretKey);

        String plainText = "This is a secret message";

        // Encrypt the data
        byte[] encryptedBytes = encryptionCipher.doFinal(plainText.getBytes("UTF-8"));
        String encryptedBase64 = Base64.getEncoder().encodeToString(encryptedBytes);
        System.out.println("Encrypted: " + encryptedBase64);

        // Decrypt the data
        byte[] decryptedBytes = decryptionCipher.doFinal(Base64.getDecoder().decode(encryptedBase64));
        String decryptedText = new String(decryptedBytes, "UTF-8");
        System.out.println("Decrypted: " + decryptedText);
    }
}
