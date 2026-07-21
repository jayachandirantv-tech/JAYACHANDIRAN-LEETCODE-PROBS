class Solution {
    public int maxActiveSectionsAfterTrade(String s) {
        String t="1"+s+"1";
        int totalones=0;
        for(int in=0;in<s.length();in++)
        {
            if(s.charAt(in)=='1')
            {
                totalones++;
            }
        }
        int ans=totalones;
        List<Pair>blocks=new ArrayList<>();
        int count=1;
        for(int in=1;in<t.length();in++)
        {
            if(t.charAt(in)==t.charAt(in-1))
            {
                count++;
            }
            else
            {
                blocks.add(new Pair(t.charAt(in-1),count));
                count=1;
            }
        }
        blocks.add(new Pair(t.charAt(t.length() - 1), count));
        for(int in=1;in<blocks.size()-1;in++)
        {
            if(blocks.get(in).ch=='1' && blocks.get(in+1).ch=='0' && blocks.get(in-1).ch=='0')
            {
                int temp=blocks.get(in-1).count+totalones+blocks.get(in+1).count;
                ans=Math.max(temp,ans);
            }
        }
        return ans;
    }
    private static class Pair{
        char ch;
        int count;
        Pair(char ch,int count)
        {
            this.ch=ch;
            this.count=count;
        }
    }
}