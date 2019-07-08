package stateInformation;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class AllStates {
	private State[] states; //holds an array of State objects
	//go through week 4 lecture notes to study this topic

	//DO NOT MODIFY
	public AllStates(String filename) throws IOException {	
		load(filename);  
	}

	/*
	 * DO NOT MODIFY - This method reads information about the states from the file
	 * and stores it in the array of State objects
	 */
	public void load(String filename) throws IOException{
		FileInputStream inputStream1 = new FileInputStream(filename);
		BufferedReader bufferedReader1 = new BufferedReader(new InputStreamReader(inputStream1));

		int count = 0;
		while(bufferedReader1.readLine() != null) {
			count++;
		}
		bufferedReader1.close();

		FileInputStream inputStream2 = new FileInputStream(filename);
		BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(inputStream2));
		states = new State[count];
		String line = null;
		for(int i=0; i < count; i++) {
			line = bufferedReader2.readLine();
			String tokens[] = line.split(",");
			String abbrev = tokens[0];
			String name = tokens[1];
			int population = Integer.parseInt(tokens[2]);
			states[i] = new State(abbrev, name, population);
		}
		bufferedReader2.close();
	}

	/**
	 * 10 marks
	 * Function description: print a list of all states
	 * @return: String representing the states
	 * The example of the format:
	 * "NSW (New South Wales) - Population: 7704300
	 * 	VIC (Victoria) - Population: 6039100
	 *  SA (South Australia) - Population: 1706500"
	 */
	public String toString() {
		String str = "";
		for (int i = 0; i < states.length; i ++) {
			str += states[i].toString() + "\n";
		}
		return str; //to be completed
	}

	/**
	 * 
	 * Function description: Find the state name by abbreviation in the dataset
	 * , abbreviation
	 * @return: the state name if we can find the state name by the input abbreviation,
	 * else return "No state with given abbreviation exists"
	 */
	public String getNameByAbbreviation(String abbreviation) {
		
		for (int i = 0; i < states.length; i++) {
			
			if (abbreviation.equals(states[i].getAbbrev())) {
				return states[i].getName();
			}
		}

		return "No state with given abbreviation exists"; //to be completed
	}

	/**
	 * 
	 * Function description: find whether the given state is in the dataset
	 * , name
	 * @return: If the state exists in the dataset, return true, else return false
	 */
	public boolean exists(String name) {
		for (int i = 0; i < states.length; i++) {
			if (name.equals(states[i].getName())) {
				return true;
			}
		}
		
		return false; //to be completed
	}


	/**
	 * 
	 * Function description: get the state that has the lowest population
	 * 
	 * @return: the state name with the minimum population
	 */
	public String leastPopulatedState() {
		int x = 2147483647;
		int y = 0;
		for (int i = 0; i < states.length; i++) {
			if (x >= states[i].getPopulation()) {
				x = states[i].getPopulation();
				y = i;
			}
		}
		return states[y].getName(); //to be completed
	}

	/**
	 * 15 marks
	 * Function description: get the average population of all states
	 * 
	 * @return: the average population
	 */
	public double averagePopulation() {
		double x = 0;
		for (int i = 0; i < states.length; i++) {
			x += states[i].getPopulation();
		}
		x = x / states.length;
		return x; //to be completed
	}

	/**
	 * 
	 * Function description: find the states that the population is higher than 10000000 (10 million)
	 * 
	 * @return: the number of state with the population more than 10000000 (10 million)
	 */
	public int getLargeStateCount() {
		int x = 0;
		for (int i = 0; i < states.length; i++) {
			if(states[i].isLargeState()) {
				x += 1;
			}
		}
		return x; //to be completed

	}

	/**
	 * 
	 * Function description: find the states that the population is less than 1000000 (1 million)
	 * 
	 * @return: the number of state with the population less than 1000000 (1 million)
	 */
	public int getSmallStateCount() {
		int x = 0;
		for (int i = 0; i < states.length; i++) {
			if(states[i].isSmallState()) {
				x += 1;
			}
		}
		return x; //to be completed
	}

	/**
	 * 
	 * Function description: determine the number of states that the names start with initial passed
	 * @param: initial: first letter of required states
	 * @return: return the number of state where the state names start with initial passed
	 */
	public int countStatesCountByInitial(char initial) {
		int x = 0;
		for (int i = 0; i < states.length; i++) {
			if(initial == states[i].getName().charAt(0)) {
				x += 1;
			}
		}
		return x; //to be completed	
	}	
	
	/**
	 * 
	 * Function description: find the states that the names start with initial passed
	 * @param: initial: first letter of required states
	 * @return: return the states where the state names start with initial passed
	 */
	public State[] getStatesCountByInitial(char initial) {
		State[] pineapple;
		int x = 0;
		
		for (int i = 0; i < states.length; i++) {
			if(initial == states[i].getName().charAt(0)) {
				x += 1;
			}
		}
		int count = 0;
		pineapple = new State[x];
		for (int i = 0; i < states.length; i++) {
			if(initial == states[i].getName().charAt(0)) {
					pineapple[0 + count] = states[i];
					count += 1;
			}
		}
		
		//you'll need to determine the size of the resulting array, populate it, and return it
		return pineapple; //to be completed	
	}	
	
	/**
	 * 
	 * re-arrange the states in decreasing order of population
	 */
	public void arrageByPopulation() {
		for (int j = 0; j < states.length-1; j++) {
			for (int i = 0; i < states.length-1; i ++) {
				if (states[i].getPopulation() < states[i+1].getPopulation()) {
					State x = states[i];
					states[i] = states[i+1];
					states[i+1] = x;
				}
			}
		}
		
		//to be completed
	}
}
