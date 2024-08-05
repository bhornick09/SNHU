
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
	public Pet() {
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
	
	
	// DOG CLASS
	public class Dog extends Pet{
		
		//private variables
		private int dogSpaceNumber;
		private double dogWeight;
		private String grooming;
		
		//constructor
		public Dog() {
			
		}
		
		//DOG SPACE NUMBER set and get methods
		public void setDogSpaceNumber(int dogSpaceNumber) {
			this.dogSpaceNumber = dogSpaceNumber;
		}
		
		public int getDogSpaceNumber() {
			return dogSpaceNumber;
		}
		
		//DOG WEIGHT set and get
		public void setDogWeight(double dogWeight) {
			this.dogWeight = dogWeight;
		}
		
		public double getDogWeight() {
			return dogWeight;
		}
		
		//GROOMING set and get
		public void setGrooming(String grooming) {
			this.grooming = grooming;
		}
		
		public String getGrooming() {
			return grooming;
		}
	}
	
	//main
	public static void main(String[] args) {
		
	}
}
