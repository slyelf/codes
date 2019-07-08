package stateInformation;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;


public class Client {
	private static AllStates teststates;
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		/*
		 * 1. create object states of class AllStates populated with file data/AustraliaStateData.txt
		 * 2. Display the toString() output of the object in the format specified in the pdf specifications
		 * 3. Display the state whose abbreviation is NSW in the format specified in the pdf specifications
		 * 4. Display if Victoria exists or not in the format specified in the pdf specifications
		 * 5. Display the least population state in the format specified in the pdf specifications
		 * 6. Display the average population up to 2 decimal places of precision using DecimalFormat 
		 * 		(more details in pdf specifications)
		 * 7. Display the number of "large" states in the format specified in the pdf specifications
		 * 8. Display the number of "small" states in the format specified in the pdf specifications
		 * 9. Display the number of states that begin with an 'A' in the format specified in the pdf specifications
		 */	
		teststates = new AllStates("data/AustraliaStateData.txt");
		DecimalFormat df = new DecimalFormat("#.00");
		
		
		//1 All States to String
		System.out.println("All states:");
		System.out.println(teststates.toString());
		
		//2 NSW Get name by Abbreviation
		System.out.print("NSW is the abbreviation for: ");
		System.out.println(teststates.getNameByAbbreviation("NSW"));
		
		//3 Victoria Exists
		System.out.print("Victoria exists: ");
		System.out.println(teststates.exists("Victoria"));
		
		//Least Populated State
		System.out.print("Least populated state: ");
		System.out.println(teststates.leastPopulatedState());
		
		//Average Population 2dp
		System.out.print("Average population: ");
		System.out.println(df.format(teststates.averagePopulation()));
		
		//# of 'large' states
		System.out.print("Number of states with over 10mn people: ");
		System.out.println(teststates.getLargeStateCount());
		
		//# of 'small' states
		System.out.print("Number of states with less than 1mn people: ");
		System.out.println(teststates.getSmallStateCount());
		
		//# of states that begin with 'A'
		System.out.print("Number of states with initials 'A': ");
		System.out.println(teststates.countStatesCountByInitial('A'));
		
		
		
		
	}
}
