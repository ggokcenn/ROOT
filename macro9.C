void macro9(){
    TH2F *h = new TH2F("h","Contour Examples",300,-4,4,300,-20,20);
    //2d diagram, 300bin x -4to4 and 300bin -20to20
    h-> SetStats(0);//disable statistics box
    h-> SetContour(200);//contour level is 200

    float px,py;
    for (int i=0; i<250000; i++){
        gRandom -> Rannor(px,py);
//Rannor func generate two random number,gauss dist
        h->Fill(px-1,5*py);//positions
        h->Fill(2+0.5*px,2*py-10.,0.1);//positions,weight=0.1
    }
    h->Draw("colz");//color-filled contour plot

}
