
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int N = 5;
        int astdt = 0, astm = 0, aedt = 0, aem = 0;
        int bstdt = 0, bstm = 0, bedt = 0, bem = 0;

        for (int in = 0; in < N; in++) {
            if (in == 2) {
                continue;
            }

            if (in < 2) {
                astm = astm * 10 + (arriveAlice[in] - '0');
                aem = aem * 10 + (leaveAlice[in] - '0');
                bstm = bstm * 10 + (arriveBob[in] - '0');
                bem = bem * 10 + (leaveBob[in] - '0');
            }

            if (in > 2) {
                astdt = astdt * 10 + (arriveAlice[in] - '0');
                aedt = aedt * 10 + (leaveAlice[in] - '0');
                bstdt = bstdt * 10 + (arriveBob[in] - '0');
                bedt = bedt * 10 + (leaveBob[in] - '0');
            }
        }

        // Convert month and day into a comparable day number
        int days[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

       int alicest=days[astm-1]+astdt;
       int aliceend=days[aem-1]+aedt;
       int bobst=days[bstm-1]+bstdt;
       int bobed=days[bem-1]+bedt;
       
       int start=max(alicest,bobst);
       int end=min(aliceend,bobed);

       int fin=max(0,end-start+1);
       return fin;
    }
};
