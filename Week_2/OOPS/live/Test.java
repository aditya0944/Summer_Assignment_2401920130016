package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        Veena myVeena = new Veena();
        myVeena.play();

        Saxophone mySax = new Saxophone();
        mySax.play();

        System.out.println("\n--- Playing via Interface Reference ---");
        
        Playable instrument;

        instrument = myVeena;
        instrument.play();

        instrument = mySax;
        instrument.play();
    }
}