//MrGM Position
int MrGMx = 0;
int MrGMy = 0;

//Hammer Position
int hammery = 0;
int hammerx = 0;

//Score Track
int score = 0;
//Determine Changes in score
int pastscore = 0;
//Determine Door State
boolean door = false;
//Determine whether to drop object
boolean drop = false;
//Store Random Time for Door Open/Close
int rand = 0;
//Frame Counters for doors and hammers respectively
int frame = 0; 
int hframe = 0; 
//Random Time Counter for Door Open
int second = 0;
//Random Time Counter for Door Close
int counter = 0;
//Location for Hammer drop
int fall = 0;
//Time in between Hammer drops
int randFall = 0;
//Counter for fall drops
int fallTime = 0;
//Total time program running in seconds
int time = 0;
int pasttime = 0;
int x = 0;
int circlescore = 0;
int health = 0;
int reset = 0;

void setup() 
{
  size(512, 348);
  background(255);
  frameRate(60);
  rotate(0);

  fill(255);
  rect(width, height, width, height);

  //door_left
  noFill();
  strokeWeight(2);
  stroke(0);
  rectMode(CORNERS);
  rect(-30, 220, 30, 300);
  fill(0);
  rect(0, 230, 20, 250);
  ellipse(20, 265, 5, 5);

  //ground
  rectMode(CENTER);
  noStroke();
  fill(255, 140, 0);
  rect(256, 330, 512, 50);

  //trees
  rectMode(CORNERS);
  fill(160, 82, 45);
  rect(495, 160, 505, 180);
  fill(0, 150, 0);
  triangle(480, 170, 500, 130, 520, 170);
  triangle(485, 150, 500, 120, 515, 150);
  triangle(490, 130, 500, 110, 510, 130);

  fill(160, 82, 45);
  rect(475, 155, 485, 175);
  fill(0, 150, 0);
  triangle(460, 165, 480, 125, 500, 165);
  triangle(465, 145, 480, 115, 495, 145);
  triangle(470, 125, 480, 105, 490, 125);

  fill(160, 82, 45);
  rect(450, 170, 460, 190);
  fill(0, 150, 0);
  triangle(435, 180, 455, 140, 475, 180);
  triangle(440, 160, 455, 130, 470, 160);
  triangle(445, 140, 455, 120, 465, 140);


  //house
  strokeWeight(2);
  stroke(0);
  noFill();
  line(428, 300, 428, 200);

  //roof
  strokeWeight(6);
  stroke(0);
  noFill();
  line(420, 200, 480, 180);
  line(480, 180, 560, 200);
}

