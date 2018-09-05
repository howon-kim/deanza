/** Problem Specification
    Create a class SchoolKid that is the base class for children at a school. 
    It should have properties for the child's name and age, the name of the child's teacher, and a greeting.
    It should have appropriate get and set methods for each of the properties.

    - getName
    - getTeacher
    - getGreeting
    - getAge
    - haveBirthday: change age by 1
    - changeTeacher: change teacher's name
    - changeGreeting: change greeting
    
    Derive a class ExaggeratingKid from SchoolKid. 
    The new class should override the get method for the age, reporting the actual age plus 2. 
    It also should override the get method for the greeting, returning the child's greeting concatenated with the words "I am the smartest."
 **/

/**
 * Midterm
 * @author Howon Kim
 * May 12
 */

public class SchoolKidTest {
    public static void main(String[] args) {
        System.out.println("Stete of Jason");
        ExaggeratingKid test = new ExaggeratingKid("Jason",5,"Mrs. Ackerman", "Hi there.");
        System.out.println(test.toString() + "\n");
        
        System.out.println("Changing age by 1, teacher to Mr. Kim, greeting to Aloha");
        System.out.println("State of Jason now...");
        test.haveBirthday();
        test.changeTeacher("Mr. Kim");
        test.changeGreeting("Aloha");
        System.out.println(test.toString());


    }
    
}
