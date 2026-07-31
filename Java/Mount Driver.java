import java.sql.Connection;
import java.sql.DriverManager;

public class Program{
  public static final String DB_DRIVER = "com.mysql.cj.jdbc.Driver";
  public static final String DB_URL = "jdbc:mysql://localhost:3306/test";
  public static final String DB_USER = "root";
  public static final String DB_PASSWORD = "manager";

  static{
    try{
      Class.forName(DB_DRIVER);
    }
    catch(Exception e){
      e.printStackTrace();
    }
  }

  public Connection getConnection() throws Exception{
    Connection con = DriverManager.getConnection(DB_URL,DB_USER,DB_PASSWORD);
  }
}
