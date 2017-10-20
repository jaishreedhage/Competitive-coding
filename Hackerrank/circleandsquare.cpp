#include <bits/stdc++.h>
#define PI 3.14159265

using namespace std;


int main(){
    int w;
    int h;
    cin >> w >> h;
    int circleX;
    int circleY;
    int r;
    cin >> circleX >> circleY >> r;
    int x1,y1,x3,y3,q1x,q1y,q2x,q4y,q3x,q3y,calcY;

    cin >> x1 >> y1 >> x3 >> y3;
    
    int ar[h][w];
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            ar[i][j] = 0;
        
    int cxrp = circleX + r, cyrp = circleY + r;
    
    if(circleX >=0 && circleX<w && circleY>=0 && circleY<h)
        ar[circleY][circleX] = 1;
    for(int i=0;i<=360;i++){
        double shit1,shit2,sintheta,costheta;
        sintheta = sin (i*PI/180);
        costheta = cos (i*PI/180);

        shit2 = r*sintheta + circleY;
        shit1 = r*costheta + circleX;
        
        q1x = floor(shit1);
        q1y = floor(shit2);

        // cout<<"***"<<q1x<<" "<<q1y<<" "<<shit1<<" "<<shit2<<endl;

        if(shit1>=q1x-0.5 && shit1<=q1x+0.5 && shit2>=q1y-0.5 && shit2<=q1y+0.5){
            cout<<q1x<<" "<<q1y<<endl;
            if(q1x >=0 && q1x<w && q1y>=0 && q1y<h)
                ar[q1y][q1x] = 1;
            // q2x = 2 * circleX - q1x;
            // if(q2x >=0 && q2x < w && calcY>=0 && calcY<h)
            //     ar[q1y][q2x] = 1;
            // q4y = 2*circleY - q1y;
            // if(q2x >=0 && q2x<w && q4y>=0 && q4y<h)
            //     ar[q4y][q2x] = 1;
            // q3y = q4y;
            // q3x = q2x;
            // if(q3x >=0 && q3x < w && q3y>=0 && q3y<h)
            //     ar[q3y][q3x] = 1;
            // for(int j=q1y+1;j<q4y;j++)
            //     if(q1x >=0 && q1x<w && j>=0 && j<h)
            //         ar[j][q1x] = 1;
            // for(int j=q1y+1;j<=q3y;j++)
            //     if(q2x >=0 && q2x<w && j>=0 && j<h)
            //         ar[j][q2x] = 1;
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++)
            cout<<ar[i][j];
        cout<<endl;
    }
    // your code goes here
    return 0;
}
