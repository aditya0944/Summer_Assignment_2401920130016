package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        // a. Create an instance of Veena and call play()
        Veena myVeena = new Veena();
        myVeena.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone mySax = new Saxophone();
        mySax.play();

        // c. Place instances in a Playable variable and call play()
        System.out.println("\n--- Playing via Interface Reference ---");
        
        Playable instrument;

        instrument = myVeena;
        instrument.play();

        instrument = mySax;
        instrument.play();
    }
}