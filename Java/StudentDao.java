import java.sql.Connection;
import java.sql.List;
public StudentDao extends AutoCloseable{
  Student findById() throws Exception;
  List<Student> findAll() throws Exception;
  int save(Student) throws Exception;
}
