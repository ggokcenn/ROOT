{
TCanvas *ca = new TCanvas("ca","Title",1200,1000);
//creates a canvas names "c1" 1200x1000 pixels
ca->Divide(3,4);
//divides 3 column and 4 row
//123
//456
//789
//101112
for(int i=1;i<=12;i++){
    TString funcName  = TString::Format("f_%d",i);
    //unique name for each func
//TString a class of ROOT
//TString::Format a static method of TString that format string
//if i is 1 outcome is f_1
    TF1 *f = new TF1(funcName,TString::Format("%d*pow(x,%d)",i,i),0,10);
//
    ca->cd(i);
    f->Draw();
}

}
