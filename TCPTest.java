import java.io.*; 
import java.net.*; 

class TCPserver { 

	public static void main(String argv[]) throws Exception
{ 
    String clientSentence;
 
    ServerSocket welcomeSocket = new ServerSocket(6789);
    System.out.println("Server Starts  " ); 
	
    Socket connectionSocket = welcomeSocket.accept(); 
	
    BufferedReader inFromClient = new BufferedReader(new 
InputStreamReader(connectionSocket.getInputStream())); 
    DataOutputStream outToClient = new DataOutputStream(connectionSocket.getOutputStream()); 
	
    System.out.println("Reciving message: \n");
	
    clientSentence = inFromClient.readLine();
    System.out.println(clientSentence);
    
    }
}
