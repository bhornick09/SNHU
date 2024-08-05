
public class Pet {
	
	//private variables
	private String petType;
	private String petName;
	private int petAge;
	private int dogSpaces;
	private int catSpaces;
	private int daysStay;
	private double amountDue;
	
	// constructor
	public Pet(String petType, String petName, int petAge, int daysStay) {
        this.petType = petType;
        this.petName = petName;
        this.petAge = petAge;
        this.daysStay = daysStay;
	}
	
	// PET TYPE set method and get method
	public void setPetType(String petType) {
        this.petType = petType;
    }
	
	public String getPetType() {
		return petType;
	}
	
	// PET NAME set and get methods
	public void setPetName(String petName) {
		this.petName = petName;
	}
	
	public String getPetName() {
		return petName;
	}
	
	// PET AGE set and get methods
	public void setPetAge(int petAge) {
		this.petAge = petAge;
	}
	public int getPetAge() {
		return petAge;
	}
	
	//DOG SPACES set and get methods
	public void setDogSpaces(int dogSpaces) {
		this.dogSpaces = dogSpaces;
	}
	
	public int getDogSpaces() {
		return dogSpaces;
	}
	
	//CAT SPACES set and get methods
	public void setCatSpaces( int catSpaces) {
		this.catSpaces = catSpaces;
	}
	
	public int getCatSpaces() {
		return catSpaces;
	}
	
	//DAYS STAYED set and get methods
	public void setDaysStay(int daysStay) {
		this.daysStay = daysStay;
	}
	
	public int getDaysStay() {
		return daysStay;
	}
	
	//AMOUNT DUE set and get methods
	public void setAmountDue(double amountDue) {
		this.amountDue = amountDue;
	}
	
	public double getAmountDue() {
		return amountDue;
	}
	
	//main
	public static void main(String[] args) {
		
	}
}