void draw()
{
  frame += 1;
  background(255);
  
  if (reset == 1){
    circlescore = 0;
    health = 0;
  }

  rotate(0);

  //door_left
  noFill();
  strokeWeight(2);
  stroke(0);
  rectMode(CORNERS);
  rect(-30, 220, 30, 300);
  fill(0);
  rect(0, 230, 20, 250);
  ellipse(20, 265, 5, 5);

  //ground
  rectMode(CENTER);
  noStroke();
  fill(255, 140, 0);
  rect(256, 330, 512, 50);

  //trees
  rectMode(CORNERS);
  fill(160, 82, 45);
  rect(495, 160, 505, 180);
  fill(0, 150, 0);
  triangle(480, 170, 500, 130, 520, 170);
  triangle(485, 150, 500, 120, 515, 150);
  triangle(490, 130, 500, 110, 510, 130);

  fill(160, 82, 45);
  rect(475, 155, 485, 175);
  fill(0, 150, 0);
  triangle(460, 165, 480, 125, 500, 165);
  triangle(465, 145, 480, 115, 495, 145);
  triangle(470, 125, 480, 105, 490, 125);

  fill(160, 82, 45);
  rect(450, 170, 460, 190);
  fill(0, 150, 0);
  triangle(435, 180, 455, 140, 475, 180);
  triangle(440, 160, 455, 130, 470, 160);
  triangle(445, 140, 455, 120, 465, 140);


  //house
  strokeWeight(2);
  stroke(0);
  noFill();
  line(428, 300, 428, 200);

  //roof
  strokeWeight(6);
  stroke(0);
  noFill();
  line(420, 200, 480, 180);
  line(480, 180, 560, 200);


  //Mr GM
  noStroke();
  fill(0);
  ellipse(MrGMx+70, MrGMy+250, 30, 30);
  triangle(MrGMx+60, MrGMy+290, MrGMx+70, MrGMy+250, MrGMx+80, MrGMy+285);
  strokeWeight(5);
  stroke(0);
  strokeCap(PROJECT);
  line(MrGMx+62, MrGMy+290, MrGMx+61, MrGMy+295);
  line(MrGMx+61, MrGMy+295, MrGMx+56, MrGMy+294);

  line(MrGMx+77, MrGMy+285, MrGMx+80, MrGMy+295);
  line(MrGMx+80, MrGMy+295, MrGMx+85, MrGMy+293);

  line(MrGMx+70, MrGMy+250, MrGMx+87, MrGMy+240);

  line(MrGMx+70, MrGMy+270, MrGMx+55, MrGMy+272);
  line(MrGMx+55, MrGMy+272, MrGMx+52, MrGMy+270);

  line(MrGMx+70, MrGMy+270, MrGMx+85, MrGMy+272);
  line(MrGMx+85, MrGMy+272, MrGMx+87, MrGMy+270);

  noStroke();
  fill(0);
  ellipse(MrGMx+85, MrGMy+250, 8, +7);
  fill(255);
  ellipse(MrGMx+80, MrGMy+260, 13, 7);
  
  circles(circlescore, health);

  //Counts the time the program has been running to determine when to open the door (seconds) and when to close the door (counter).
  //Any second between 3 and 8 seconds.
  //Random Generate for Door open
  if (second == 0) {
    //time between opening door
    rand = (int)random(3, 8);
  }
  //Second Counter
  if (frame % 60 == 0) {
    second += 1;
    time += 1;
    fallTime += 1;
    print("Seconds: ");
    println(time);
  }
  //Random Door Open
  if (second == rand) {
    door = true;
    counter = 1;
  }
  //Random Time for Door close
  if (counter >= 1 && frame % 60 == 0) {
    counter += 1;
  }
  //Random Generate for Door close
  if (counter == 1) {
    //time between closing door
    rand = (int)random(4, 9);
  }
  //Reset
  if (counter == rand || score > pastscore) {
    counter = 0;
    frame = 0;
    second = 0;
    pastscore = score;
    door = false;
  }

  //Hammers
  if (fallTime == 0) {
    //time between falling objects
    //1-5 seconds wait
    randFall = (int)random(3, 5);
  }
  if (fallTime == randFall && fall == 0) {
    //position 1-5
    fall = (int)random(2, 2);
  }
  if (fall == 1) { 
    strokeWeight(2);
    stroke(0);
    noFill();
    line(hammerx+75, hammery+35, hammerx+60, hammery+50);
    rectMode(CENTER);
    pushMatrix();
    translate(hammerx+70, hammery+40);
    rotate(PI/4);
    fill(0);
    rect(0, 0, 20, 10);
    popMatrix();

    if (x == 0) {
      pasttime = time;
      x += 1;
    }
    if (pasttime < time) {
      hammery += 50;
      x = 0;
      draw();
      strokeWeight(2);
      stroke(0);
      noFill(); 
      line(hammerx+75, hammery+35, hammerx+60, hammery+50);
      rectMode(CENTER);
      pushMatrix();
      translate(hammerx+70, hammery+40);
      rotate(PI/4);
      fill(0);
      rect(0, 0, 20, 10);
      popMatrix();
    }

    if (hammery > 190 && MrGMx == 0) {
      MrGMx = 0;
      MrGMy = 0;
      time = 0;
      fall = 0;

      hammery = 0;
      hammerx = 0;

      drop = false;
      rand = 0;
      health ++;

      frame = 0; 
      hframe = 0; 
      second = 0;
      counter = 0;
      fall = 0;
      randFall = 0;
      fallTime = 0;
      time = 0;
      pasttime = 0;
      x = 0;
    }
    if (hammery > 220) {

      hammery = -50;
      hammerx = 0;
      fall = 0;
      fallTime = 0;
      randFall = 0;
      circlescore++;

      draw();
      strokeWeight(2);
      stroke(0);
      noFill(); 
      line(hammerx+75, hammery+35, hammerx+60, hammery+50);
      rectMode(CENTER);
      pushMatrix();
      translate(hammerx+70, hammery+40);
      rotate(PI/4);
      fill(0);
      rect(0, 0, 20, 10);
      popMatrix();
      draw();
    }
  }
  if (fall == 2) {
    hammerx = 77;
    strokeWeight(2);
    stroke(0);
    noFill();
    line(hammerx+75, hammery+35, hammerx+60, hammery+50);
    rectMode(CENTER);
    pushMatrix();
    translate(hammerx+70, hammery+40);
    rotate(PI/4);
    fill(0);
    rect(0, 0, 20, 10);
    popMatrix();

    if (x == 0) {
      pasttime = time;
      x += 1;
    }
    if (pasttime < time) {
      hammery += 50;
      x = 0;
      draw();
      strokeWeight(2);
      stroke(0);
      noFill(); 
      line(hammerx+75, hammery+35, hammerx+60, hammery+50);
      rectMode(CENTER);
      pushMatrix();
      translate(hammerx+70, hammery+40);
      rotate(PI/4);
      fill(0);
      rect(0, 0, 20, 10);
      popMatrix();
    }

    if (hammery > 190 && MrGMx == 77) {
      MrGMx = 0;
      MrGMy = 0;
      time = 0;
      fall = 0;

      hammery = 0;
      hammerx = 0;
      health ++;

      drop = false;
      rand = 0;

      frame = 0; 
      hframe = 0; 
      second = 0;
      counter = 0;
      fall = 0;
      randFall = 0;
      fallTime = 0;
      time = 0;
      pasttime = 0;
      x = 0;
    }
    if (hammery > 220) {

      hammery = -50;
      hammerx = 0;
      fall = 0;
      fallTime = 0;
      randFall = 0;
      circlescore ++;


      strokeWeight(2);
      stroke(0);
      noFill(); 
      line(hammerx+75, hammery+35, hammerx+60, hammery+50);
      rectMode(CENTER);
      pushMatrix();
      translate(hammerx+70, hammery+40);
      rotate(PI/4);
      fill(0);
      rect(0, 0, 20, 10);
      popMatrix();
      draw();
    }
  }



  //Generate Door depending on open(true) or closed(false)
  if (door == false) {
    strokeWeight(2);
    stroke(0);
    noFill();
    rectMode(CORNERS);
    rect(430, 220, 480, 300);
    fill(0);
    rect (440, 230, 470, 250);
    ellipse(440, 265, 5, 5);
  }
  if (door == true) {
    strokeWeight(2);
    stroke(0);
    noFill();
    rectMode(CORNERS);
    rect(430, 220, 480, 300);
    fill(0, 255, 0);
    rect (440, 230, 470, 250);
    ellipse(440, 265, 5, 5);
  }
}

