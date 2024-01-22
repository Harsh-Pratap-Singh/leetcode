int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int trial = minutesToTest/minutesToDie + 1;
        int pig = 0;
        
        int maxpig = pow(trial,pig);
        while(maxpig < buckets){
            pig++;
            maxpig = pow(trial,pig);
        }
        return pig;

    }