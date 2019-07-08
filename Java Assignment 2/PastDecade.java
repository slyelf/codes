package stage3;

import java.io.FileNotFoundException;
import java.text.DecimalFormat;
import java.util.ArrayList;

import javax.swing.text.TabableView;

import stage2.*;
import stage2.substage1.*;
import stage2.substage2.*;
import stage2.substage3.*;

public class PastDecade {
	private ArrayList<PointsTable> endOfSeasonTables;
	private int startYear;

	/**
	 * DO NOT MODIFY
	 * @param start
	 * @throws FileNotFoundException
	 */
	public PastDecade(int start) throws FileNotFoundException {
		endOfSeasonTables = new ArrayList<PointsTable>();
		DecimalFormat df = new DecimalFormat("00");
		startYear = start;
		for(int i=startYear; i < startYear+10; i++) {
			endOfSeasonTables.add(new PointsTable(new Season(df.format(i)+df.format(i+1)+".csv")));
		}
	}

	/**
	 * DO NOT MODIFY
	 */
	public String toString() {
		String result = "";
		for(PointsTable table: endOfSeasonTables) {
			result = result + table + "\n";
		}
		return result;
	}
	
	/**
	 * 
	 * @param team
	 * @return a list of the passed team's standings from oldest to newest.
	 * if a team doesn't appear in a particular season, null should be inserted
	 * for that season
	 */
	public ArrayList<Integer> getStandings(String team) {
		ArrayList<Integer> lastten = new ArrayList<Integer>();
	
		for (int i = 0; i < 10; i ++) {
			if (endOfSeasonTables.get(i).getStanding(team) == null || endOfSeasonTables.get(i).getStanding(team) == -1) {
				lastten.add(null);
			} else if (endOfSeasonTables.get(i).getStanding(team) != -1) {
				lastten.add(endOfSeasonTables.get(i).getStanding(team));
			}
			
		}
//		System.out.println(lastten.toString());
		
		return lastten;
	}
	
	/**
	 * D question
	 * @param team
	 * @return the weighted standing of the team passed as the parameter.
	 * the oldest season (first item in list endOfSeasonTables) has weight 1,
	 * the second-oldest season (second item in list endOfSeasonTables) has weight 2,
	 * ...
	 * the latest season (last item in list endOfSeasonTables) has weight endOfSeasonTables.size(),
	 * 
	 * Example (I wrote an explanation but the example is much better):
	 * 
	 * Return null if the club hasn't played during ANY season
	 * Note: It is possible that a club hasn't played some seasons during the last decade,
	 * in such a situation, that year should simply be ignored for the club.
	 * 
	 * For example, 
	 * Newcastle's standings are [null, 12, 5, 16, 10, 15, 18, null, 10, 13]
	 * null means they didn't play 09/10 16/17 seasons
	 * Their weighted standing would be:
	 * (2*12 + 3*5 + 4*16 + 5*10 + 6*15 + 7*18 + 9*10 + 10*13)/(2+3+4+5+6+7+9+10)
	 * 
	 * Brighton only played season 17/18 and 18/19.
	 * Hence their weighted standing would be (9*15 + 10*17)/(9+10) = 305/19 = 16.05 
	 */
	public Double getWeightedStanding(String team) {
		Double total = 0.0;
		int divisor = 0;
		
		for (int i = 0; i < endOfSeasonTables.size(); i ++) { 
			if (endOfSeasonTables.get(i).getStanding(team) == null || endOfSeasonTables.get(i).getStanding(team) == -1) {
				
			} else if (endOfSeasonTables.get(i).getStanding(team) != null) {
				total += (i + 1) * endOfSeasonTables.get(i).getStanding(team);
				divisor += (i + 1);
			}
		}
		
//		System.out.println(team);
//		System.out.println(total);
//		System.out.println(divisor);
		
		if (total == 0.0) {
			total = null;
		} else {
			total /= divisor;
		}
		
		return total;
	}
	
	/**
	 * HD question
	 * @return a table with clubs ranked based on their weighted standings
	 */
	public ArrayList<String> getWeightedTable() {
		ArrayList<String> weightTable = new ArrayList<String>();
		Double high = Double.MAX_VALUE;
		
		
		//for (int i = 0; i < endOfSeasonTables.size(); i++) {
		//	if (endOfSeasonTables.get(i).get) {
		//		
		//	}
		//}
		
		return weightTable; //to be completed
	}
}