void keyPressed()
{
  if (key == CODED) {
    //Left movement as long as not near left edge
    if (keyCode == LEFT && MrGMx > 0) {
      MrGMx -= 77;
    }
    if (keyCode == RIGHT && MrGMx < 385) {
      //If MrGM enters door
      if (MrGMx == 308 && door == true) {
        MrGMx += 77;

        circlescore += 3;

        MrGMx = -77;
        MrGMy = 0;
        time = 0;
        fall = 0;

        frame = 0; 
        hframe = 0; 
        second = 0;
        counter = 0;
        fall = 0;
        randFall = 0;
        fallTime = 0;
        time = 0;
        pasttime = 0;
        x = 0;
      }
      //If MrGM tries to enter closed door
      if (MrGMx == 308 && door == false) {
      }
      //Movement right not near door
      else {
        MrGMx += 77;
      }
    }
  }
}

void circles(int score, int health) {
  int count = score;
  int x = 44;
  int y = 46;
  int collumn = 0;
  int row = 0;

  count += 6*health;

  while (count > 0) {
    if (health > 0) {
      fill(255, 0, 0);
    } else {
      fill(0);
    }

    ellipse(x, y, 85, 85);

    if (x > 450) {
      x = 44;
      if (y > 300) {
        //maxed reset here
        println("GAME OVER!!!!!!!!!");
        reset = 1;

        MrGMx = 0;
        MrGMy = 0;
        door = false;
        time = 0;
        fall = 0;

        hammery = 0;
        hammerx = 0;

        drop = false;
        rand = 0;
        health ++;

        frame = 0; 
        hframe = 0; 
        second = 0;
        counter = 0;
        fall = 0;
        randFall = 0;
        fallTime = 0;
        time = 0;
        pasttime = 0;
        x = 0;
      }
      health--;
      y += 85;
    } else {
      x += 85;
    }

    count--;
  }
}